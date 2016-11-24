#include "baseclass.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    BaseClass w;

    return a.exec();
}
