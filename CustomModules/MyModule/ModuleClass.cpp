#include "ModuleClass.h"

ModuleClass::ModuleClass(QObject *parent) : QObject{parent}
{

}

ModuleClass::ModuleClass(const QString &name, QObject *parent)
    : QObject{parent}
    , m_name(name)
{

}

QString ModuleClass::name() const
{
    return m_name;
}
