import QtQuick 2.0
import QtQuick.Controls 2.0
import Control 1.0

Rectangle {
    id: top
    anchors.fill: parent
    color: "transparent"

    Component.onCompleted: {
        screenVM.init()
        screenVM.connectSuccess.connect(changeScreen)
    }

    LoginVM {
        id: screenVM
    }

    Text {
        id: textIP
        text: "IP Address"
        font.pixelSize: 22
        anchors.right: inputIP.left
        anchors.rightMargin: 10
        anchors.verticalCenter: inputIP.verticalCenter
    }

    TextField {
        id: inputIP
        width: top.width * 2/3
        height: 40
        font.pixelSize: 22
        text: "127.0.0.1"
        anchors.top: parent.top
        anchors.topMargin: 40
        anchors.right: parent.right
        anchors.rightMargin: 50
    }

    Text {
        id: textPort
        text: "Port Number"
        font.pixelSize: 22
        anchors.right: inputPort.left
        anchors.rightMargin: 10
        anchors.verticalCenter: inputPort.verticalCenter
    }

    TextField {
        id: inputPort
        width: top.width * 2/3
        height: 40
        font.pixelSize: 22
        text: "1080"
        anchors.top: inputIP.bottom
        anchors.topMargin: 20
        anchors.left: inputIP.left
    }

    Button {
        id: btn
        text: "Connect"
        anchors.right: inputPort.right
        anchors.top: inputPort.bottom
        anchors.topMargin: 40

        onClicked: {
            screenVM.connect(inputIP.text, parseInt(inputPort.text))
            window.host = inputIP.text
            window.port = inputPort.text
        }
    }

    function changeScreen() {
        window.state = 1
    }
}
