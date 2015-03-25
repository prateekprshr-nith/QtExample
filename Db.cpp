#include "Db.h"

Db::Db(Person *p) : person(p)
{
}

// insertData() - inserts data into DB
void Db::insertData()
{

    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setPort(6994);
    db.setDatabaseName("test");
    db.setUserName("root");
    db.setPassword("thisismysql");
    bool ok = db.open();
    if(ok)
    {
        QSqlQuery query;
        QString querry = QString("INSERT into person values ('%1', '%2', '%3', '%4')")
                         .arg(person->getName()).arg(person->getPhoneNo())
                         .arg(person->getEmailId()).arg(person->getDeptCode());
        if(query.exec(querry))
            std::cout << "\nDone";
    }
    db.close();
}
