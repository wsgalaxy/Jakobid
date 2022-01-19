add_subdirectory(terminal_display)

set(JAKOBID_SRCS
        main.cpp
        mainwindow.cpp
        mainwindow.h
)

add_executable(Jakobid
    ${JAKOBID_SRCS}
)

target_link_libraries(Jakobid PRIVATE Qt5::Widgets)
