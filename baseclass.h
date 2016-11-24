#ifndef BASECLASS_H
#define BASECLASS_H
#include "terminal/terminal.h"
#include "player/player.h"

#include <QMainWindow>

namespace Ui {
class BaseClass;
}

class BaseClass : public QMainWindow
{
    Q_OBJECT

public:
    explicit BaseClass(QWidget *parent = 0);
    ~BaseClass();

private:
    Terminal terminal;
    Player player;
    Ui::BaseClass *ui;
};

#endif // BASECLASS_H
