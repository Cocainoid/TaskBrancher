#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void fillParameters();

private slots:
    void on_pushButton_clicked();

    void on_toolButtonRepo_clicked();

    void on_toolButtonRevision_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
