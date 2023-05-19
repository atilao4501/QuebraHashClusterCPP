TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        hash.cpp \
        main.cpp \
        md5.cpp \
        paraC.cpp \
        traduC.cpp \
        traduC.cpp

HEADERS += \
    hash.h \
    md5.h

# Flags do compilador
QMAKE_CXXFLAGS += -DMPI_ENABLED
QMAKE_CFLAGS += -DMPI_ENABLED

# Diretórios de inclusão
INCLUDEPATH += /usr/include/x86_64-linux-gnu/openmpi
