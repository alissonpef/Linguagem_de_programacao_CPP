/********************************************************************************
** Form generated from reading UI file 'fm_editarprodutovenda.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FM_EDITARPRODUTOVENDA_H
#define UI_FM_EDITARPRODUTOVENDA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fm_editarprodutovenda
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_prod;
    QLineEdit *txt_edita_produto;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_preco;
    QLineEdit *txt_edita_precoUnitario;
    QVBoxLayout *verticalLayout_3;
    QLabel *label__qtde;
    QLineEdit *txt_edita_quantidade;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btn_edita_confirma;
    QPushButton *btn_edita_cancela;

    void setupUi(QDialog *fm_editarprodutovenda)
    {
        if (fm_editarprodutovenda->objectName().isEmpty())
            fm_editarprodutovenda->setObjectName(QString::fromUtf8("fm_editarprodutovenda"));
        fm_editarprodutovenda->resize(400, 300);
        layoutWidget = new QWidget(fm_editarprodutovenda);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 361, 261));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_prod = new QLabel(layoutWidget);
        label_prod->setObjectName(QString::fromUtf8("label_prod"));

        verticalLayout_2->addWidget(label_prod);

        txt_edita_produto = new QLineEdit(layoutWidget);
        txt_edita_produto->setObjectName(QString::fromUtf8("txt_edita_produto"));

        verticalLayout_2->addWidget(txt_edita_produto);


        verticalLayout_4->addLayout(verticalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_preco = new QLabel(layoutWidget);
        label_preco->setObjectName(QString::fromUtf8("label_preco"));

        verticalLayout->addWidget(label_preco);

        txt_edita_precoUnitario = new QLineEdit(layoutWidget);
        txt_edita_precoUnitario->setObjectName(QString::fromUtf8("txt_edita_precoUnitario"));

        verticalLayout->addWidget(txt_edita_precoUnitario);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label__qtde = new QLabel(layoutWidget);
        label__qtde->setObjectName(QString::fromUtf8("label__qtde"));

        verticalLayout_3->addWidget(label__qtde);

        txt_edita_quantidade = new QLineEdit(layoutWidget);
        txt_edita_quantidade->setObjectName(QString::fromUtf8("txt_edita_quantidade"));

        verticalLayout_3->addWidget(txt_edita_quantidade);


        horizontalLayout->addLayout(verticalLayout_3);


        verticalLayout_4->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        btn_edita_confirma = new QPushButton(layoutWidget);
        btn_edita_confirma->setObjectName(QString::fromUtf8("btn_edita_confirma"));

        horizontalLayout_2->addWidget(btn_edita_confirma);

        btn_edita_cancela = new QPushButton(layoutWidget);
        btn_edita_cancela->setObjectName(QString::fromUtf8("btn_edita_cancela"));

        horizontalLayout_2->addWidget(btn_edita_cancela);


        verticalLayout_4->addLayout(horizontalLayout_2);


        retranslateUi(fm_editarprodutovenda);

        QMetaObject::connectSlotsByName(fm_editarprodutovenda);
    } // setupUi

    void retranslateUi(QDialog *fm_editarprodutovenda)
    {
        fm_editarprodutovenda->setWindowTitle(QCoreApplication::translate("fm_editarprodutovenda", "Dialog", nullptr));
        label_prod->setText(QCoreApplication::translate("fm_editarprodutovenda", "Produto", nullptr));
        label_preco->setText(QCoreApplication::translate("fm_editarprodutovenda", "Pre\303\247o Unit\303\241rio", nullptr));
        label__qtde->setText(QCoreApplication::translate("fm_editarprodutovenda", "Quantidade", nullptr));
        btn_edita_confirma->setText(QCoreApplication::translate("fm_editarprodutovenda", "Confirmar", nullptr));
        btn_edita_cancela->setText(QCoreApplication::translate("fm_editarprodutovenda", "Cancelar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fm_editarprodutovenda: public Ui_fm_editarprodutovenda {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FM_EDITARPRODUTOVENDA_H
