set(TERMINAL_DISPLAY_SRCS
    Character.h
    CharacterColor.h
    Emulation.h
    Emulation.cpp
    Filter.h
    Filter.cpp
    KeyboardTranslator.h
    KeyboardTranslator.cpp
    qtermwidget.h
    qtermwidget_export.h
    qtermwidget_version.h
    TerminalDisplay.h
    TerminalDisplay.cpp
    tools.h
    tools.cpp
    konsole_wcwidth.h
    konsole_wcwidth.cpp
    TerminalCharacterDecoder.h
    TerminalCharacterDecoder.cpp
    Screen.h
    Screen.cpp
    ScreenWindow.h
    ScreenWindow.cpp
    History.h
    History.cpp
    BlockArray.h
    BlockArray.cpp
    LineFont.h
)

add_library(terminal_display STATIC ${TERMINAL_DISPLAY_SRCS})
target_link_libraries(terminal_display Qt5::Core Qt5::Gui Qt5::Widgets)
