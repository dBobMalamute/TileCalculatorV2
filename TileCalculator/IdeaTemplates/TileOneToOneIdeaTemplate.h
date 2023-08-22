#ifndef TILEONETOONEIDEATEMPLATE_H
#define TILEONETOONEIDEATEMPLATE_H

#include "../../MalamuteCore/InheritedClasses/Idea.h"
#include "../../DataTypes/NumberDataType.h"

class TileOneToOneIdeaTemplate : public Idea
{
    Q_OBJECT

public:
    TileOneToOneIdeaTemplate();

    void onNewDataIn(std::shared_ptr<DataType> dataType, PlugNumber plugNumber) override;
    std::shared_ptr<DataType> dataOut(PlugNumber plugNumber) override;

signals:
    void display(double input, double output);
    void clear();

protected:
    std::weak_ptr<NumberDataType> m_input;
    std::shared_ptr<NumberDataType> m_result;

    virtual void validate() = 0;
};

#endif // ONETOONEIDEATEMPLATE_H
