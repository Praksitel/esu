#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "file_reader.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->log->clear();
    file_reader fr(this);
    ui->log->setText(fr.read_file());
}

MainWindow::~MainWindow()
{
    delete ui;
}
