QMAKE_INCLUDES = $${PWD}/../qmake_includes

include($${QMAKE_INCLUDES}/artifacts.pri)
include($${QMAKE_INCLUDES}/compiler_flags.pri)

TEMPLATE = lib
TARGET = tego_ui
CONFIG += staticlib

QT += core gui network quick widgets

CONFIG(release,debug|release):DEFINES += QT_NO_DEBUG_OUTPUT QT_NO_WARNING_OUTPUT

# INCLUDEPATH += $${PWD}
# INCLUDEPATH += $${PWD}/../extern/fmt/include

macx {
    QT += macextras
}

CONFIG += precompile_header
PRECOMPILED_HEADER = precomp.hpp

SOURCES += \
    ui/MainWindow.cpp \
    ui/ContactsModel.cpp \
    tor/TorControl.cpp \
    tor/TorControlSocket.cpp \
    tor/TorControlCommand.cpp \
    tor/ProtocolInfoCommand.cpp \
    tor/AuthenticateCommand.cpp \
    tor/SetConfCommand.cpp \
    tor/AddOnionCommand.cpp \
    utils/StringUtil.cpp \
    core/ContactsManager.cpp \
    core/ContactUser.cpp \
    tor/GetConfCommand.cpp \
    tor/HiddenService.cpp \
    utils/CryptoKey.cpp \
    utils/SecureRNG.cpp \
    core/OutgoingContactRequest.cpp \
    core/IncomingRequestManager.cpp \
    core/ContactIDValidator.cpp \
    core/UserIdentity.cpp \
    core/IdentityManager.cpp \
    core/ConversationModel.cpp \
    tor/TorProcess.cpp \
    tor/TorManager.cpp \
    tor/TorSocket.cpp \
    ui/LinkedText.cpp \
    utils/Settings.cpp \
    utils/PendingOperation.cpp \
    ui/LanguagesModel.cpp

HEADERS += \
    ui/MainWindow.h \
    ui/ContactsModel.h \
    tor/TorControl.h \
    tor/TorControlSocket.h \
    tor/TorControlCommand.h \
    tor/ProtocolInfoCommand.h \
    tor/AuthenticateCommand.h \
    tor/SetConfCommand.h \
    tor/AddOnionCommand.h \
    utils/StringUtil.h \
    core/ContactsManager.h \
    core/ContactUser.h \
    tor/GetConfCommand.h \
    tor/HiddenService.h \
    utils/CryptoKey.h \
    utils/SecureRNG.h \
    core/OutgoingContactRequest.h \
    core/IncomingRequestManager.h \
    core/ContactIDValidator.h \
    core/UserIdentity.h \
    core/IdentityManager.h \
    core/ConversationModel.h \
    tor/TorProcess.h \
    tor/TorProcess_p.h \
    tor/TorManager.h \
    tor/TorSocket.h \
    ui/LinkedText.h \
    utils/Settings.h \
    utils/PendingOperation.h \
    ui/LanguagesModel.h

SOURCES += \
    protocol/Channel.cpp \
    protocol/ControlChannel.cpp \
    protocol/Connection.cpp \
    protocol/OutboundConnector.cpp \
    protocol/AuthHiddenServiceChannel.cpp \
    protocol/ChatChannel.cpp \
    protocol/ContactRequestChannel.cpp

HEADERS += \
    protocol/Channel.h \
    protocol/Channel_p.h \
    protocol/ControlChannel.h \
    protocol/Connection.h \
    protocol/Connection_p.h \
    protocol/OutboundConnector.h \
    protocol/AuthHiddenServiceChannel.h \
    protocol/ChatChannel.h \
    protocol/ContactRequestChannel.h

include($${QMAKE_INCLUDES}/protobuf.pri)

PROTOS += \
    protocol/ControlChannel.proto \
    protocol/AuthHiddenService.proto \
    protocol/ChatChannel.proto \
    protocol/ContactRequestChannel.proto

include($${QMAKE_INCLUDES}/openssl.pri)
include($${PWD}/../libtego/libtego.pri)
