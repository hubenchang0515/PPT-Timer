#include "timerdialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TimerDialog w;
    w.show();

    return a.exec();
}
