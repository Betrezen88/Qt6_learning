import QtQuick

import MyModule 1.0

Rectangle {
    property ModuleClass obj

    id: _root

    border.width: 2
    border.color: "#000"

    Text {
        anchors.centerIn: parent
        text: obj.name
        font.pointSize: 12
    }
}
