#include "link_parser.h"
#include <QDebug>

link_parser::link_parser(QString src)
{
    //QRegExp("")
    strings = src.split('\n');

    QStringListIterator ci(strings);
    while (ci.hasNext()) {
        QString str = ci.next();
        qDebug()<<str<<'\t';
    }
}

