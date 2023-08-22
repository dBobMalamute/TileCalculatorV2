﻿#ifndef IDEA_H
#define IDEA_H

#include <QObject>
#include <QJsonObject>
#include <QJsonArray>
#include <QGuiApplication>

#include "../Plug.h"
#include "DataType.h"
#include "IdeaAttributes.h"
#include "../Styling/LabelStyle.h"

// The current status of the idea.
// change this from working to show a colored rectangle to show local information.
// Errors should be shown locally whenever possible. This is how you show errors.
enum class IdeaStatus
{
    Working, // Normal. Doesn't show anything. You need to click on the idea to see what's happening.
    StandBy, // Waiting for a task. This is designed to look unobtrusive. Not a warning, but not doing stuff
    Warning, // Something is fishy. The idea is doing something, but you should think for a second if it is right.
    Error, // An error. Should be fixed here. Important but not urgent. Do not confuse important and urgent. They are different
    DisplayWarning, // The box is doing the correct thing. The visual can't handle this situation.
    Fatal // Important and Urgent. This should almost never be used.
};


class Idea : public QObject
{
    Q_OBJECT
    Q_PROPERTY(bool valid READ valid NOTIFY validChanged)
    Q_PROPERTY(bool minimized READ minimized WRITE setMinimized NOTIFY minimizedChanged)
    Q_PROPERTY(QList<QColor> inPortLabelColors READ inPortLabelColors NOTIFY inPortLabelColorsChanged)
    Q_PROPERTY(QList<QColor> outPortLabelColors READ outPortLabelColors NOTIFY outPortLabelColorsChanged)

public:
    Idea();
    virtual ~Idea() = 0;

    ///Tell the program where the attributes (name, icon, etc) for the idea are. Use the Magic<NameHereIdea>(); way.
    virtual const IdeaAttributes attributes() = 0;

    ///Override this if you want the idea to save/copy/undo/redo any internal variables.
    virtual QJsonObject save() const;

    ///Override this if you want the idea to load/paste/undo/redo any internal variables.
    virtual void load(QJsonObject const & obj);

    ///Override this to add things to a custom qml Context.
    virtual void finishSetupQmlContext();

    ///Override this to allow the idea to accept new data. Remember to cast the data type.
    virtual void onNewDataIn(std::shared_ptr<DataType> dataType, PlugNumber plugNumber);

    ///Override this so the program knows what data to send out.
    virtual std::shared_ptr<DataType> dataOut(PlugNumber plugNumber);

    ///The system calls this when a display might need to be reset. An example is when maximizing a box
    /// The display might not come back correct. Override this method to make it work.
    virtual void resetDisplay();

    // This is called whenever the color on an in port is changed.
    virtual void updateOnInPortLabelColor();

    // This is called whenever the color on an out port is changed.
    virtual void updateOnOutPortLabelColor();

    ///Set the status of the idea. Working or Warning status is required for the idea to communicate with other ideas.
    void setStatus(IdeaStatus status, QString shortMessage, QString longMessage);
    ///Sets the idea to StandBy, StandBy, Waiting for user input.
    void setDefaultStatus();

    // These methods shouldn't be called by inherited classes.
    QString shortStatusMessage() const;
    QString longStatusMessage() const;
    IdeaStatus status() const;

    /// The idea is working, warning or has a display error.
    bool valid() const;

    /// Returns true is the idea is minimized.
    bool minimized() const;

    //The colors of the labels on the text for the ports going into the idea
    QList<QColor> inPortLabelColors() const;
    //The colors of the labels on the text for the ports going out of the idea
    QList<QColor> outPortLabelColors() const;

    void prepareInPortLabelColors(int n, QColor color);
    void prepareOutPortLabelColors(QList<QColor> colorList);

signals:

    /// Lets the program know that new data is available on a specific plug out.
    void newData(PlugNumber plugNumber);

    /// Lets the program know that new data is available on every plug.
    void newDataAllPlugs();

    /// Lets the program know to remove all out data from an idea. Called automatically
    /// on status of standby, error, or fatal. (You probably don't need to use it).
    void clearDataAllPlugs();

    /// Lets the program know the status has changed. (Called automatically).
    void statusChanged();

    /// Starts the gear spinning.
    void startSpinningGear();

    /// Stops the gear. The gear doesn't stop immediately, but instead 0.5-1 second later.
    void stopSpinningGear();

    /// Lets the program know a parameter changed. This is so undo/redo can effect the internal idea
    /// variables.
    void reportParamsChanged(QJsonObject oldParams, QJsonObject newParams);

    /// Tells the system to remove plugs. Done this way so the undo/redo framework can be used.
    void disconnectPlugs(std::vector<UnplugWiresInfo> unplugWires);

    /// Sets a new context property in the embedded or external qml. Probably shouldn't need this.
    void setContextProperty(QString name, QObject* obj);

    /// Call this signal from a qml file to delete the ith external qml file.
    void deleteExternalQML(int i);

    void validChanged(bool valid);

    void minimizedChanged(bool minimized);

    void inPortLabelColorsChanged(QList<QColor> inPortLabelColors);
    void outPortLabelColorsChanged(QList<QColor> outPortLabelColors);

public slots:
    ///Sends any text to the system-wide clipboard. Useful when you want to copy an output from a box.
    void sendTextToClipboard(QString text);
    /// Can be used to minimize the idea.
    void setMinimized(bool minimized);

    void setInPortLabelColor(int i, QColor color);
    void setOutPortLabelColor(int i, QColor color);
    const QColor getInPortLabelColor(int i);
    const QColor getOutPortLabelColor(int i);

private:
    QString m_shortStatusMessage = QString("Standing By");
    QString m_longStatusMessage = QString("Waiting for user input");
    IdeaStatus m_status = IdeaStatus::StandBy;
    bool m_minimized;

protected:
    QList<QColor> m_inPortLabelColors;
    QList<QColor> m_outPortLabelColors;
};

#endif // IDEA_H
