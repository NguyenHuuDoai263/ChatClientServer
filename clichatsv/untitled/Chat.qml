import QtQuick 2.0
import QtQuick.Controls 2.0
import Control 1.0

Rectangle {
    anchors.fill: parent

    color: "transparent"

    ChatVM {
        id: screenVM
    }

    Component.onCompleted: {
        screenVM.init()
    }

    Text {
        id: txtServer
        text: "Server"
        anchors.verticalCenter: ipServer.verticalCenter
        anchors.left: parent.left
        anchors.leftMargin: 20
        font.pixelSize: 22
    }

    TextField {
        id: ipServer
        width: parent.width / 2
        height: 40
        font.pixelSize: 22
        text: window.host
        enabled: false
        anchors.left: txtServer.right
        anchors.leftMargin: 20
        anchors.top: parent.top
        anchors.topMargin: 10
    }

    TextField {
        id: portServer
        width: parent.width / 4
        height: 40
        font.pixelSize: 22
        text: window.port
        enabled: false
        anchors.top: ipServer.top
        anchors.left: ipServer.right
        anchors.leftMargin: 20
    }

    Text {
        id: txtNick
        text: "Nick"
        anchors.verticalCenter: displayName.verticalCenter
        anchors.left: parent.left
        anchors.leftMargin: 20
        font.pixelSize: 22
    }

    TextField {
        id: displayName
        width: parent.width / 2
        height: 40
        font.pixelSize: 22
        text: screenVM.name
        anchors.left: txtServer.right
        anchors.leftMargin: 20
        anchors.top: ipServer.bottom
        anchors.topMargin: 10

        onAccepted: {
            screenVM.name = displayName.text
        }
    }

    Button {
        id: btnDisconnect
        width: parent.width / 4
        height: 40
        font.pixelSize: 22
        text: "Disconnect"
        anchors.top: displayName.top
        anchors.left: displayName.right
        anchors.leftMargin: 20

        onClicked: {
            screenVM.disconnect()
            window.state = 0
        }
    }

    Rectangle {
        id: border
        color: "transparent"
        border.width: 2
        border.color: "black"
        width: parent.width - 40
        height: 500
        anchors.top: displayName.bottom
        anchors.topMargin: 20
        anchors.horizontalCenter: parent.horizontalCenter

        TextArea {
            id: chat
            anchors.fill: parent
            text: screenVM.message
            verticalAlignment: TextInput.AlignTop
        }
    }

    Text {
        id: txtMessage
        text: "Message"
        anchors.verticalCenter: displayMessage.verticalCenter
        anchors.left: parent.left
        anchors.leftMargin: 20
        font.pixelSize: 22
    }

    TextField {
        id: displayMessage
        width: parent.width / 2
        height: 40
        font.pixelSize: 22
        anchors.left: txtMessage.right
        anchors.leftMargin: 20
        anchors.top: border.bottom
        anchors.topMargin: 10
    }

    Button {
        id: btnChat
        width: parent.width / 4
        height: 40
        font.pixelSize: 22
        text: "Send"
        anchors.top: displayMessage.top
        anchors.left: displayMessage.right
        anchors.leftMargin: 20
        onClicked: {
            screenVM.chat(displayMessage.text)
            displayMessage.clear()
        }
    }
}
