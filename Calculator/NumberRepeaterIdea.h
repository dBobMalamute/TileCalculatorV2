#ifndef NUMBERREPEATERIDEA_H
#define NUMBERREPEATERIDEA_H

#include "../MalamuteCore/InheritedClasses/Idea.h"
#include "../DataTypes/NumberDataType.h"

struct NumberRepeaterAttributes : public IdeaAttributes
{
    NumberRepeaterAttributes();
};

class NumberRepeaterIdea : public Idea
{
    Q_OBJECT

public:
    NumberRepeaterIdea();
    const IdeaAttributes attributes() override;

    QJsonObject save() const override;
    void load(const QJsonObject &obj) override;

    std::shared_ptr<DataType> dataOut(PlugNumber plugNumber) override;
    void onNewDataIn(std::shared_ptr<DataType> data, int) override;

signals:
    void displayNumber(QString value);
    void clearDisplay();

public slots:
    double getNum();

private:
    std::shared_ptr<NumberDataType> m_output;
};





#endif
