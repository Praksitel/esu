#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStandardItemModel>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    bool isEmpty()   {return m_isEmpty;}

private:
    Ui::MainWindow *ui;
    bool m_isEmpty;
};

#endif // MAINWINDOW_H
