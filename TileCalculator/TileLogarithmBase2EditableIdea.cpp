#include "TileLogarithmBase2EditableIdea.h"
#include <cmath>

TileLogarithmBase2EditableAttributes::TileLogarithmBase2EditableAttributes()
{
    m_listName = "Tile Logarithm Base 2 Editable";
    m_displayName = "Logarithm Base 2";
    m_authors << "dBob";
    m_description = "Calculates the logarithm base 2 of the inputted number";
    m_iconPath = "qrc:/Icons/LogarithmBase2.png";

    m_dataTypesIn.push_back(Magic<NumberDataTypeAttributes>::cast().id());
    m_dataTypesOut.push_back(Magic<NumberDataTypeAttributes>::cast().id());

    m_embeddedQMLPath = ":/QML/TileLogarithmBase2EditableIdea.qml";
    m_minimizedQMLPath = ":/QML/LogarithmBase2Minimized.qml";
    m_minimizable = true;
    m_minimizedName = "Logarithm\nBase 2";
    m_differentNameOnMinimized = true;

    m_externalQMLPaths << ":/QML/LogarithmBase2EditableControls.qml";
    m_externalQMLLocations.push_back({true, false, 10,0});

    m_gear = true;
}


TileLogarithmBase2EditableIdea::TileLogarithmBase2EditableIdea() :
    m_columns(4),
    m_showSecondControl(true)
{

}


QJsonObject TileLogarithmBase2EditableIdea::save() const
{
    QJsonObject saveJson = Idea::save();
    saveJson["cc"] = m_columns;
    saveJson["ssc"] = m_showSecondControl;
    return saveJson;
}

void TileLogarithmBase2EditableIdea::load(const QJsonObject &obj)
{
    QJsonValue v = obj["cc"];
    if(!v.isUndefined())
    {
        m_columns = v.toInt();
        emit columnsChanged(m_columns);
    }

    v = obj["ssc"];
    if(!v.isUndefined())
    {
        m_showSecondControl = v.toBool();
        emit showSecondControlChanged(m_showSecondControl);
    }
    Idea::load(obj);
}

const IdeaAttributes TileLogarithmBase2EditableIdea::attributes()
{
    return Magic<TileLogarithmBase2EditableAttributes>::cast();
}

void TileLogarithmBase2EditableIdea::resetDisplay()
{
    if(valid())
    {
        double n = m_input.lock()->number();
        double log = std::log2(n);
        emit display(n, log);
    }
}

int TileLogarithmBase2EditableIdea::columns() const
{
    return m_columns;
}

void TileLogarithmBase2EditableIdea::setColumns(int newColumns)
{
    if (m_columns == newColumns)
        return;

    m_columns = newColumns;
    emit columnsChanged(m_columns);
}

bool TileLogarithmBase2EditableIdea::showSecondControl() const
{
    return m_showSecondControl;
}

void TileLogarithmBase2EditableIdea::setShowSecondControl(bool newShowSecondControl)
{
    if (m_showSecondControl == newShowSecondControl)
        return;

    m_showSecondControl = newShowSecondControl;
    emit showSecondControlChanged(m_showSecondControl);
}

