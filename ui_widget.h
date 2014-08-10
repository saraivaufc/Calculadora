/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLineEdit *caixa_texto;
    QGridLayout *gridLayout;
    QPushButton *button_7;
    QPushButton *button_9;
    QPushButton *button_13;
    QPushButton *button_4;
    QPushButton *button_5;
    QPushButton *button_6;
    QPushButton *button_12;
    QPushButton *button_1;
    QPushButton *button_2;
    QPushButton *button_3;
    QPushButton *button_11;
    QPushButton *button_14;
    QPushButton *button_0;
    QPushButton *resultado;
    QPushButton *limpar;
    QPushButton *button_8;
    QPushButton *button_10;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(215, 255);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Widget->sizePolicy().hasHeightForWidth());
        Widget->setSizePolicy(sizePolicy);
        Widget->setCursor(QCursor(Qt::ArrowCursor));
        Widget->setMouseTracking(false);
        Widget->setFocusPolicy(Qt::WheelFocus);
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/imagens/imagens/icon_title.png"), QSize(), QIcon::Normal, QIcon::Off);
        Widget->setWindowIcon(icon);
        Widget->setStyleSheet(QStringLiteral(""));
        verticalLayout_2 = new QVBoxLayout(Widget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(3);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        caixa_texto = new QLineEdit(Widget);
        caixa_texto->setObjectName(QStringLiteral("caixa_texto"));
        sizePolicy.setHeightForWidth(caixa_texto->sizePolicy().hasHeightForWidth());
        caixa_texto->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(28);
        caixa_texto->setFont(font);
        caixa_texto->setLayoutDirection(Qt::RightToLeft);
        caixa_texto->setFrame(true);
        caixa_texto->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        caixa_texto->setDragEnabled(false);
        caixa_texto->setReadOnly(false);
        caixa_texto->setCursorMoveStyle(Qt::VisualMoveStyle);
        caixa_texto->setClearButtonEnabled(false);

        verticalLayout->addWidget(caixa_texto);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        button_7 = new QPushButton(Widget);
        button_7->setObjectName(QStringLiteral("button_7"));
        button_7->setEnabled(true);
        sizePolicy.setHeightForWidth(button_7->sizePolicy().hasHeightForWidth());
        button_7->setSizePolicy(sizePolicy);
        button_7->setMinimumSize(QSize(0, 0));
        button_7->setSizeIncrement(QSize(0, 0));
        button_7->setBaseSize(QSize(0, 0));
        QFont font1;
        font1.setPointSize(1);
        button_7->setFont(font1);
        button_7->setMouseTracking(false);
        button_7->setFocusPolicy(Qt::WheelFocus);
        button_7->setContextMenuPolicy(Qt::PreventContextMenu);
        button_7->setAcceptDrops(true);
#ifndef QT_NO_ACCESSIBILITY
        button_7->setAccessibleName(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY
        button_7->setLayoutDirection(Qt::LeftToRight);
        button_7->setAutoFillBackground(false);
        button_7->setStyleSheet(QStringLiteral("border-image: url(:/new/imagens/imagens/7.png);"));
        button_7->setInputMethodHints(Qt::ImhNone);
        button_7->setIconSize(QSize(50, 30));
        button_7->setCheckable(false);
        button_7->setAutoRepeat(false);
        button_7->setAutoExclusive(false);
        button_7->setAutoDefault(false);
        button_7->setDefault(false);
        button_7->setFlat(false);

        gridLayout->addWidget(button_7, 0, 0, 1, 1);

        button_9 = new QPushButton(Widget);
        button_9->setObjectName(QStringLiteral("button_9"));
        button_9->setEnabled(true);
        sizePolicy.setHeightForWidth(button_9->sizePolicy().hasHeightForWidth());
        button_9->setSizePolicy(sizePolicy);
        button_9->setMinimumSize(QSize(0, 0));
        button_9->setSizeIncrement(QSize(0, 0));
        button_9->setBaseSize(QSize(0, 0));
        button_9->setFont(font1);
        button_9->setMouseTracking(false);
        button_9->setFocusPolicy(Qt::WheelFocus);
        button_9->setContextMenuPolicy(Qt::PreventContextMenu);
        button_9->setAcceptDrops(true);
#ifndef QT_NO_ACCESSIBILITY
        button_9->setAccessibleName(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY
        button_9->setLayoutDirection(Qt::LeftToRight);
        button_9->setAutoFillBackground(false);
        button_9->setStyleSheet(QStringLiteral("border-image: url(:/new/imagens/imagens/9.png);"));
        button_9->setInputMethodHints(Qt::ImhNone);
        button_9->setIconSize(QSize(50, 30));
        button_9->setCheckable(false);
        button_9->setAutoRepeat(false);
        button_9->setAutoExclusive(false);
        button_9->setAutoDefault(false);
        button_9->setDefault(false);
        button_9->setFlat(false);

        gridLayout->addWidget(button_9, 0, 2, 1, 1);

        button_13 = new QPushButton(Widget);
        button_13->setObjectName(QStringLiteral("button_13"));
        button_13->setEnabled(true);
        sizePolicy.setHeightForWidth(button_13->sizePolicy().hasHeightForWidth());
        button_13->setSizePolicy(sizePolicy);
        button_13->setMinimumSize(QSize(0, 0));
        button_13->setSizeIncrement(QSize(0, 0));
        button_13->setBaseSize(QSize(0, 0));
        button_13->setFont(font1);
        button_13->setMouseTracking(false);
        button_13->setFocusPolicy(Qt::WheelFocus);
        button_13->setContextMenuPolicy(Qt::PreventContextMenu);
        button_13->setAcceptDrops(true);
#ifndef QT_NO_ACCESSIBILITY
        button_13->setAccessibleName(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY
        button_13->setLayoutDirection(Qt::LeftToRight);
        button_13->setAutoFillBackground(false);
        button_13->setStyleSheet(QStringLiteral("border-image: url(:/new/imagens/imagens/div.png);"));
        button_13->setInputMethodHints(Qt::ImhNone);
        button_13->setIconSize(QSize(50, 30));
        button_13->setCheckable(false);
        button_13->setAutoRepeat(false);
        button_13->setAutoExclusive(false);
        button_13->setAutoDefault(false);
        button_13->setDefault(false);
        button_13->setFlat(false);

        gridLayout->addWidget(button_13, 0, 3, 1, 1);

        button_4 = new QPushButton(Widget);
        button_4->setObjectName(QStringLiteral("button_4"));
        button_4->setEnabled(true);
        sizePolicy.setHeightForWidth(button_4->sizePolicy().hasHeightForWidth());
        button_4->setSizePolicy(sizePolicy);
        button_4->setMinimumSize(QSize(0, 0));
        button_4->setSizeIncrement(QSize(0, 0));
        button_4->setBaseSize(QSize(0, 0));
        button_4->setFont(font1);
        button_4->setMouseTracking(false);
        button_4->setFocusPolicy(Qt::WheelFocus);
        button_4->setContextMenuPolicy(Qt::PreventContextMenu);
        button_4->setAcceptDrops(true);
#ifndef QT_NO_ACCESSIBILITY
        button_4->setAccessibleName(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY
        button_4->setLayoutDirection(Qt::LeftToRight);
        button_4->setAutoFillBackground(false);
        button_4->setStyleSheet(QStringLiteral("border-image: url(:/new/imagens/imagens/4.png);"));
        button_4->setInputMethodHints(Qt::ImhNone);
        button_4->setIconSize(QSize(50, 30));
        button_4->setCheckable(false);
        button_4->setAutoRepeat(false);
        button_4->setAutoExclusive(false);
        button_4->setAutoDefault(false);
        button_4->setDefault(false);
        button_4->setFlat(false);

        gridLayout->addWidget(button_4, 1, 0, 1, 1);

        button_5 = new QPushButton(Widget);
        button_5->setObjectName(QStringLiteral("button_5"));
        button_5->setEnabled(true);
        sizePolicy.setHeightForWidth(button_5->sizePolicy().hasHeightForWidth());
        button_5->setSizePolicy(sizePolicy);
        button_5->setMinimumSize(QSize(0, 0));
        button_5->setSizeIncrement(QSize(0, 0));
        button_5->setBaseSize(QSize(0, 0));
        button_5->setFont(font1);
        button_5->setMouseTracking(false);
        button_5->setFocusPolicy(Qt::WheelFocus);
        button_5->setContextMenuPolicy(Qt::PreventContextMenu);
        button_5->setAcceptDrops(true);
#ifndef QT_NO_ACCESSIBILITY
        button_5->setAccessibleName(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY
        button_5->setLayoutDirection(Qt::LeftToRight);
        button_5->setAutoFillBackground(false);
        button_5->setStyleSheet(QStringLiteral("border-image: url(:/new/imagens/imagens/5.png);"));
        button_5->setIconSize(QSize(50, 30));
        button_5->setCheckable(false);
        button_5->setAutoRepeat(false);
        button_5->setAutoExclusive(false);
        button_5->setAutoDefault(false);
        button_5->setDefault(false);
        button_5->setFlat(false);

        gridLayout->addWidget(button_5, 1, 1, 1, 1);

        button_6 = new QPushButton(Widget);
        button_6->setObjectName(QStringLiteral("button_6"));
        button_6->setEnabled(true);
        sizePolicy.setHeightForWidth(button_6->sizePolicy().hasHeightForWidth());
        button_6->setSizePolicy(sizePolicy);
        button_6->setMinimumSize(QSize(0, 0));
        button_6->setSizeIncrement(QSize(0, 0));
        button_6->setBaseSize(QSize(0, 0));
        button_6->setFont(font1);
        button_6->setMouseTracking(false);
        button_6->setFocusPolicy(Qt::WheelFocus);
        button_6->setContextMenuPolicy(Qt::PreventContextMenu);
        button_6->setAcceptDrops(true);
#ifndef QT_NO_ACCESSIBILITY
        button_6->setAccessibleName(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY
        button_6->setLayoutDirection(Qt::LeftToRight);
        button_6->setAutoFillBackground(false);
        button_6->setStyleSheet(QStringLiteral("border-image: url(:/new/imagens/imagens/6.png);"));
        button_6->setInputMethodHints(Qt::ImhNone);
        button_6->setIconSize(QSize(50, 30));
        button_6->setCheckable(false);
        button_6->setAutoRepeat(false);
        button_6->setAutoExclusive(false);
        button_6->setAutoDefault(false);
        button_6->setDefault(false);
        button_6->setFlat(false);

        gridLayout->addWidget(button_6, 1, 2, 1, 1);

        button_12 = new QPushButton(Widget);
        button_12->setObjectName(QStringLiteral("button_12"));
        button_12->setEnabled(true);
        sizePolicy.setHeightForWidth(button_12->sizePolicy().hasHeightForWidth());
        button_12->setSizePolicy(sizePolicy);
        button_12->setMinimumSize(QSize(0, 0));
        button_12->setSizeIncrement(QSize(0, 0));
        button_12->setBaseSize(QSize(0, 0));
        button_12->setFont(font1);
        button_12->setMouseTracking(false);
        button_12->setFocusPolicy(Qt::WheelFocus);
        button_12->setContextMenuPolicy(Qt::PreventContextMenu);
        button_12->setAcceptDrops(true);
#ifndef QT_NO_ACCESSIBILITY
        button_12->setAccessibleName(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY
        button_12->setLayoutDirection(Qt::LeftToRight);
        button_12->setAutoFillBackground(false);
        button_12->setStyleSheet(QStringLiteral("border-image: url(:/new/imagens/imagens/mult.png);"));
        button_12->setInputMethodHints(Qt::ImhNone);
        button_12->setIconSize(QSize(50, 30));
        button_12->setCheckable(false);
        button_12->setAutoRepeat(false);
        button_12->setAutoExclusive(false);
        button_12->setAutoDefault(false);
        button_12->setDefault(false);
        button_12->setFlat(false);

        gridLayout->addWidget(button_12, 1, 3, 1, 1);

        button_1 = new QPushButton(Widget);
        button_1->setObjectName(QStringLiteral("button_1"));
        button_1->setEnabled(true);
        sizePolicy.setHeightForWidth(button_1->sizePolicy().hasHeightForWidth());
        button_1->setSizePolicy(sizePolicy);
        button_1->setMinimumSize(QSize(0, 0));
        button_1->setSizeIncrement(QSize(0, 0));
        button_1->setBaseSize(QSize(0, 0));
        button_1->setFont(font1);
        button_1->setMouseTracking(false);
        button_1->setFocusPolicy(Qt::WheelFocus);
        button_1->setContextMenuPolicy(Qt::PreventContextMenu);
        button_1->setAcceptDrops(true);
#ifndef QT_NO_ACCESSIBILITY
        button_1->setAccessibleName(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY
        button_1->setLayoutDirection(Qt::LeftToRight);
        button_1->setAutoFillBackground(false);
        button_1->setStyleSheet(QStringLiteral("border-image: url(:/new/imagens/imagens/1.png);"));
        button_1->setInputMethodHints(Qt::ImhNone);
        button_1->setIconSize(QSize(50, 30));
        button_1->setCheckable(false);
        button_1->setAutoRepeat(false);
        button_1->setAutoExclusive(false);
        button_1->setAutoDefault(false);
        button_1->setDefault(false);
        button_1->setFlat(false);

        gridLayout->addWidget(button_1, 2, 0, 1, 1);

        button_2 = new QPushButton(Widget);
        button_2->setObjectName(QStringLiteral("button_2"));
        button_2->setEnabled(true);
        sizePolicy.setHeightForWidth(button_2->sizePolicy().hasHeightForWidth());
        button_2->setSizePolicy(sizePolicy);
        button_2->setMinimumSize(QSize(0, 0));
        button_2->setSizeIncrement(QSize(0, 0));
        button_2->setBaseSize(QSize(0, 0));
        button_2->setFont(font1);
        button_2->setMouseTracking(false);
        button_2->setFocusPolicy(Qt::WheelFocus);
        button_2->setContextMenuPolicy(Qt::PreventContextMenu);
        button_2->setAcceptDrops(true);
#ifndef QT_NO_ACCESSIBILITY
        button_2->setAccessibleName(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY
        button_2->setLayoutDirection(Qt::LeftToRight);
        button_2->setAutoFillBackground(false);
        button_2->setStyleSheet(QStringLiteral("border-image: url(:/new/imagens/imagens/2.png);"));
        button_2->setIconSize(QSize(50, 30));
        button_2->setCheckable(false);
        button_2->setChecked(false);
        button_2->setAutoRepeat(false);
        button_2->setAutoExclusive(false);

        gridLayout->addWidget(button_2, 2, 1, 1, 1);

        button_3 = new QPushButton(Widget);
        button_3->setObjectName(QStringLiteral("button_3"));
        button_3->setEnabled(true);
        sizePolicy.setHeightForWidth(button_3->sizePolicy().hasHeightForWidth());
        button_3->setSizePolicy(sizePolicy);
        button_3->setMinimumSize(QSize(0, 0));
        button_3->setSizeIncrement(QSize(0, 0));
        button_3->setBaseSize(QSize(0, 0));
        button_3->setFont(font1);
        button_3->setMouseTracking(false);
        button_3->setFocusPolicy(Qt::WheelFocus);
        button_3->setContextMenuPolicy(Qt::PreventContextMenu);
        button_3->setAcceptDrops(true);
#ifndef QT_NO_ACCESSIBILITY
        button_3->setAccessibleName(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY
        button_3->setLayoutDirection(Qt::LeftToRight);
        button_3->setAutoFillBackground(false);
        button_3->setStyleSheet(QStringLiteral("border-image: url(:/new/imagens/imagens/3.png);"));
        button_3->setInputMethodHints(Qt::ImhNone);
        button_3->setIconSize(QSize(50, 30));
        button_3->setCheckable(false);
        button_3->setAutoRepeat(false);
        button_3->setAutoExclusive(false);
        button_3->setAutoDefault(false);
        button_3->setDefault(false);
        button_3->setFlat(false);

        gridLayout->addWidget(button_3, 2, 2, 1, 1);

        button_11 = new QPushButton(Widget);
        button_11->setObjectName(QStringLiteral("button_11"));
        button_11->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(button_11->sizePolicy().hasHeightForWidth());
        button_11->setSizePolicy(sizePolicy1);
        button_11->setMinimumSize(QSize(0, 0));
        button_11->setSizeIncrement(QSize(0, 0));
        button_11->setBaseSize(QSize(0, 0));
        button_11->setFont(font1);
        button_11->setMouseTracking(false);
        button_11->setFocusPolicy(Qt::WheelFocus);
        button_11->setContextMenuPolicy(Qt::PreventContextMenu);
        button_11->setAcceptDrops(true);
#ifndef QT_NO_ACCESSIBILITY
        button_11->setAccessibleName(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY
        button_11->setLayoutDirection(Qt::LeftToRight);
        button_11->setAutoFillBackground(false);
        button_11->setStyleSheet(QStringLiteral("border-image: url(:/new/imagens/imagens/sub.png);"));
        button_11->setInputMethodHints(Qt::ImhNone);
        button_11->setIconSize(QSize(50, 30));
        button_11->setCheckable(false);
        button_11->setAutoRepeat(false);
        button_11->setAutoExclusive(false);
        button_11->setAutoDefault(false);
        button_11->setDefault(false);
        button_11->setFlat(false);

        gridLayout->addWidget(button_11, 2, 3, 1, 1);

        button_14 = new QPushButton(Widget);
        button_14->setObjectName(QStringLiteral("button_14"));
        button_14->setEnabled(true);
        sizePolicy.setHeightForWidth(button_14->sizePolicy().hasHeightForWidth());
        button_14->setSizePolicy(sizePolicy);
        button_14->setMinimumSize(QSize(0, 0));
        button_14->setSizeIncrement(QSize(0, 0));
        button_14->setBaseSize(QSize(0, 0));
        button_14->setFont(font1);
        button_14->setMouseTracking(false);
        button_14->setFocusPolicy(Qt::WheelFocus);
        button_14->setContextMenuPolicy(Qt::PreventContextMenu);
        button_14->setAcceptDrops(true);
#ifndef QT_NO_ACCESSIBILITY
        button_14->setAccessibleName(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY
        button_14->setLayoutDirection(Qt::LeftToRight);
        button_14->setAutoFillBackground(false);
        button_14->setStyleSheet(QStringLiteral("border-image: url(:/new/imagens/imagens/ponto.png);"));
        button_14->setInputMethodHints(Qt::ImhNone);
        button_14->setIconSize(QSize(50, 30));
        button_14->setCheckable(false);
        button_14->setAutoRepeat(false);
        button_14->setAutoExclusive(false);
        button_14->setAutoDefault(false);
        button_14->setDefault(false);
        button_14->setFlat(false);

        gridLayout->addWidget(button_14, 3, 0, 1, 1);

        button_0 = new QPushButton(Widget);
        button_0->setObjectName(QStringLiteral("button_0"));
        button_0->setEnabled(true);
        sizePolicy.setHeightForWidth(button_0->sizePolicy().hasHeightForWidth());
        button_0->setSizePolicy(sizePolicy);
        button_0->setMinimumSize(QSize(0, 0));
        button_0->setSizeIncrement(QSize(0, 0));
        button_0->setBaseSize(QSize(0, 0));
        button_0->setFont(font1);
        button_0->setMouseTracking(false);
        button_0->setFocusPolicy(Qt::WheelFocus);
        button_0->setContextMenuPolicy(Qt::PreventContextMenu);
        button_0->setAcceptDrops(true);
#ifndef QT_NO_ACCESSIBILITY
        button_0->setAccessibleName(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY
        button_0->setLayoutDirection(Qt::LeftToRight);
        button_0->setAutoFillBackground(false);
        button_0->setStyleSheet(QStringLiteral("border-image: url(:/new/imagens/imagens/0.png);"));
        button_0->setInputMethodHints(Qt::ImhNone);
        button_0->setIconSize(QSize(50, 30));
        button_0->setCheckable(false);
        button_0->setAutoRepeat(false);
        button_0->setAutoExclusive(false);
        button_0->setAutoDefault(false);
        button_0->setDefault(false);
        button_0->setFlat(false);

        gridLayout->addWidget(button_0, 3, 1, 1, 1);

        resultado = new QPushButton(Widget);
        resultado->setObjectName(QStringLiteral("resultado"));
        resultado->setEnabled(true);
        sizePolicy.setHeightForWidth(resultado->sizePolicy().hasHeightForWidth());
        resultado->setSizePolicy(sizePolicy);
        resultado->setMinimumSize(QSize(0, 0));
        resultado->setSizeIncrement(QSize(0, 0));
        resultado->setBaseSize(QSize(0, 0));
        resultado->setFont(font1);
        resultado->setMouseTracking(false);
        resultado->setFocusPolicy(Qt::WheelFocus);
        resultado->setContextMenuPolicy(Qt::PreventContextMenu);
        resultado->setAcceptDrops(true);
#ifndef QT_NO_ACCESSIBILITY
        resultado->setAccessibleName(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY
        resultado->setLayoutDirection(Qt::LeftToRight);
        resultado->setAutoFillBackground(false);
        resultado->setStyleSheet(QStringLiteral("border-image: url(:/new/imagens/imagens/res.png);"));
        resultado->setInputMethodHints(Qt::ImhNone);
        resultado->setIconSize(QSize(50, 30));
        resultado->setCheckable(false);
        resultado->setAutoRepeat(false);
        resultado->setAutoExclusive(false);
        resultado->setAutoDefault(false);
        resultado->setDefault(false);
        resultado->setFlat(false);

        gridLayout->addWidget(resultado, 3, 2, 1, 1);

        limpar = new QPushButton(Widget);
        limpar->setObjectName(QStringLiteral("limpar"));
        limpar->setEnabled(true);
        sizePolicy.setHeightForWidth(limpar->sizePolicy().hasHeightForWidth());
        limpar->setSizePolicy(sizePolicy);
        limpar->setMinimumSize(QSize(0, 0));
        limpar->setSizeIncrement(QSize(0, 0));
        limpar->setBaseSize(QSize(0, 0));
        QFont font2;
        font2.setFamily(QStringLiteral("Ubuntu"));
        font2.setPointSize(1);
        limpar->setFont(font2);
        limpar->setMouseTracking(false);
        limpar->setFocusPolicy(Qt::WheelFocus);
        limpar->setContextMenuPolicy(Qt::PreventContextMenu);
        limpar->setAcceptDrops(true);
#ifndef QT_NO_ACCESSIBILITY
        limpar->setAccessibleName(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY
        limpar->setLayoutDirection(Qt::LeftToRight);
        limpar->setAutoFillBackground(false);
        limpar->setStyleSheet(QStringLiteral("border-image: url(:/new/imagens/imagens/clear.png);"));
        limpar->setInputMethodHints(Qt::ImhNone);
        limpar->setIconSize(QSize(50, 30));
        limpar->setCheckable(false);
        limpar->setChecked(false);
        limpar->setAutoRepeat(false);
        limpar->setAutoExclusive(false);
        limpar->setAutoDefault(false);
        limpar->setDefault(false);
        limpar->setFlat(false);

        gridLayout->addWidget(limpar, 4, 0, 1, 1);

        button_8 = new QPushButton(Widget);
        button_8->setObjectName(QStringLiteral("button_8"));
        button_8->setEnabled(true);
        sizePolicy.setHeightForWidth(button_8->sizePolicy().hasHeightForWidth());
        button_8->setSizePolicy(sizePolicy);
        button_8->setMinimumSize(QSize(0, 0));
        button_8->setSizeIncrement(QSize(0, 0));
        button_8->setBaseSize(QSize(0, 0));
        button_8->setFont(font1);
        button_8->setMouseTracking(false);
        button_8->setFocusPolicy(Qt::WheelFocus);
        button_8->setContextMenuPolicy(Qt::PreventContextMenu);
        button_8->setAcceptDrops(true);
#ifndef QT_NO_ACCESSIBILITY
        button_8->setAccessibleName(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY
        button_8->setLayoutDirection(Qt::LeftToRight);
        button_8->setAutoFillBackground(false);
        button_8->setStyleSheet(QStringLiteral("border-image: url(:/new/imagens/imagens/8.png);"));
        button_8->setInputMethodHints(Qt::ImhNone);
        button_8->setIconSize(QSize(50, 30));
        button_8->setCheckable(false);
        button_8->setAutoRepeat(false);
        button_8->setAutoExclusive(false);

        gridLayout->addWidget(button_8, 0, 1, 1, 1);

        button_10 = new QPushButton(Widget);
        button_10->setObjectName(QStringLiteral("button_10"));
        button_10->setEnabled(true);
        sizePolicy.setHeightForWidth(button_10->sizePolicy().hasHeightForWidth());
        button_10->setSizePolicy(sizePolicy);
        button_10->setMinimumSize(QSize(0, 0));
        button_10->setSizeIncrement(QSize(0, 0));
        button_10->setBaseSize(QSize(0, 0));
        button_10->setFont(font1);
        button_10->setMouseTracking(false);
        button_10->setFocusPolicy(Qt::WheelFocus);
        button_10->setContextMenuPolicy(Qt::PreventContextMenu);
        button_10->setAcceptDrops(true);
#ifndef QT_NO_ACCESSIBILITY
        button_10->setAccessibleName(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY
        button_10->setLayoutDirection(Qt::LeftToRight);
        button_10->setAutoFillBackground(false);
        button_10->setStyleSheet(QStringLiteral("border-image: url(:/new/imagens/imagens/soma.png);"));
        button_10->setInputMethodHints(Qt::ImhNone);
        button_10->setIconSize(QSize(50, 30));
        button_10->setCheckable(false);
        button_10->setAutoRepeat(false);
        button_10->setAutoExclusive(false);

        gridLayout->addWidget(button_10, 3, 3, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 5);

        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
#ifndef QT_NO_TOOLTIP
        button_7->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        button_7->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        button_7->setText(QApplication::translate("Widget", "7", 0));
        button_7->setShortcut(QString());
#ifndef QT_NO_TOOLTIP
        button_9->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        button_9->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        button_9->setText(QApplication::translate("Widget", "9", 0));
        button_9->setShortcut(QString());
#ifndef QT_NO_TOOLTIP
        button_13->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        button_13->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        button_13->setText(QApplication::translate("Widget", "/", 0));
        button_13->setShortcut(QString());
#ifndef QT_NO_TOOLTIP
        button_4->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        button_4->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        button_4->setText(QApplication::translate("Widget", "4", 0));
        button_4->setShortcut(QString());
#ifndef QT_NO_TOOLTIP
        button_5->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        button_5->setText(QApplication::translate("Widget", "5", 0));
        button_5->setShortcut(QString());
#ifndef QT_NO_TOOLTIP
        button_6->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        button_6->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        button_6->setText(QApplication::translate("Widget", "6", 0));
        button_6->setShortcut(QString());
#ifndef QT_NO_TOOLTIP
        button_12->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        button_12->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        button_12->setText(QApplication::translate("Widget", "*", 0));
        button_12->setShortcut(QString());
#ifndef QT_NO_TOOLTIP
        button_1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        button_1->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        button_1->setText(QApplication::translate("Widget", "1", 0));
        button_1->setShortcut(QString());
#ifndef QT_NO_TOOLTIP
        button_2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        button_2->setText(QApplication::translate("Widget", "2", 0));
        button_2->setShortcut(QString());
#ifndef QT_NO_TOOLTIP
        button_3->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        button_3->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        button_3->setText(QApplication::translate("Widget", "3", 0));
        button_3->setShortcut(QString());
#ifndef QT_NO_TOOLTIP
        button_11->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        button_11->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        button_11->setText(QApplication::translate("Widget", "-", 0));
        button_11->setShortcut(QString());
#ifndef QT_NO_TOOLTIP
        button_14->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        button_14->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        button_14->setText(QApplication::translate("Widget", ".", 0));
        button_14->setShortcut(QString());
#ifndef QT_NO_TOOLTIP
        button_0->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        button_0->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        button_0->setText(QApplication::translate("Widget", "0", 0));
        button_0->setShortcut(QString());
#ifndef QT_NO_TOOLTIP
        resultado->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        resultado->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        resultado->setText(QApplication::translate("Widget", "=", 0));
        resultado->setShortcut(QString());
#ifndef QT_NO_TOOLTIP
        limpar->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        limpar->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        limpar->setText(QApplication::translate("Widget", "C", 0));
        limpar->setShortcut(QString());
#ifndef QT_NO_TOOLTIP
        button_8->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        button_8->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        button_8->setText(QApplication::translate("Widget", "8", 0));
        button_8->setShortcut(QString());
#ifndef QT_NO_TOOLTIP
        button_10->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        button_10->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        button_10->setText(QApplication::translate("Widget", "+", 0));
        button_10->setShortcut(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
