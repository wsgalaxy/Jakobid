set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp
        mainwindow.h
)

add_executable(Jakobid
    ${PROJECT_SOURCES}
)

target_link_libraries(Jakobid PRIVATE Qt5::Widgets)
