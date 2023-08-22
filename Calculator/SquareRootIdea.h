#ifndef SQUAREROOTIDEA_H
#define SQUAREROOTIDEA_H

#include "../MalamuteCore/InheritedClasses/Idea.h"
#include "../DataTypes/NumberDataType.h"

struct SquareRootAttributes : public IdeaAttributes
{
    SquareRootAttributes();
};

class SquareRootIdea : public Idea
{
    Q_OBJECT

public:
    explicit SquareRootIdea();
    const IdeaAttributes attributes() override;

    void onNewDataIn(std::shared_ptr<DataType> dataType, PlugNumber plugNumber) override;
    std::shared_ptr<DataType> dataOut(PlugNumber plugNumber) override;

    void updateOnOutPortLabelColor() override;
    void updateOnInPortLabelColor() override;

signals:
    void display(double input, double positiveRoot);
    void clear();

private:
    std::weak_ptr<NumberDataType> m_input;
    std::shared_ptr<NumberDataType> m_posResult;
    std::shared_ptr<NumberDataType> m_negResult;

    void validate();
    void compute(double n1);

protected:
    void setupDisplay();
};

#endif // SQUAREROOTIDEA_H
