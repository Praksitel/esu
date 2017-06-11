#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "file_reader.h"
#include "link_parser.h"
#include<QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->log->clear();
    file_reader fr(this);
    QString confLink = fr.read_file();
    if (!confLink.isEmpty()) {
        link_parser lp(confLink);

        //QStandardItemModel *model = new QStandardItemModel;
        //QStandardItem *item;

        //QStringListIterator stringsIterator(lp.strings);

        //while (stringsIterator.hasNext()) {
            //item = new QStandardItem(QString(stringsIterator.next()));
            //model->appendRow(item);
        //}
        ui->lw->addItems(lp.strings);
        //ui->log->setText(lp.strings.join("|\n"));
        m_isEmpty = false;
    } else {
        m_isEmpty = true;
    }
}

MainWindow::~MainWindow()
{
    qDebug()<<"MainWindow::~MainWindow() begin";
    delete ui;
    qDebug()<<"MainWindow::~MainWindow() end";
}
