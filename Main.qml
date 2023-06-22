import QtQuick
import QtQuick.Window

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    ModuleElement {
        obj: myModule.obj

        width: 150; height: 50
    }
}
