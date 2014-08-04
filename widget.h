#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QString>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT
    QString pilha1, pilha2 , sinal;
    bool empilhado;


public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private:
    Ui::Widget *ui;

public slots:
    void button_click();
    void button_sinal();
    void resultado();
    void limpar();

};

#endif // WIDGET_H
