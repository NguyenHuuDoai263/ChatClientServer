QT += qml quick

CONFIG += c++11

SOURCES += main.cpp \
    loginvm.cpp \
    server.cpp \
    networkmng.cpp \
    chatvm.cpp \
    socketthread.cpp

RESOURCES += qml.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Default rules for deployment.
include(deployment.pri)

HEADERS += \
    loginvm.h \
    server.h \
    networkmng.h \
    chatvm.h \
    socketthread.h
