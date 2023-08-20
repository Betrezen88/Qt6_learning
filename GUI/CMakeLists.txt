cmake_minimum_required(VERSION 3.16)

project(GUI VERSION 0.1 LANGUAGES CXX)

find_package(Qt6 6.4 REQUIRED COMPONENTS Quick REQUIRED)

qt_add_executable(appGUI
    main.cpp
)

qt_add_qml_module(appGUI
    URI Qt6_learning
    VERSION 1.0
    QML_FILES
        Main.qml
        ModuleElement.qml
)

target_link_libraries(appGUI
    PRIVATE
        Qt6::Quick
        MyModule
)
