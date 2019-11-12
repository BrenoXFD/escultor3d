#ifndef PALETA_H
#define PALETA_H

#include <QWidget>

class Paleta : public QWidget
{
    Q_OBJECT
private:
    int red = 48; int blue = 48; int green = 48; int alpha = 255;
public:
    explicit Paleta(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event);
signals:
public slots:
    void setPaletaRed(int _red);
    void setPaletaBlue(int _blue);
    void setPaletaGreen(int _green);
    void setPaletaAlpha(int _alpha);
};

#endif // PALETA_H
