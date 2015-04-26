import QtQuick 2.4
import QtQuick.Controls 1.3
import QtQuick.Window 2.2
import QtQuick.Dialogs 1.2
import VisualSystem 1.0

ApplicationWindow {
    id: root;
    title: qsTr("Hello World")
    width: 800
    height: 800
    visible: true


    Rectangle{
        id: rec
        anchors.fill: parent

        Retina {
            id: retina
            width: rec.width
            height: rec.height
        }

        MouseArea {
            id: dragArea
            anchors.fill: rec
            drag.target: retina
        }
    }


}
