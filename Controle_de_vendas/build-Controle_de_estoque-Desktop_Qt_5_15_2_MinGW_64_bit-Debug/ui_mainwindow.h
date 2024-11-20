/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionEstoque;
    QAction *actionColaboradores;
    QAction *actionVendas;
    QAction *actionSAIR;
    QAction *actionSobre;
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *btn_bloquear;
    QLabel *lb_nome;
    QMenuBar *menubar;
    QMenu *menuGest_o;
    QMenu *menuSistema;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(302, 230);
        actionEstoque = new QAction(MainWindow);
        actionEstoque->setObjectName(QString::fromUtf8("actionEstoque"));
        actionColaboradores = new QAction(MainWindow);
        actionColaboradores->setObjectName(QString::fromUtf8("actionColaboradores"));
        actionVendas = new QAction(MainWindow);
        actionVendas->setObjectName(QString::fromUtf8("actionVendas"));
        actionSAIR = new QAction(MainWindow);
        actionSAIR->setObjectName(QString::fromUtf8("actionSAIR"));
        actionSobre = new QAction(MainWindow);
        actionSobre->setObjectName(QString::fromUtf8("actionSobre"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(40, 30, 221, 121));
        pushButton->setStyleSheet(QString::fromUtf8("background:#FF0000;\n"
"color:#fff;\n"
"font-size:18pt;\n"
"border:none;\n"
"border-radius:10px;"));
        btn_bloquear = new QPushButton(centralwidget);
        btn_bloquear->setObjectName(QString::fromUtf8("btn_bloquear"));
        btn_bloquear->setGeometry(QRect(0, 210, 32, 32));
        btn_bloquear->setFlat(true);
        lb_nome = new QLabel(centralwidget);
        lb_nome->setObjectName(QString::fromUtf8("lb_nome"));
        lb_nome->setGeometry(QRect(40, 220, 101, 20));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lb_nome->sizePolicy().hasHeightForWidth());
        lb_nome->setSizePolicy(sizePolicy);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 302, 25));
        menuGest_o = new QMenu(menubar);
        menuGest_o->setObjectName(QString::fromUtf8("menuGest_o"));
        menuSistema = new QMenu(menubar);
        menuSistema->setObjectName(QString::fromUtf8("menuSistema"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuGest_o->menuAction());
        menubar->addAction(menuSistema->menuAction());
        menuGest_o->addAction(actionEstoque);
        menuGest_o->addAction(actionColaboradores);
        menuGest_o->addAction(actionVendas);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionEstoque->setText(QCoreApplication::translate("MainWindow", "Estoque", nullptr));
        actionColaboradores->setText(QCoreApplication::translate("MainWindow", "Usu\303\241rios", nullptr));
        actionVendas->setText(QCoreApplication::translate("MainWindow", "Vendas", nullptr));
        actionSAIR->setText(QCoreApplication::translate("MainWindow", "SAIR", nullptr));
        actionSobre->setText(QCoreApplication::translate("MainWindow", "Sobre", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "nova venda", nullptr));
        btn_bloquear->setText(QCoreApplication::translate("MainWindow", "bloq", nullptr));
        lb_nome->setText(QCoreApplication::translate("MainWindow", "Sem colaborador", nullptr));
        menuGest_o->setTitle(QCoreApplication::translate("MainWindow", "Op\303\247\303\265es", nullptr));
        menuSistema->setTitle(QCoreApplication::translate("MainWindow", "Sistema", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
