include( $${PWD}/../qskconfig.pri )

TEMPLATE = subdirs

# c++
SUBDIRS += \
    qvgviewer \
    desktop \
    dialogbuttons \
    layouts \
    listbox \
    messagebox \
    sliders \
    symbols \
    tabview

# qml
SUBDIRS += \
    buttons \
    colorswitch \
    frames \
    gbenchmark \
    glabels \
    messageboxQml \
    rectangles \
    tlabels
