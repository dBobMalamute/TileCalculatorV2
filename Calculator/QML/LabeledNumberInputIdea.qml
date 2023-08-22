import QtQuick 2.12

FocusScope
{
    id: root
    height: textEdit.height + numInput.height + 6
    width: textEdit.width > numInput.width ? textEdit.width : numInput.width;

    Rectangle
    {
        anchors.fill: textEdit
        anchors.margins: -2
        radius: 4
        gradient: Gradient
        {
            GradientStop{position: 0.0; color: "#ead0b4"}
            GradientStop{position: 1.0; color: "#ddb284"}
        }
    }

    TextEdit
    {
        id: textEdit
        anchors.horizontalCenter: parent.horizontalCenter
        font.bold: true
        font.pointSize: 12
        font.family: "verdana"
        verticalAlignment: TextEdit.AlignVCenter
        horizontalAlignment: TextEdit.AlignHCenter
        color: "#1a1a1a"
        selectByMouse: true
        text: idea.text
        focus: true;

        onEditingFinished:
        {
            idea.setText(textEdit.text)
        }

        onActiveFocusChanged:
        {
            if(textEdit.activeFocus && textEdit.text === "Label")
            {
                textEdit.text = "";
            }
            if(!textEdit.activeFocus && textEdit.text === "")
            {
                textEdit.text = "Label"
            }
        }

        KeyNavigation.tab: numInput;
        KeyNavigation.down: numInput;

        Connections
        {
            target: idea
            function onTextChanged()
            {
                textEdit.text = idea.text;
            }
        }
        MouseArea
        {
            anchors.fill: parent
            cursorShape: Qt.IBeamCursor;
            acceptedButtons: Qt.NoButton
        }
    }

    Rectangle
    {
        anchors.fill: numInput
        anchors.margins: -2
        color: "#1a1a1a"
        border.width: 2
        border.color: "#333333"
        radius: 2
    }

    TextInput
    {
        id: numInput
        anchors.bottom: parent.bottom;
        anchors.horizontalCenter: parent.horizontalCenter
        font.bold: true
        font.family: "verdana"
        font.underline: true
        font.pointSize: 12
        verticalAlignment: TextInput.AlignVCenter
        horizontalAlignment: TextInput.AlignHCenter
        color: idea.outPortLabelColors[0]
        selectByMouse: true
        validator: DoubleValidator{decimals: 10}
        text: idea.number

        onActiveFocusChanged:
        {
            if(numInput.activeFocus && numInput.text === "0")
            {
                numInput.text = "";
            }
            if(!numInput.activeFocus && numInput.text === "")
            {
                numInput.text = "0"
                idea.setNumber(0);
            }
        }

        KeyNavigation.tab: textEdit;
        KeyNavigation.up: textEdit;

        onEditingFinished:
        {
            idea.setNumber(numInput.text)
        }
        Connections
        {
            target: idea
            function onNumberChanged()
            {
                numInput.text = idea.number;
            }
        }
        MouseArea
        {
            anchors.fill: parent
            cursorShape: Qt.IBeamCursor;
            acceptedButtons: Qt.NoButton
        }
    }
}


