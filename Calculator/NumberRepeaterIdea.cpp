#include "NumberRepeaterIdea.h"

NumberRepeaterAttributes::NumberRepeaterAttributes()
{
    m_listName = "Number Repeater";
    m_displayName = "";
    m_authors << "dBob";
    m_description = "Displays a single number in the middle of a node in a coherent way.";
    m_iconPath =  "qrc:/Icons/NumberRepeater.png";

    m_dataTypesIn.push_back(Magic<NumberDataTypeAttributes>::cast().id());
    m_labelsIn << "";
    m_dataTypesOut.push_back(Magic<NumberDataTypeAttributes>::cast().id());
    m_labelsOut << "";
    m_customLabels = true;

    m_embeddedQMLPath = ":/QML/NumberRepeater.qml";
}

NumberRepeaterIdea::NumberRepeaterIdea()
{
    setStatus(IdeaStatus::Working, "", "");
    m_output = std::make_shared<NumberDataType>(0.0);
}

const IdeaAttributes NumberRepeaterIdea::attributes()
{
    return Magic<NumberRepeaterAttributes>::cast();
}

QJsonObject NumberRepeaterIdea::save() const
{
    QJsonObject ideaJson = Idea::save();
    ideaJson["n"] = m_output->number();
    return ideaJson;
}

void NumberRepeaterIdea::load(const QJsonObject &obj)
{
    QJsonValue v = obj["n"];

    if (!v.isUndefined())
    {
        m_output = std::make_shared<NumberDataType>(v.toDouble());
        emit newData(0);

    }
    Idea::load(obj);
}

std::shared_ptr<DataType> NumberRepeaterIdea::dataOut(PlugNumber)
{
    return m_output;
}

void NumberRepeaterIdea::onNewDataIn(std::shared_ptr<DataType> data, int)
{
    auto numberData = std::dynamic_pointer_cast<NumberDataType>(data);

    if (numberData)
    {
        emit displayNumber(QString::number(numberData->number()));

        m_output = std::make_shared<NumberDataType>(numberData->number());
        emit newData(0);
    }
}

double NumberRepeaterIdea::getNum()
{
    return m_output->number();
}

