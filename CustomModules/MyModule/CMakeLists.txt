find_package(Qt6 6.4 REQUIRED COMPONENTS Quick REQUIRED)

qt_add_qml_module(MyModule
    URI MyModule
    VERSION 1.0
    SOURCES
        ModuleClass.h ModuleClass.cpp
        ModuleMain.h ModuleMain.cpp
)
