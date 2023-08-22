import QtQuick 2.12
import QtQuick.Controls 2.12
import com.malamute.controlsStyles 1.0

Rectangle
{
    width: 140
    height: 80

    radius: ControlsStyle.radius()
    border.color: ControlsStyle.borderColor()
    border.width: ControlsStyle.borderWidth()

    gradient: Gradient
    {
        GradientStop{ position: 0.05; color: ControlsStyle.gradientTop()}
        GradientStop{position: 0.5; color: ControlsStyle.gradientMid()}
        GradientStop{ position: 0.95; color: ControlsStyle.gradientBottom()}
    }

    Text
    {
        text: "Columns: "
        font.pointSize: 12
        color: "#a6b0cb"
        x: 10
        y: 10
    }
    TextInput
    {
        text: idea.columns;
        font.pointSize: 12
        color: "#a6b0cb"
        x: 90
        y: 10
        selectByMouse: true;
        onEditingFinished:
        {
            idea.setColumns(text);
        }
        validator: DoubleValidator{bottom: 1.0; top: 10000}
    }

    CheckBox
    {
        x: 10
        y: 30
        text: "Show 2nd";
        checked: idea.showSecondControl
        onCheckedChanged:
        {
            idea.setShowSecondControl(checked);
        }
    }
}
