#include "Person.h"

Person::Person()
{
    //std::cout << "\nPerson created";
}

//---------------GETTERS-----------------
QString Person::getName()
{
    return name;
}

QString Person::getPhoneNo()
{
    return phoneNo;
}

QString Person::getEmailId()
{
    return emailId;
}

QString Person::getDeptCode()
{
    return deptCode;
}

QDate   Person::getDob()
{
    return dob;
}

QDate   Person::getRegisDate()
{
    return regisDate;
}

//---------------SLOTS-------------------
// No need of any return type, it would be corrected later

// setName()
bool Person::setName(const QString &Name)
{
    name = Name;
    return 1;
}

// setPhoneNo()
bool Person::setPhoneNo(const QString &Phone)
{
    phoneNo = Phone;
    return 1;
}

// setEmailId()
bool Person::setEmailId(const QString &email)
{
    emailId = email;
    return 1;
}

// setDeptCode()
bool Person::setDeptCode(const QString &dCode)
{
    deptCode = dCode;
    return 1;
}

// setDob()
bool Person::setDob(const QDate &Dob)
{
    dob = Dob;
    return 1;
}

// setRegisDate()
bool Person::setRegisDate(const QDate &regis)
{
    regisDate = regis;
    return 1;
}
