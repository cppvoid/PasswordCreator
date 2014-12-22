#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "createpassword.h"

#include <QMainWindow>
#include <QString>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_ButtonCreate_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
