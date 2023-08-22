import QtQuick 2.12

Rectangle
{
    id: root

    property double delay: 1000;
    property int borderWidth: 0;
    property color iColor: "black";
    property color fColor: "black";
    property rect initialCoords: Qt.rect(1,1,0,0);
    property point finalCoords: Qt.point(0,0)

    opacity:  0.0;

    color: iColor
    border.color: Qt.darker(iColor);
    border.width: borderWidth;

    function startActionAnimation()
    {
        resetAnimation.stop();
        actionAnimation.start();
    }

    function startResetAnimation()
    {
        actionAnimation.stop();
        root.opacity = 0.0;
        root.width = initialCoords.width;
        root.height = initialCoords.height
        root.color = iColor;
        root.border.color = Qt.darker(iColor);
        root.x = initialCoords.x
        root.y = initialCoords.y;
        resetAnimation.start();
    }

    SequentialAnimation
    {
        id: actionAnimation
        NumberAnimation
        {
            target: root
            property: "opacity"
            to: 0.75
            duration: 500
        }        
        PauseAnimation
        {
            duration: 6000
        }
        PropertyAnimation
        {
            target: root
            property: "color"
            to: fColor
            duration: 1000
        }
        ParallelAnimation
        {
            NumberAnimation
            {
                target: root
                property: "x"
                to: finalCoords.x
                duration: 3000
            }
            NumberAnimation
            {
                target: root
                property: "y"
                to: finalCoords.y
                duration: 3000
                easing.type: Easing.InQuad
            }
        }
        ParallelAnimation
        {
            PropertyAnimation
            {
                target: root
                property: "opacity"
                to: 1.0
                duration: 1000
            }
            PropertyAnimation
            {
                target: root
                property: "border.color"
                to: Qt.darker(fColor);
                duration: 1000
            }
        }
    }

    SequentialAnimation
    {
        id: resetAnimation
        PauseAnimation
        {
            duration: delay;
        }
        PropertyAction
        {
            target: root
            property: "opacity"
            value: 1.0;
        }
    }
}
