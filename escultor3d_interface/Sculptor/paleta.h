#ifndef PALETA_H
#define PALETA_H

#include <QWidget>

class Paleta : public QWidget
{
    Q_OBJECT
public:
    explicit Paleta(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event);

signals:

public slots:
};

#endif // PALETA_H
