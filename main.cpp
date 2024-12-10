#include "ihm_asservissement.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    IHM_asservissement w;
    w.show();
    return a.exec();
}
