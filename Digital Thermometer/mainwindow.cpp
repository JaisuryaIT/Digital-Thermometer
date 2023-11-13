#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    m_database = QSqlDatabase::database();
    m_database.setDatabaseName("C:/Users/jaisu/Downloads/login.db");
}

MainWindow::~MainWindow()
{
    delete ui;
}

bool MainWindow::login(QString username, QString password)
{
QSqlQuery query1;
query1.prepare("SELECT username,password FROM login WHERE username = :username AND password = :password");
query1.bindValue(":username", username);
query1.bindValue(":password", password);
if (!query1.exec()) {
qDebug() << "Query failed!";
return false;
}
if (query1.next()) {
qDebug() << "Login successful!";
return true;
}
qDebug() << "Login failed!";
return false;
}

void MainWindow::on_enter_button_clicked()
{
    hide();
    main1=new MainWindow1(this);
    main1->show();
}
