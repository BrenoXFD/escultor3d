#ifndef XY_H
#define XY_H

#include <QWidget>

class Xy : public QWidget
{
    Q_OBJECT
private:

public:
    explicit Xy(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event);
signals:

public slots:
};

#endif // XY_H
