#include "widget.h"
#include <QApplication>
#include <ctime>

int main(int argc, char *argv[])
{
    srand(time(0));
    QApplication a(argc, argv);
    Widget w;
    w.show();

    return a.exec();
}
