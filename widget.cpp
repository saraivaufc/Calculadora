#include "widget.h"
#include "ui_widget.h"
#include <QString>
#include <string>
#include <cstdio>

#include <QPushButton>
#include <iostream>
#include <QList>
#include <QPalette>
#include <QResource>
#include <QtScript/QScriptEngine>
#include <QtScript/QScriptValue>


using namespace std;

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->button=NULL;
    this->setWindowTitle("Calculadora");

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
    list_num.append(ui->button_10);
    list_num.append(ui->button_11);
    list_num.append(ui->button_12);
    list_num.append(ui->button_13);
    list_num.append(ui->button_14);

    foreach (QPushButton * i, list_num) {
        connect(i, SIGNAL(clicked()),this , SLOT(button_click()));
    }

    connect(ui->resultado , SIGNAL(clicked()) , this , SLOT(resultado()) );
    connect(ui->limpar , SIGNAL(clicked()) , this , SLOT(limpar()));

}

Widget::~Widget()
{
    delete ui;
}


float calcular(QString s){
    QScriptEngine myEngine;
    QScriptValue valor = myEngine.evaluate(s);
    return static_cast<float>(valor.toNumber());
}


void Widget::button_click()
{


    QPushButton *  b = dynamic_cast<QPushButton *>(sender());

    this->button = b;

    QString str = b->text();
    QString antes = ui->caixa_texto->text();

    ui->caixa_texto->setText(antes + str);
}

void Widget::resultado()
{

    QString expresao = ui->caixa_texto->text();
    ui->caixa_texto->setText(QString::number(calcular(expresao)));


}

void Widget::limpar()
{
    QString text = ui->caixa_texto->text();
    text.remove(text.length()-1 , text.length());
    ui->caixa_texto->setText(text);
}

