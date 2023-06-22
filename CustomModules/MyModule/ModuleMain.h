#ifndef MODULEMAIN_H
#define MODULEMAIN_H

#include <QObject>

#include "ModuleClass.h"

class ModuleMain : public QObject
{
    Q_OBJECT
    Q_PROPERTY(ModuleClass* obj READ obj CONSTANT)

public:
    explicit ModuleMain(QObject *parent = nullptr);

    ModuleClass *obj() const;

signals:

private:
    ModuleClass *m_obj = nullptr;
};

#endif // MODULEMAIN_H
