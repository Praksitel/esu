#include "file_reader.h"
#include<QDebug>

file_reader::file_reader(QWidget * parent)
{
    m_parent = parent;
}

QString file_reader::read_file()
{
    QString fileName = QFileDialog::getOpenFileName(m_parent, tr("Откройте файл со списком аплинков"), "\\fido\\etc",
            tr("Conf files (*.*);;Text Files (*.txt);;Any File (*.*)"));

    if (!fileName.isEmpty()) {
        QFile file(fileName);
        if (!file.open(QIODevice::ReadOnly)) {
            QMessageBox::critical(m_parent, tr("Error"), tr("Файл не открывается"));
            return QString();
        }
        QTextStream in(&file);
        return in.readAll();
    } else {
        return QString();
    }
}

file_reader::~file_reader()
{
    qDebug()<<"file_reader::~file_reader() begin";
    qDebug()<<"file_reader::~file_reader() end";
}

