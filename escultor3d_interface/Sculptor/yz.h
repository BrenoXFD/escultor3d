#ifndef YZ_H
#define YZ_H

#include <QWidget>

class Yz : public QWidget
{
    Q_OBJECT
private:

public:
    explicit Yz(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event);
signals:

public slots:
};

#endif // YZ_H
