#ifndef TECHNOLOGY_H
#define TECHNOLOGY_H

#include <QMainWindow>
#include <QTimer>
#include <QDateTime>

namespace Ui {
class technology;
}

class technology : public QMainWindow
{
    Q_OBJECT

public:
    explicit technology(QWidget *parent = nullptr);
    ~technology();
public slots:
    void run();
    void run1();
private:
    Ui::technology *ui;
    QTimer *timer;
    QTimer *timer1;
};

#endif // TECHNOLOGY_H
