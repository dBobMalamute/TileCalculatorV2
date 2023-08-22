#ifndef TILELOGARITHMBASE2EDITABLEIDEA_H
#define TILELOGARITHMBASE2EDITABLEIDEA_H

#include "Calculator/LogarithmBase2Idea.h"

struct TileLogarithmBase2EditableAttributes : public IdeaAttributes
{
    TileLogarithmBase2EditableAttributes();
};

class TileLogarithmBase2EditableIdea : public LogarithmBase2Idea
{
    Q_OBJECT

    Q_PROPERTY(int columns READ columns WRITE setColumns NOTIFY columnsChanged)
    Q_PROPERTY(bool showSecondControl READ showSecondControl WRITE setShowSecondControl NOTIFY showSecondControlChanged)

public:
    explicit TileLogarithmBase2EditableIdea();
    const IdeaAttributes attributes() override;

    QJsonObject save() const override;
    void load(const QJsonObject &obj) override;

    void resetDisplay() override;

    int columns() const;
    bool showSecondControl() const;

public slots:
    void setColumns(int newColumns);
    void setShowSecondControl(bool newShowSecondControl);

signals:
    void columnsChanged(int columns);
    void showSecondControlChanged(bool showSecondControl);

private:
    int m_columns;
    bool m_showSecondControl;

};

#endif // TILELOGARITHMBASE2EDITABLEIDEA_H
