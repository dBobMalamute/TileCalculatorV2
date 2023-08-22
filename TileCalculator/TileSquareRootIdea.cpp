#include "TileSquareRootIdea.h"
#include <cmath>

TileSquareRootAttributes::TileSquareRootAttributes()
{
    m_listName = "Tile Square Root";
    m_displayName = "Square Root";
    m_authors << "dBob";
    m_description = "Calculates the square roots of a number. A square root of a number is the number "
                  "which when multiplied by itself produces the original number";

    m_iconPath = "qrc:/Icons/SquareRoot.png";

    m_dataTypesIn.push_back(Magic<NumberDataTypeAttributes>::cast().id());
    m_dataTypesOut.push_back(Magic<NumberDataTypeAttributes>::cast().id());
    m_dataTypesOut.push_back(Magic<NumberDataTypeAttributes>::cast().id());

    m_gear = true;

    m_embeddedQMLPath = ":/QML/TileSquareRootIdea.qml";
    m_minimizedQMLPath = ":/QML/SquareRootMinimized.qml";
    m_minimizable = true;
}

TileSquareRootIdea::TileSquareRootIdea()
{

}

const IdeaAttributes TileSquareRootIdea::attributes()
{
    return Magic<TileSquareRootAttributes>::cast();
}

void TileSquareRootIdea::resetDisplay()
{
    if(valid())
        setupDisplay();
}
