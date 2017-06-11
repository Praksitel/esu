#ifndef LINK_PARSER_H
#define LINK_PARSER_H
#include <QString>
#include <QStringList>

class link_parser
{
public:
    link_parser(QString src);
    QStringList strings;
private:
    QString source_string;

};

#endif // LINK_PARSER_H
