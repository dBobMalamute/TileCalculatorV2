import QtQuick 2.12
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.12
import QtQuick.Controls.Material 2.12

Item
{
    id: root
    height: 80
    width: 80

    Rectangle
    {
        height: parent.height
        width: 80
        x: -2
        radius: 4
        color: "#1a1a1a"
        border.width: 2
        border.color: "#333333"
    }

    TextInput
    {
        anchors.top: parent.top
        anchors.left: parent.left
        id: upLimitInputBox
        font.bold: true
        font.family: "verdana"
        font.pointSize: 12
        verticalAlignment: TextInput.AlignVCenter
        horizontalAlignment: TextInput.AlignHCenter
        color: "#a6b0cb"
        selectByMouse: true
        validator: DoubleValidator{decimals: 10}
        text: idea.upLimit().toPrecision(4);

        onEditingFinished:
        {
            idea.setUpLimit(text)
        }

        //At first this might seem useless, but it's necessary for
        //undo/redo.
        Connections
        {
            target: idea
            function onUpLimitChanged()
            {
                upLimitInputBox.text = idea.upLimit().toPrecision(4);
            }
        }
    }

    TextInput
    {
        anchors.verticalCenter: parent.verticalCenter
        anchors.left: parent.left

        id: sliderPositionInputBox
        font.bold: true
        font.family: "verdana"
        font.pointSize: 12
        verticalAlignment: TextInput.AlignVCenter
        horizontalAlignment: TextInput.AlignHCenter
        color: idea.outPortLabelColors[0]
        selectByMouse: true
        validator: DoubleValidator{decimals: 10}
        text: idea.number().toPrecision(4);

        onEditingFinished:
        {
            idea.setNumber(text)
        }

        //At first this might seem useless, but it's necessary for
        //undo/redo.
        Connections
        {
            target: idea
            function onNumberChanged()
            {
                sliderPositionInputBox.text = idea.number().toPrecision(4);
            }
        }
    }

    TextInput
    {
        anchors.bottom: parent.bottom
        anchors.left: parent.left

        id: lowLimitInputBox
        font.bold: true
        font.family: "verdana"
        font.pointSize: 12
        verticalAlignment: TextInput.AlignVCenter
        horizontalAlignment: TextInput.AlignHCenter
        color: "#a6b0cb"
        selectByMouse: true
        validator: DoubleValidator{decimals: 10}
        text: idea.lowLimit().toPrecision(4);

        onEditingFinished:
        {
            idea.setLowLimit(text)
        }

        //At first this might seem useless, but it's necessary for
        //undo/redo.
        Connections
        {
            target: idea
            function onLowLimitChanged()
            {
                lowLimitInputBox.text = idea.lowLimit().toPrecision(4);
            }
        }
    }


    Slider
    {
        id: slider
        width: 40
        anchors.right: parent.right
        anchors.rightMargin: -4
        anchors.top: parent.top
        anchors.bottom: parent.bottom
        orientation: Qt.Vertical
        from: 0.0; to: 1.0;
        value: idea.sliderPos()
        onMoved:
        {
            idea.setNumberBySlider(value)
        }
        Connections
        {
            target: idea
            function onNumberChanged()
            {
                slider.value = idea.sliderPos();
            }
            function onUpLimitChanged()
            {
                slider.value = idea.sliderPos();
            }
            function onLowLimitChanged()
            {
                slider.value = idea.sliderPos();
            }
        }

        Material.accent: idea.outPortLabelColors[0]
        Material.foreground: idea.outPortLabelColors[0]
    }
}

