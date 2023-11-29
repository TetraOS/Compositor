import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Controls 2.15

ApplicationWindow {
    id: window
    visible: true
    width: 800
    height: 600
    title: "Compositor"

    Column {
        anchors.centerIn: parent
        spacing: 20

        Button {
            id: button1
            text: "Button 1"
            onClicked: {
                // Add the code to execute when this button is clicked
            }
        }

        Button {
            id: button2
            text: "Button 2"
            onClicked: {
                // Add the code to execute when this button is clicked
            }
        }
    }
}
