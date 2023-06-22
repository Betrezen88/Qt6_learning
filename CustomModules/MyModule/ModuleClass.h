#ifndef MODULECLASS_H
#define MODULECLASS_H

#include <QObject>
#include <QtQml/qqmlregistration.h>

class ModuleClass : public QObject
{
    Q_OBJECT
    QML_ELEMENT
    Q_PROPERTY(QString name READ name CONSTANT)

public:
    explicit ModuleClass(QObject *parent = nullptr);
    explicit ModuleClass(const QString &name, QObject *parent = nullptr);

    QString name() const;

signals:

private:
    QString m_name;
};

#endif // MODULECLASS_H
