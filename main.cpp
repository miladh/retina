#include <QApplication>
#include <QQmlApplicationEngine>
#include <QtQml>
#include "retina.h"


int main(int argc, char *argv[])
{

    qmlRegisterType<Retina>("VisualSystem", 1, 0, "Retina");
    QApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
