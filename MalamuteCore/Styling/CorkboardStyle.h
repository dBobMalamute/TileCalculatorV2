#ifndef CORKBOARDSTYLE_H
#define CORKBOARDSTYLE_H

#include <QObject>
#include <QColor>

class CorkboardStyle : public QObject
{
    Q_OBJECT
public:
    explicit CorkboardStyle(QObject *parent = nullptr);

    Q_INVOKABLE QColor selectionRectangleColor() const;
    Q_INVOKABLE int selectionRectangleWidth() const;
    Q_INVOKABLE int selectionRectangleRadius() const;
    Q_INVOKABLE QString backgroundImagePath() const;
    Q_INVOKABLE QColor backgroundTintColor() const;

private:
    QColor m_selectionRectangleColor = QColor(0xcc5708);
    int m_selectionRectangleWidth = 4;
    int m_selectionRectangleRadius = 4;

    QString m_backgroundImagePath = "qrc:/Images/CorkboardImage.jpg";
    QColor m_backgroundTintColor = "#65202020";
};

#endif // CORKBOARDSTYLE_H
