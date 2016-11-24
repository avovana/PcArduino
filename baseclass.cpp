#include "baseclass.h"
#include "ui_baseclass.h"

BaseClass::BaseClass(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BaseClass)
{
    ui->setupUi(this);

    terminal.show();
    player.show();
}

BaseClass::~BaseClass()
{
    delete ui;
}
