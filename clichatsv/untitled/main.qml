import QtQuick 2.5
import QtQuick.Controls 2.0
import QtQuick.Dialogs 1.2
import QtQuick.Window 2.0
import QtQuick.Layouts 1.1

ApplicationWindow {
    id: window

    visible: true
    width: {
        if (state == 0)
            return 640
        else
            return 640
    }
    height: {
        if (state == 0)
            return 250
        else
            return 700
    }

    property    int     state: 0
    property    string  host
    property    string  port

    Rectangle {
        id: login
        width: window.width
        height: window.height
        color: "white"
        Loader {
            anchors.fill: parent
            source: {
                if (window.state == 0)
                    return "Login.qml"
                else
                    return "Chat.qml"
            }
        }
    }
}
