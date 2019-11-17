#ifndef ZX_H
#define ZX_H

#include <QWidget>

class Zx : public QWidget
{
    Q_OBJECT
private:

public:
    explicit Zx(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event);
signals:

public slots:
};

#endif // ZX_H
