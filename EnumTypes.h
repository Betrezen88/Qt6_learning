#ifndef ENUMTYPES_H
#define ENUMTYPES_H

// This include contains necessary macros
#include <QObject>

namespace EnumTypes {
Q_NAMESPACE // Declares namespace in Qt Meta

    enum class Test { A, B, C };
Q_ENUM_NS(Test) // Declares enum in Qt Meta

}

#endif // ENUMTYPES_H
