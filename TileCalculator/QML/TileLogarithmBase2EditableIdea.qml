import QtQuick 2.12
import QtQuick.Controls 2.12
import QtQuick.Controls.Material 2.12
import QtMultimedia 5.15

import "LogarithmHelperFunctions.js" as HelperFunctions

Item
{
    id: root
    width: idea.showSecondControl ? 382 : 348;
    height: 240

    property real base : 2.0
    property real inputNumber: 0.0;
    property real outputNumber: 0.0;
    property real currentlyShownBoxes: 0.0;
    property real divisions: 0.0;
    property real fractionRemaining: 0.0;
    property alias actionPicture: actionPicture.source;

    function setupActionPicture(base)
    {
        HelperFunctions.setupActionPicture(base);
    }

    Component.onCompleted:
    {
        setupActionPicture(base);
    }

    Connections
    {
        target: idea
        function onDisplay(input, output)
        {
            HelperFunctions.clearBoxes();
            inputNumber = input;
            outputNumber = output;
            currentlyShownBoxes = input;
            divisions = 0.0;
            fractionRemaining = input % 1;

            inputText.text = "x" +parseFloat(input.toPrecision(4));
            if(input <= 80000 && input >= 1)
            {
                HelperFunctions.createBoxesColumnInput(input, idea.columns);
                divideByBaseButton.enabled = true
                resetButton.enabled = true
                outputText.text = 0.0;
                animationUnsupportedText.visible = false;
            }
            else
            {
                divideByBaseButton.enabled = false;
                resetButton.enabled = false;
                outputText.text = outputNumber.toPrecision(4)
                animationUnsupportedText.visible = true;
            }
        }
        function onClear()
        {
            animationUnsupportedText.visible = false;
            inputText.text = "";
            outputText.text = "";
            currentlyShownBoxes = 0.0;
            divisions = 0.0;
            fractionRemaining = 0.0;
            HelperFunctions.clearBoxes();
        }

        function onOutPortLabelColorsChanged()
        {
            HelperFunctions.clearActionPicture();
            HelperFunctions.setupActionPicture(base);
        }
    }

    Rectangle
    {
        id: inputArea
        anchors.left: parent.left
        height: parent.height
        width: 64
        gradient: Gradient
        {
            GradientStop{position: 0.0; color: "black"}
            GradientStop{position: 0.5; color: "#282828"}
            GradientStop{position: 1.0; color: "black"}
        }

        Rectangle
        {
            id: inputBox
            anchors.centerIn: parent
            width: 60
            height: 60
            color: idea.inPortLabelColors[0]
            border.width: 6
            border.color: Qt.darker(idea.inPortLabelColors[0]);
        }

        Text
        {
            anchors.top: inputBox.bottom
            anchors.topMargin: 4
            id: inputText
            text: "";
            color: idea.inPortLabelColors[0]
            font.pointSize: 12
            font.family: "verdana"
            anchors.horizontalCenter: parent.horizontalCenter
        }
    }

    Rectangle
    {
        id: outputArea
        anchors.right: parent.right
        height: parent.height
        width: 64
        gradient: Gradient
        {
            GradientStop{position: 0.0; color: "black"}
            GradientStop{position: 0.5; color: "#282828"}
            GradientStop{position: 1.0; color: "black"}
        }

        Image
        {
            id: actionPicture
            anchors.centerIn: parent
            fillMode: Image.PreserveAspectFit
            width: 64
            source: "qrc:/Images/DownArrows.png"

            Item
            {
                id: topRectanglesContainer
                width: 64
                height: 20
                y: 14
            }

            Item
            {
                id: midRectanglesContainer
                width: 64
                height: 20
                y: 51
            }

            Item
            {
                id: botRectanglesContainer
                width: 64
                height: 20
                y: 88
            }
        }

        Text
        {
            id: outputText
            anchors.top: actionPicture.bottom
            anchors.topMargin: 4
            anchors.horizontalCenter: parent.horizontalCenter
            y: 190
            color: idea.outPortLabelColors[0]
            font.pointSize: 16
            font.family: "verdana"
            text: parseFloat(divisions.toPrecision(4));
        }
    }

    Rectangle
    {
        width: 208
        height: 208
        x: 72
        color: "#050512"
        radius: 4
    }

    Item
    {
        id: animationArea
        visible: idea.valid;
        y: 4
        x: 76
        width: 200
        height: 200
    }
    Item
    {
        id: fractionRemainingAnimationArea
        anchors.fill: animationArea;
    }
    Text
    {
        id: animationUnsupportedText;
        text: "Animation Unsupported";
        horizontalAlignment: Text.AlignHCenter
        color: "white"
        font.bold: true;
        font.pointSize: 12
        anchors.centerIn: animationArea
        visible: false
    }

    function divideByBase()
    {
        popSound.play();
        if(currentlyShownBoxes >= base)
        {
            currentlyShownBoxes /= base;
            divisions += 1;
            outputText.text = parseFloat(divisions.toPrecision(4));
            HelperFunctions.remove(currentlyShownBoxes);
        }
        else
        {
            HelperFunctions.remove(1);
            currentlyShownBoxes = 1.0;
            outputText.text = parseFloat(outputNumber.toPrecision(4));
        }
    }

    Rectangle
    {
        id: controlsRow
        width: buttonsRow.width + 10 //Row is width: 286
        anchors.horizontalCenter: animationArea.horizontalCenter
        anchors.bottom: parent.bottom
        height: 34

        radius: 4
        color: "#050512"
        Row
        {
            id: buttonsRow
            x: 5
            spacing: 6

            Button
            {
                id: divideByBaseButton
                height: 34
                text: "Divide by 2";
                enabled: idea.valid;
                anchors.verticalCenter: parent.verticalCenter;
                onClicked:
                {
                    divideByBase();
                }
                font.capitalization: Font.MixedCase
                font.family: "verdana"
                font.bold: true;
                font.pointSize: 12
                Material.background: idea.outPortLabelColors[0]
                Material.foreground: "#1a1a1a"

            }

            Button
            {
                id: resetButton
                height: 34
                text: "Reset"
                enabled: idea.valid;
                anchors.verticalCenter: parent.verticalCenter;
                onClicked:
                {
                    HelperFunctions.clearBoxes();
                    HelperFunctions.createBoxesColumnInput(inputNumber, idea.columns);
                    currentlyShownBoxes = inputNumber;
                    divisions = 0.0;
                    outputText.text = "0";
                }
                font.capitalization: Font.MixedCase
                font.family: "verdana"
                font.bold: true;
                font.pointSize: 12
                Material.background: Material.Grey
                Material.foreground:  "#1a1a1a"
            }
        }
    }

    Rectangle
    {
        id: controlsRow2
        width: buttonsRow2.width + 10 //Row is width: 286
        anchors.verticalCenter: animationArea.verticalCenter
        x: 196;
        height: 34
        rotation: -90;
        visible: idea.showSecondControl;

        radius: 4
        color: "#050512"
        Row
        {
            id: buttonsRow2
            x: 5
            spacing: 6

            Button
            {
                id: divideByBaseButton2
                height: 34
                text: "Divide by 2";
                enabled: idea.valid;
                anchors.verticalCenter: parent.verticalCenter;
                onClicked:
                {
                    divideByBase();
                }
                font.capitalization: Font.MixedCase
                font.family: "verdana"
                font.bold: true;
                font.pointSize: 12
                Material.background: idea.outPortLabelColors[0]
                Material.foreground: "#1a1a1a"

            }

            Button
            {
                id: resetButton2
                height: 34
                text: "Reset"
                enabled: idea.valid;
                anchors.verticalCenter: parent.verticalCenter;
                onClicked:
                {
                    HelperFunctions.clearBoxes();
                    HelperFunctions.createBoxesColumnInput(inputNumber, idea.columns);
                    currentlyShownBoxes = inputNumber;
                    divisions = 0.0;
                    outputText.text = "0";
                }
                font.capitalization: Font.MixedCase
                font.family: "verdana"
                font.bold: true;
                font.pointSize: 12
                Material.background: Material.Grey
                Material.foreground:  "#1a1a1a"
            }
        }
    }

    MediaPlayer
    {
        id: popSound
        source: "qrc:/SoundEffects/shortPop.wav"
        volume: 1.0
    }
}
