
#include <QtWidgets/QApplication>
#include "ejerciciosQt.h"

// Remember to define the exercise in config.h

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ejerciciosQt w;
    w.show();
    return a.exec();
}
