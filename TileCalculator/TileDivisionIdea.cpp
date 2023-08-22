#include "TileDivisionIdea.h"

TileDivisionAttributes::TileDivisionAttributes()
{
    m_listName = "Tile Division";
    m_displayName = "Division";
    m_authors << "dBob";
    m_description = "This idea represents the division of one number by another";
    m_iconPath = "qrc:/Icons/Division.png";

    m_dataTypesIn.push_back(Magic<NumberDataTypeAttributes>::cast().id());
    m_dataTypesIn.push_back(Magic<NumberDataTypeAttributes>::cast().id());
    m_dataTypesOut.push_back(Magic<NumberDataTypeAttributes>::cast().id());

    m_gear = true;

    m_embeddedQMLPath = ":/QML/TileDivisionIdea.qml";
    m_minimizedQMLPath = ":/QML/DivisionMinimized.qml";
    m_minimizable = true;
}

const IdeaAttributes TileDivisionIdea::attributes()
{
    return Magic<TileDivisionAttributes>::cast();
}

void TileDivisionIdea::resetDisplay()
{
    if(valid())
    {
        setupDisplay();
    }
}

TileDivisionIdea::TileDivisionIdea()
{

}


