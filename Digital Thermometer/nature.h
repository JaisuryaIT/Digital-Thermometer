#ifndef NATURE_H
#define NATURE_H

#include <QMainWindow>
#include <QTimer>
#include <QDateTime>
#include <QSerialPort>
#include <QByteArray>

namespace Ui {
class nature;
}

class nature : public QMainWindow
{
    Q_OBJECT

public:
    explicit nature(QWidget *parent = nullptr);
    ~nature();
public slots:
    void run();
    void run1();
private slots:
    void readSerial();
    void updateTemperature(QString);
private:
    Ui::nature *ui;
    QTimer *timer;
    QTimer *timer1;
    QSerialPort *arduino;
    static const quint16 arduino_uno_vendor_id = 6790;
    static const quint16 arduino_uno_product_id = 29987;
    QByteArray serialData;
    QString serialBuffer;
    QString parsed_data;
    double temperature_value;
};

#endif // NATURE_H
