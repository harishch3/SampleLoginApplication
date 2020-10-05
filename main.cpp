#include "simpleloginapplication.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SimpleLoginApplication w;
    w.show();
    return a.exec();
}
