#include "mainwindow1.h"
#include "ui_mainwindow1.h"

MainWindow1::MainWindow1(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow1)
{
    ui->setupUi(this);
}

MainWindow1::~MainWindow1()
{
    delete ui;
}

void MainWindow1::on_pushButton_clicked()
{
    hide();
    Nature=new nature(this);
    Nature->show();
}


void MainWindow1::on_pushButton_2_clicked()
{
    hide();
    Technology=new technology(this);
    Technology->show();
}


void MainWindow1::on_pushButton_3_clicked()
{
    hide();
    Space=new space(this);
    Space->show();
}


void MainWindow1::on_actionNature_triggered()
{
    hide();
    Nature=new nature(this);
    Nature->show();
}


void MainWindow1::on_actionTechnology_triggered()
{
    hide();
    Technology=new technology(this);
    Technology->show();
}


void MainWindow1::on_actionSpace_triggered()
{
    hide();
    Space=new space(this);
    Space->show();
}

