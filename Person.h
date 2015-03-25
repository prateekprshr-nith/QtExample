#ifndef PERSON_H
#define PERSON_H

#include <QObject>
#include <QDate>

class Person : public QObject
{
    Q_OBJECT
    QString name;
    QString phoneNo;
    QString emailId;
    QString deptCode;
    QDate   dob;        // qdatetime.h
    QDate   regisDate;  // qdatetime.h

    public:
        Person();

        // getters - return the data specified by their name
        QString getName();
        QString getPhoneNo();
        QString getEmailId();
        QString getDeptCode();
        QDate   getDob();
        QDate   getRegisDate();

    public slots:
        // setters - they are actually implemented as slots
        bool setName(const QString&);
        bool setPhoneNo(const QString&);
        bool setEmailId(const QString&);
        bool setDeptCode(const QString&);
        bool setDob(const QDate&);
        bool setRegisDate(const QDate&);
};

#endif // PERSON_H
