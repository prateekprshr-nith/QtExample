#ifndef DB_H
#define DB_H

#include <QObject>
#include <QtSql/QSql>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include "Person.h"
#include <iostream>

class Db : public QObject
{
    Q_OBJECT
    Person  *person;

    public:
        Db(Person *p);

    public slots:
        void insertData(void);
};

#endif // DB_H
