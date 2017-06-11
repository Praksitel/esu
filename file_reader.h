#ifndef FILE_READER_H
#define FILE_READER_H

#include <QString>
#include <QFileDialog>
#include <QTranslator>
#include <QMessageBox>
#include <QTextStream>

class file_reader:public QObject
{
    Q_OBJECT
public:
    file_reader(QWidget * parent);
    QString read_file();

    ~file_reader();
private:
    QWidget * m_parent;
};

#endif // FILE_READER_H
