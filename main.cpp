#include "mainwindow.h"
#include <QApplication>
#include <QVector>

#include "get_links.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QVector<get_links> links;
    MainWindow w;
    int rc = 0;

    if (!w.isEmpty()) {
        w.show();
        rc = a.exec();
    }

    return rc;
}
