import com.malamute.core 1.0
import QtGraphicalEffects 1.12
import QtQuick 2.12
import QtQuick.Controls 2.12

MalamuteCasing
{
    id: root
    width: casingSize.width + 1.4 * 15 + 10;
    height: casingSize.height + 0.4 * 15;

    Rectangle
    {
        id: frameRect
        x: 0.7 * 15; y: 0.2 * 15;
        width: casingSize.width;
        height: casingSize.height
        radius: CasingStyle.frameRadius();
        border.color: selected ? CasingStyle.borderSelectedColor() : CasingStyle.borderColor()
        border.width: CasingStyle.bordersWidth();

        gradient: Gradient
        {
            GradientStop{id: gradientTop; position: 0.25; color: CasingStyle.gradientTopColor(predefinedColor)}
            GradientStop{id: gradientBottom; position: 0.95; color: CasingStyle.gradientBottomColor(predefinedColor)}
        }
        Connections
        {
            //Note. Do not put the connections in a Gradient type. It breaks for some reason.
            target: root
            function onPredefinedColorChanged(i)
            {
                gradientTop.color = CasingStyle.gradientTopColor(i);
                gradientBottom.color = CasingStyle.gradientBottomColor(i);
            }
        }
        Rectangle
        {
            id: nameBackground
            anchors.top: frameRect.top;
            anchors.horizontalCenter: frameRect.horizontalCenter;
            width: frameRect.width
            height: nameSize.height + 10
            visible: ideaName !== "";

            border.color: selected ? CasingStyle.borderSelectedColor() : CasingStyle.borderColor()
            border.width: CasingStyle.bordersWidth();
            radius: CasingStyle.frameRadius();

            gradient: Gradient
            {
                GradientStop{position: 0.0; color: "#ead0b4"}
                GradientStop{position: 1.0; color: "#ddb284"}
            }
            Text
            {
                id: name
                anchors.centerIn: parent
                color: CasingStyle.nameColor()
                font: CasingStyle.nameFont()
                horizontalAlignment: Text.AlignHCenter
                text: ideaName
            }
        }

        RectangularGlow
        {
            id: effect
            x: selected ? 2.0 * CasingStyle.glowRadius() : CasingStyle.glowRadius()
            y: selected ? 2.0 * CasingStyle.glowRadius() : CasingStyle.glowRadius()
            width: frameRect.width
            height: frameRect.height

            glowRadius: CasingStyle.glowRadius()
            spread: CasingStyle.glowSpread()
            color: CasingStyle.glowColor()
            cornerRadius: frameRect.radius + CasingStyle.glowRadius()
            z: frameRect.z - 2
        }

        Column
        {
            id: inPortsColumn
            y: plugBoxTop
            x: -0.5*15 + frameRect.border.width / 2;
            z: 99
            width: 15;

            spacing:  CasingStyle.portSpacing();

            Repeater
            {
                model: inPlugLabels.length
                Rectangle
                {
                    radius: CasingStyle.portSize();
                    width: CasingStyle.portSize();
                    height: CasingStyle.portSize();
                    border.color: "#333333"
                    border.width: CasingStyle.portBorderWidth();
                    color: inPlugLabelColors[index]
                }
            }
        }
        Column
        {
            id: inPortLabelsColumn
            x: inPortsColumn.x + inPortsColumn.width + 1;
            y: plugBoxTop - 1;
            width: inLabelWidth

            spacing: CasingStyle.portSpacing();

            Repeater
            {
                model: inPlugLabels
                Text
                {
                    height: CasingStyle.portSize();
                    font: CasingStyle.portLabelsFont();
                    color: inPlugLabelColors[index]
                    text: modelData
                    visible: modelData !== "";
                    Rectangle
                    {
                        anchors.fill: parent
                        anchors.leftMargin: -10
                        anchors.topMargin: -1
                        anchors.bottomMargin: -3
                        anchors.rightMargin: -3
                        color: "#1a1a1a"
                        border.width: 2
                        border.color: "#333333"
                        radius: 6
                        z: -1
                    }
                }
            }
        }

        Column
        {
            id: outPortsColumn
            y: plugBoxTop
            x: frameRect.width - 0.5*15 - frameRect.border.width / 2;
            z: 99
            width: 15;

            spacing: CasingStyle.portSpacing();

            Repeater
            {
                model: outPlugLabels.length
                Rectangle
                {
                    id: outPortRect
                    radius: CasingStyle.portSize();
                    width: CasingStyle.portSize();
                    height: CasingStyle.portSize();
                    border.color: "#333333"
                    border.width: CasingStyle.portBorderWidth();
                    color: outPlugLabelColors[index]
                }
            }
        }
        Column
        {
            id: outPortLabelsColumn
            y: inPortLabelsColumn.y
            x: outPortsColumn.x - outLabelWidth - 1;
            width: outLabelWidth

            spacing: CasingStyle.portSpacing();

            Repeater
            {
                model: outPlugLabels
                Text
                {
                    anchors.right: parent.right
                    height: CasingStyle.portSize();
                    font: CasingStyle.portLabelsFont();
                    color: outPlugLabelColors[index]
                    text: modelData
                    visible: modelData !== "";
                    Rectangle
                    {
                        anchors.fill: parent
                        anchors.leftMargin: -3
                        anchors.topMargin: -1
                        anchors.bottomMargin: -3
                        anchors.rightMargin: -10
                        color: "#1a1a1a"
                        border.width: 2
                        border.color: "#333333"
                        radius: 6
                        z: -1
                    }
                }
            }
        }
    }

    Rectangle
    {
        color: validationColor
        radius: CasingStyle.frameRadius();

        y: validationBoxTop
        anchors.left: frameRect.left;
        width: frameRect.width
        height: validationBoxSize.height === 0 ? 0 : validationBoxSize.height + 2*5 + 2*border.width

        border.color: frameRect.border.color;
        border.width: frameRect.border.width;
        Text
        {
            id: validatationMessageDisplay
            color: CasingStyle.validationTextColor();
            font: CasingStyle.validationTextFont();
            horizontalAlignment: Text.AlignHCenter
            anchors.centerIn: parent
            text: validationMessage
        }
    }

    Rectangle
    {
        id: minimizerButton
        visible: minimizable
        width: CasingStyle.buttonSize()
        height: CasingStyle.buttonSize()
        color: "transparent"
        radius: CasingStyle.buttonSize()
        anchors.top: frameRect.top
        anchors.topMargin: -width / 2 + 2.5
        anchors.right: frameRect.right
        anchors.rightMargin: width /2

        Rectangle
        {
            visible: minimizable
            width: 8
            height: 1
            color: "white";
            anchors.centerIn: parent
        }

        MouseArea
        {
            anchors.fill: parent
            anchors.margins: -1
            hoverEnabled: true
            onClicked:
            {
                minimizeButtonClicked();
            }
            onEntered:
            {
                minimizerButton.color = Qt.lighter("#845a35",1.5)
            }
            onExited:
            {
                minimizerButton.color = "transparent"
            }
        }
    }



    Rectangle
    {
        id: extraButton
        visible: hasExtraQML
        width: CasingStyle.buttonSize()
        height: CasingStyle.buttonSize()
        color: "transparent"
        radius: CasingStyle.buttonSize()
        anchors.top: frameRect.top
        anchors.topMargin:  width/2
        anchors.right: frameRect.right
        anchors.rightMargin: -width / 2 + 2

        MouseArea
        {
            anchors.fill: parent
            anchors.margins: -1
            hoverEnabled: true
            onClicked:
            {
                extraButtonClicked();
            }
            onEntered:
            {
                extraButton.color = Qt.lighter(CasingStyle.buttonColor(),1.5)
            }
            onExited:
            {
                extraButton.color = "transparent"
            }
        }
        Rectangle
        {
            id: centerDot
            visible: hasExtraQML
            width: 3
            height: 3
            radius: 2
            color: "white";
            x: parent.width / 2 - width / 2
            y: parent.height / 2 - height / 2
        }
        Rectangle
        {
            visible: hasExtraQML
            width: 3
            height: 3
            radius: 2
            color: "white";
            x: centerDot.x
            y: centerDot.y - 6
        }
        Rectangle
        {
            visible: hasExtraQML
            width: 3
            height: 3
            radius: 2
            color: "white";
            x: centerDot.x
            y: centerDot.y + 6
        }
    }

    Rectangle
    {
        id: resizer;
        visible: resizeable
        x: frameRect.x + frameRect.width - width;
        y: frameRect.y + frameRect.height - height;
        z: frameRect.z + 1;
        width: CasingStyle.resizerSize()
        height: CasingStyle.resizerSize()
        radius: CasingStyle.resizerSize()
        border.width: 2;
        color: CasingStyle.resizerColor()
        border.color: CasingStyle.resizerBorderColor()
    }
}
