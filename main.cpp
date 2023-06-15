#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlEngine>

#include "EnumTypes.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    // Register namespace in QML
    qmlRegisterUncreatableMetaObject(EnumTypes::staticMetaObject, "enumtypes", 1, 0, "EnumTypes", "Access to enums only");

    QQmlApplicationEngine engine;
    const QUrl url(u"qrc:/Qt6_learning/Main.qml"_qs);
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreationFailed,
        &app, []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection);

    engine.load(url);

    return app.exec();
}
