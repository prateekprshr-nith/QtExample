#ifndef GUI_H
#define GUI_H

#include <QDialog>
#include "Person.h"
#include "Db.h"
#include <QPushButton>

class QLineEdit;

class Gui : public QDialog
{
    Q_OBJECT

    private:
        QLineEdit *name;
        QLineEdit *phoneNo;
        QLineEdit *emailId;
        QLineEdit *deptCode;
        QPushButton* insertButton;

    public:
        Gui();
        void connectGui(Person *p, Db *d);
};

#endif // GUI_H
