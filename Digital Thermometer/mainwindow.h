#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "mainwindow1.h"
#include <QMainWindow>
#include <QDebug>
#include <QtSql>
#include <QFileInfo>
#include <QMessageBox>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    bool login(QString username, QString password);

private slots:
    void on_enter_button_clicked();

private:
    Ui::MainWindow *ui;
    MainWindow1 *main1;
    QSqlDatabase m_database;
};
#endif // MAINWINDOW_H
