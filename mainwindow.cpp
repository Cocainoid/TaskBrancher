#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QProcess"

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

void MainWindow::fillParameters()
{
   ui->taskType->addItem("feature");
   ui->taskDoer->addItem("kobzev.a");
}

void MainWindow::on_pushButton_clicked()
{

}

void MainWindow::on_toolButtonRepo_clicked()
{
    QString repoBrowserPath = "C:/Program Files/TortoiseSVN/bin/TortoiseProc.exe";
    QStringList repoBrowserArguments;
    repoBrowserArguments << "/command:repobrowser" << "/outfile:./browser.txt";

    QProcess *repoBrowser = new QProcess();
    repoBrowser->start(repoBrowserPath, repoBrowserArguments);
}

void MainWindow::on_toolButtonRevision_clicked()
{

}
