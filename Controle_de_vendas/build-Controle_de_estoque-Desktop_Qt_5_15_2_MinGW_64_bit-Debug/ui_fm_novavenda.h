/********************************************************************************
** Form generated from reading UI file 'fm_novavenda.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FM_NOVAVENDA_H
#define UI_FM_NOVAVENDA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fm_novavenda
{
public:
    QLineEdit *txt_qtde;
    QLineEdit *txt_codproduto;
    QTableWidget *tw_listaprodutos;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *lb_totalvenda;
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_excluirproduto;
    QPushButton *btn_editarproduto;
    QPushButton *btn_finalizarvenda;

    void setupUi(QDialog *fm_novavenda)
    {
        if (fm_novavenda->objectName().isEmpty())
            fm_novavenda->setObjectName(QString::fromUtf8("fm_novavenda"));
        fm_novavenda->resize(670, 351);
        txt_qtde = new QLineEdit(fm_novavenda);
        txt_qtde->setObjectName(QString::fromUtf8("txt_qtde"));
        txt_qtde->setGeometry(QRect(20, 30, 81, 28));
        txt_codproduto = new QLineEdit(fm_novavenda);
        txt_codproduto->setObjectName(QString::fromUtf8("txt_codproduto"));
        txt_codproduto->setGeometry(QRect(130, 30, 181, 28));
        tw_listaprodutos = new QTableWidget(fm_novavenda);
        tw_listaprodutos->setObjectName(QString::fromUtf8("tw_listaprodutos"));
        tw_listaprodutos->setGeometry(QRect(20, 70, 631, 192));
        label = new QLabel(fm_novavenda);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 0, 81, 31));
        label_2 = new QLabel(fm_novavenda);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(110, 30, 31, 31));
        label_3 = new QLabel(fm_novavenda);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(160, 0, 151, 31));
        label_4 = new QLabel(fm_novavenda);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 270, 81, 20));
        lb_totalvenda = new QLabel(fm_novavenda);
        lb_totalvenda->setObjectName(QString::fromUtf8("lb_totalvenda"));
        lb_totalvenda->setGeometry(QRect(95, 270, 111, 20));
        pushButton = new QPushButton(fm_novavenda);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(330, 30, 150, 31));
        layoutWidget = new QWidget(fm_novavenda);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 300, 376, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btn_excluirproduto = new QPushButton(layoutWidget);
        btn_excluirproduto->setObjectName(QString::fromUtf8("btn_excluirproduto"));
        btn_excluirproduto->setAutoDefault(false);

        horizontalLayout->addWidget(btn_excluirproduto);

        btn_editarproduto = new QPushButton(layoutWidget);
        btn_editarproduto->setObjectName(QString::fromUtf8("btn_editarproduto"));
        btn_editarproduto->setAutoDefault(false);

        horizontalLayout->addWidget(btn_editarproduto);

        btn_finalizarvenda = new QPushButton(layoutWidget);
        btn_finalizarvenda->setObjectName(QString::fromUtf8("btn_finalizarvenda"));
        btn_finalizarvenda->setAutoDefault(false);

        horizontalLayout->addWidget(btn_finalizarvenda);


        retranslateUi(fm_novavenda);

        QMetaObject::connectSlotsByName(fm_novavenda);
    } // setupUi

    void retranslateUi(QDialog *fm_novavenda)
    {
        fm_novavenda->setWindowTitle(QCoreApplication::translate("fm_novavenda", "Dialog", nullptr));
        txt_qtde->setText(QCoreApplication::translate("fm_novavenda", "1", nullptr));
        label->setText(QCoreApplication::translate("fm_novavenda", "Quantidade", nullptr));
        label_2->setText(QCoreApplication::translate("fm_novavenda", "X", nullptr));
        label_3->setText(QCoreApplication::translate("fm_novavenda", "C\303\263digo do Produto", nullptr));
        label_4->setText(QCoreApplication::translate("fm_novavenda", "Valor Total:", nullptr));
        lb_totalvenda->setText(QCoreApplication::translate("fm_novavenda", "R$", nullptr));
        pushButton->setText(QCoreApplication::translate("fm_novavenda", "Pesquisar o Produto", nullptr));
        btn_excluirproduto->setText(QCoreApplication::translate("fm_novavenda", "Excluir o Produto", nullptr));
        btn_editarproduto->setText(QCoreApplication::translate("fm_novavenda", "Editar o Produto", nullptr));
        btn_finalizarvenda->setText(QCoreApplication::translate("fm_novavenda", "Finalizar a Venda", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fm_novavenda: public Ui_fm_novavenda {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FM_NOVAVENDA_H
