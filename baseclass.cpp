#include "baseclass.h"
#include "ui_baseclass.h"

BaseClass::BaseClass(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BaseClass)
{
    ui->setupUi(this);

    terminal.show();
    //player.show();
    connect(&terminal, &Terminal::writtenData, &player, &Player::receivedData);
    connect(&terminal, &Terminal::sendTerminalMessage, &player, &Player::receivedMessage);
    terminal.openSerialPort();
}

BaseClass::~BaseClass()
{
    delete ui;
}
