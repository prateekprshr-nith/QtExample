#include "Gui.h"
#include "Person.h"
#include <QLabel>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QGridLayout>

// Ctor for gui, generates the layout
Gui::Gui()
{
    setWindowTitle("Test-Prateek");

    // Generate the necessary layouts
    QVBoxLayout* mainLayout = new QVBoxLayout(this);
    QGridLayout* editLayout = new QGridLayout;
    QHBoxLayout* buttonLayout = new QHBoxLayout;
    mainLayout->addLayout( editLayout);
    mainLayout->addStretch();
    mainLayout->addLayout( buttonLayout);

    // Generate the labels and line-edits and add them
    // to the object pointed at by editLayout
    QLabel* nameLabel   = new QLabel(" Name");
    QLabel* phoneLabel  = new QLabel(" Phone");
    QLabel* deptLabel   = new QLabel(" Department");
    QLabel* emailLabel  = new QLabel(" Email");
    name        = new QLineEdit;
    phoneNo     = new QLineEdit;
    emailId     = new QLineEdit;
    deptCode    = new QLineEdit;
    editLayout->addWidget( nameLabel, 0, 0);
    editLayout->addWidget( name, 0, 1);
    editLayout->addWidget( phoneLabel, 1, 0);
    editLayout->addWidget( phoneNo, 1, 1);
    editLayout->addWidget( deptLabel, 2, 0);
    editLayout->addWidget( deptCode, 2, 1);
    editLayout->addWidget( emailLabel, 3, 0);
    editLayout->addWidget( emailId, 3, 1);

    // Create the Insert button and add it to the object pointed
    // at by buttonLayout
    insertButton = new QPushButton(" Insert");
    buttonLayout->addStretch();
    buttonLayout->addWidget(insertButton);
}

// connectGui(), connects the slots of gui with othe classes
void Gui::connectGui(Person *p, Db *d)
{
    QObject::connect(name, SIGNAL(textChanged(const QString&))      // Set name
                     , p, SLOT(setName(const QString&)));
    QObject::connect(phoneNo, SIGNAL(textChanged(const QString&))   // Set phoneNo
                     , p, SLOT(setPhoneNo(const QString&)));
    QObject::connect(deptCode, SIGNAL(textChanged(const QString&))  // Set deptCode
                     , p, SLOT(setDeptCode(const QString&)));
    QObject::connect(emailId, SIGNAL(textChanged(const QString&))   // Set EmailId
                     , p, SLOT(setEmailId(const QString&)));
    QObject::connect(insertButton, SIGNAL(clicked())                // Insert on pressing button
                     , d, SLOT(insertData()));
}
