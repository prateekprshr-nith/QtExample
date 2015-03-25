#include <QApplication>
#include <iostream>
#include "Gui.h"
#include "Person.h"
#include "Db.h"
#include <QString>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Person *P = new Person;
    Db     *D = new Db(P);
    Gui    G;
    G.connectGui(P, D);
    G.show();

    /*QByteArray ba = P->getName().toUtf8();
    const char *message = ba.data();
    std::cout << "name: " << message;*/
    return a.exec();
}
