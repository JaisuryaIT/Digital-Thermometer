#ifndef SPACE_H
#define SPACE_H

#include <QMainWindow>
#include <QTimer>
#include <QDateTime>

namespace Ui {
class space;
}

class space : public QMainWindow
{
    Q_OBJECT

public:
    explicit space(QWidget *parent = nullptr);
    ~space();
public slots:
    void run();
    void run1();
private:
    Ui::space *ui;
    QTimer *timer;
    QTimer *timer1;
};

#endif // SPACE_H
