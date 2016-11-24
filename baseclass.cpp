#include "baseclass.h"
#include "ui_baseclass.h"

BaseClass::BaseClass(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BaseClass)
{
    ui->setupUi(this);

    s.show();
}

BaseClass::~BaseClass()
{
    delete ui;
}
