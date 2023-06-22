#include "ModuleMain.h"

ModuleMain::ModuleMain(QObject *parent)
    : QObject{parent}
    , m_obj(new ModuleClass("Test string", this))
{

}

ModuleClass* ModuleMain::obj() const
{
    return m_obj;
}
