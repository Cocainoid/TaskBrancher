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


void MainWindow::on_pushButton_clicked()
{
    QString repoBrowserPath = "C:/Program Files/TortoiseSVN/bin/TortoiseProc.exe";
    QStringList repoBrowserArguments;
    repoBrowserArguments << "/command:repobrowser" << "/";

    QProcess *repoBrowser = new QProcess();
    repoBrowser->start(repoBrowserPath, repoBrowserArguments);


    QString cliPath = "C:/Program Files/TortoiseSVN/bin/svn.exe";
    QStringList cliArguments;
    cliArguments << "svn info" << "";

    QProcess *commandLine = new QProcess();
    commandLine->start(cliPath, cliArguments);
}
