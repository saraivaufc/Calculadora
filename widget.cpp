#include "widget.h"
#include "ui_widget.h"
#include <QString>
#include <string>
#include <cstdio>

#include <QPushButton>
#include <iostream>
#include <QList>

using namespace std;

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setWindowTitle("Calculadora");

    this->empilhado = false;

    QList<QPushButton *> list_num;
    list_num.append(ui->button_0);
    list_num.append(ui->button_1);
    list_num.append(ui->button_2);
    list_num.append(ui->button_3);
    list_num.append(ui->button_4);
    list_num.append(ui->button_5);
    list_num.append(ui->button_6);
    list_num.append(ui->button_7);
    list_num.append(ui->button_8);
    list_num.append(ui->button_9);
    list_num.append(ui->button_14);

    foreach (QPushButton * i, list_num) {
        connect(i, SIGNAL(clicked()),this , SLOT(button_click()));
    }
    QList <QPushButton *> list_sig;
    list_sig.append(ui->button_10);
    list_sig.append(ui->button_11);
    list_sig.append(ui->button_12);
    list_sig.append(ui->button_13);

    foreach (QPushButton * i, list_sig) {
        connect(i , SIGNAL(clicked()), this , SLOT(button_sinal()) );
    }

    connect(ui->resultado , SIGNAL(clicked()) , this , SLOT(resultado()) );
    connect(ui->limpar , SIGNAL(clicked()) , this , SLOT(limpar()));

}

Widget::~Widget()
{
    delete ui;
}

void Widget::button_click()
{
    QPushButton *  b = dynamic_cast<QPushButton *>(sender());
    QString str = b->text();

    this->pilha1.append(str);
    ui->caixa_texto->setText(this->pilha1.toLatin1());
}

void Widget::button_sinal()
{
    QPushButton *  b = dynamic_cast<QPushButton *>(sender());
    QString str = b->text();

    if(this->empilhado == false){
        this->pilha2 = this->pilha1;
        this->empilhado = true;
    }
    ui->caixa_texto->setText(this->pilha1+str.toLatin1());
    this->pilha1.clear();
    this->sinal=str.toLatin1();
}


void Widget::resultado()
{
    float a = this->pilha2.toFloat();
    float b = this->pilha1.toFloat();

    printf("A = %f e B = %f\n" , a , b);


    QString str;
    if(this->sinal.toLatin1() == "+"){
        str = QString::number(a+b);
    }else if(this->sinal.toLatin1() == "-"){
        str = QString::number(a-b);
    }else if(this->sinal.toLatin1() == "*"){
        str = QString::number(a*b);
    }else if(this->sinal.toLatin1() == "/"){
        str = QString::number(a/b);
    }

    this->pilha1.clear();
    this->pilha2.clear();
    this->pilha2.append(str);

    this->empilhado=true;

    ui->caixa_texto->setText(str);
}

void Widget::limpar()
{

    this->pilha1.clear();
    this->pilha2.clear();
    this->sinal.clear();
    ui->caixa_texto->clear();
}

