#include "file_reader.h"

file_reader::file_reader(QWidget * parent)
{
    m_parent = parent;
}

QString file_reader::read_file()
{
    QString fileName = QFileDialog::getOpenFileName(m_parent, tr("Open File"), QString(),
            tr("Conf files (*.*);;Text Files (*.txt);;C++ Files (*.cpp *.h)"));

    if (!fileName.isEmpty()) {
        file = new QFile(fileName);
        if (!file->open(QIODevice::ReadOnly)) {
            QMessageBox::critical(m_parent, tr("Error"), tr("Could not open file"));
            return QString();
        }
        QTextStream in(file);
        return in.readAll();
    } else {
        return QString();
    }
}

file_reader::~file_reader()
{
    file->close();
    delete file;
}

