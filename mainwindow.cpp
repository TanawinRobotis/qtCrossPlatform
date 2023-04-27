#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setTextXX()
{
    ui->label->setText("Hello world"); // Use the ui pointer to access the label widget
}

void MainWindow::on_pushButton_clicked()
{
    setTextXX(); // Call the setTextXX() function
}


void MainWindow::on_pushButton_2_clicked()
{
    ui->textBrowser->append("Hello World");
}

