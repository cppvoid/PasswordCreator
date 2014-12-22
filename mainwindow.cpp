#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_ButtonCreate_clicked()
{
    auto lettersAllowed = ui->checkBoxLetters->isChecked();
    auto numbersAllowed = ui->checkBoxNumbers->isChecked();
    auto specialAllowed = ui->checkBoxSpecialChars->isChecked();

    auto length = ui->spinBoxLenght->value();

    auto ansiiPassword = createPassword( AllowedCharacters( lettersAllowed, numbersAllowed, specialAllowed ), length );

    ui->lineEditPassword->setText( QString::fromStdString( ansiiPassword ) );
}
