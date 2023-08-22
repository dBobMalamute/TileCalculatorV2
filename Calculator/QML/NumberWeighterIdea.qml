import QtQuick 2.12
import QtQuick.Controls 2.12
import QtQuick.Controls.Material 2.12

Rectangle
{
    width:  Math.max(topNumInput.width,botNumInput.width) + slider.width
    height: topNumInput.height + botNumInput.height + 8;
    radius: 4

    color: "#1a1a1a"
    border.width: 2
    border.color: "#333333"

    TextInput
    {
        x: 4
        y: 2
        id: topNumInput
        font.bold: true
        font.pointSize: 12;
        color: idea.inPortLabelColors[0]
        selectByMouse: true
        font.underline: true;
        validator: DoubleValidator{top: 1.0; bottom: 0.0}
        onEditingFinished:
        {
            idea.setWeight(text);
        }

        Connections
        {
            target: idea
            function onWeightChanged()
            {
                topNumInput.text = idea.topWeightString();
            }
        }
        Component.onCompleted:
        {
            text = idea.topWeightString();
        }
    }
    TextInput
    {
        x: 4
        id: botNumInput
        anchors.top: topNumInput.bottom;
        anchors.topMargin: 2
        font.bold: true
        font.underline: true;
        font.pointSize: 12
        color: idea.inPortLabelColors[1]
        selectByMouse: true
        validator: DoubleValidator{top: 1.0; bottom: 0.0}

        onEditingFinished:
        {
            idea.setWeight(1.0 - text);
        }

        Connections
        {
            target: idea
            function onWeightChanged()
            {
                botNumInput.text = idea.botWeightString();
            }
        }
        Component.onCompleted:
        {
            text = idea.botWeightString();
        }

    }

    Slider
    {
        id: slider
        width: 40
        height: parent.height + 10; y: -5
        x: 40
        orientation: Qt.Vertical
        from: 0.0; to: 1.0;
        value: idea.weight
        onMoved:
        {
            idea.setWeight(value)
        }
        Material.accent: idea.outPortLabelColors[0]
        Material.foreground: idea.outPortLabelColors[0]
    }
}



