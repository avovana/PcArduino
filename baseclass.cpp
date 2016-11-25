#include "baseclass.h"
#include "ui_baseclass.h"

BaseClass::BaseClass(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BaseClass)
{
    ui->setupUi(this);

    //terminal.show();
    player.show();
    connect(&terminal, &Terminal::writtenData, &player, &Player::receivedData);
}

BaseClass::~BaseClass()
{
    delete ui;
}
