import QtQuick
import QtQuick.Window

// This import generates error, but program compiles and works properyly
import enumtypes 1.0

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Component.onCompleted: {
        console.log("My Enum: ", EnumTypes.Test.A)
        console.log("My Enum: ", EnumTypes.B)
        console.log("My Enum: ", EnumTypes.C)
    }
}
