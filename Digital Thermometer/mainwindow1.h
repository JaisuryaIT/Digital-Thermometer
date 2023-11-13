#ifndef MAINWINDOW1_H
#define MAINWINDOW1_H

#include <QMainWindow>
#include "nature.h"
#include "space.h"
#include "technology.h"
namespace Ui {
class MainWindow1;
}

class MainWindow1 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow1(QWidget *parent = nullptr);
    ~MainWindow1();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_actionNature_triggered();

    void on_actionTechnology_triggered();

    void on_actionSpace_triggered();

private:
    Ui::MainWindow1 *ui;
    nature *Nature;
    space *Space;
    technology *Technology;
};

#endif // MAINWINDOW1_H
