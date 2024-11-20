/********************************************************************************
** Form generated from reading UI file 'fm_gestaoestoque.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FM_GESTAOESTOQUE_H
#define UI_FM_GESTAOESTOQUE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fm_gestaoEstoque
{
public:
    QTabWidget *tabWidget;
    QWidget *tab_novoproduto;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *txt_codigoproduto;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_2;
    QLineEdit *txt_descricaoproduto;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_5;
    QLineEdit *txt_qtdeestoque;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QLineEdit *txt_valorcompra;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_6;
    QLineEdit *txt_valorvenda;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QLineEdit *txt_fornecedor;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_novoproduto;
    QPushButton *btn_gravarnovoproduto;
    QWidget *tab_gestaoprodutos;
    QTableWidget *tw_ge_produtos;
    QGroupBox *groupBox;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_8;
    QRadioButton *re_ge_codigo;
    QRadioButton *re_ge_produto;
    QPushButton *btn_ge_filtrar;
    QLabel *label_13;
    QLabel *label_14;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_15;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_12;
    QLineEdit *txt_ge_codigoproduto;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_11;
    QLineEdit *txt_ge_produto;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_10;
    QLineEdit *txt_ge_qtde;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_9;
    QLineEdit *txt_ge_valorcompra;
    QVBoxLayout *verticalLayout_13;
    QLabel *label_8;
    QLineEdit *txt_ge_valorvenda;
    QVBoxLayout *verticalLayout_14;
    QLabel *label_7;
    QLineEdit *txt_ge_fornecedor;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btn_ge_gravar;
    QPushButton *btn_ge_excluir;
    QLineEdit *txt_ge_filtrar;

    void setupUi(QDialog *fm_gestaoEstoque)
    {
        if (fm_gestaoEstoque->objectName().isEmpty())
            fm_gestaoEstoque->setObjectName(QString::fromUtf8("fm_gestaoEstoque"));
        fm_gestaoEstoque->resize(1050, 558);
        tabWidget = new QTabWidget(fm_gestaoEstoque);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 0, 1031, 541));
        tab_novoproduto = new QWidget();
        tab_novoproduto->setObjectName(QString::fromUtf8("tab_novoproduto"));
        layoutWidget = new QWidget(tab_novoproduto);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 30, 911, 291));
        verticalLayout_7 = new QVBoxLayout(layoutWidget);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        txt_codigoproduto = new QLineEdit(layoutWidget);
        txt_codigoproduto->setObjectName(QString::fromUtf8("txt_codigoproduto"));

        verticalLayout->addWidget(txt_codigoproduto);


        verticalLayout_7->addLayout(verticalLayout);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_4->addWidget(label_2);

        txt_descricaoproduto = new QLineEdit(layoutWidget);
        txt_descricaoproduto->setObjectName(QString::fromUtf8("txt_descricaoproduto"));

        verticalLayout_4->addWidget(txt_descricaoproduto);


        verticalLayout_7->addLayout(verticalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_5->addWidget(label_5);

        txt_qtdeestoque = new QLineEdit(layoutWidget);
        txt_qtdeestoque->setObjectName(QString::fromUtf8("txt_qtdeestoque"));

        verticalLayout_5->addWidget(txt_qtdeestoque);


        horizontalLayout_2->addLayout(verticalLayout_5);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_3->addWidget(label_4);

        txt_valorcompra = new QLineEdit(layoutWidget);
        txt_valorcompra->setObjectName(QString::fromUtf8("txt_valorcompra"));

        verticalLayout_3->addWidget(txt_valorcompra);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_6->addWidget(label_6);

        txt_valorvenda = new QLineEdit(layoutWidget);
        txt_valorvenda->setObjectName(QString::fromUtf8("txt_valorvenda"));

        verticalLayout_6->addWidget(txt_valorvenda);


        horizontalLayout_2->addLayout(verticalLayout_6);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_2->addWidget(label_3);

        txt_fornecedor = new QLineEdit(layoutWidget);
        txt_fornecedor->setObjectName(QString::fromUtf8("txt_fornecedor"));

        verticalLayout_2->addWidget(txt_fornecedor);


        horizontalLayout_2->addLayout(verticalLayout_2);


        verticalLayout_7->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btn_novoproduto = new QPushButton(layoutWidget);
        btn_novoproduto->setObjectName(QString::fromUtf8("btn_novoproduto"));

        horizontalLayout->addWidget(btn_novoproduto);

        btn_gravarnovoproduto = new QPushButton(layoutWidget);
        btn_gravarnovoproduto->setObjectName(QString::fromUtf8("btn_gravarnovoproduto"));

        horizontalLayout->addWidget(btn_gravarnovoproduto);


        verticalLayout_7->addLayout(horizontalLayout);

        tabWidget->addTab(tab_novoproduto, QString());
        tab_gestaoprodutos = new QWidget();
        tab_gestaoprodutos->setObjectName(QString::fromUtf8("tab_gestaoprodutos"));
        tw_ge_produtos = new QTableWidget(tab_gestaoprodutos);
        tw_ge_produtos->setObjectName(QString::fromUtf8("tw_ge_produtos"));
        tw_ge_produtos->setGeometry(QRect(560, 110, 451, 381));
        groupBox = new QGroupBox(tab_gestaoprodutos);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(560, 0, 201, 101));
        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 30, 175, 61));
        verticalLayout_8 = new QVBoxLayout(layoutWidget1);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        re_ge_codigo = new QRadioButton(layoutWidget1);
        re_ge_codigo->setObjectName(QString::fromUtf8("re_ge_codigo"));
        re_ge_codigo->setChecked(true);

        verticalLayout_8->addWidget(re_ge_codigo);

        re_ge_produto = new QRadioButton(layoutWidget1);
        re_ge_produto->setObjectName(QString::fromUtf8("re_ge_produto"));

        verticalLayout_8->addWidget(re_ge_produto);

        btn_ge_filtrar = new QPushButton(tab_gestaoprodutos);
        btn_ge_filtrar->setObjectName(QString::fromUtf8("btn_ge_filtrar"));
        btn_ge_filtrar->setGeometry(QRect(870, 30, 141, 29));
        label_13 = new QLabel(tab_gestaoprodutos);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(780, 30, 91, 31));
        label_13->setStyleSheet(QString::fromUtf8("font-size:16pt;\n"
"color:#000;\n"
""));
        label_14 = new QLabel(tab_gestaoprodutos);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(780, 30, 91, 31));
        label_14->setStyleSheet(QString::fromUtf8("font-size:16pt;\n"
"color:#000;\n"
""));
        layoutWidget2 = new QWidget(tab_gestaoprodutos);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 10, 521, 481));
        verticalLayout_15 = new QVBoxLayout(layoutWidget2);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        verticalLayout_15->setContentsMargins(0, 0, 0, 0);
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        label_12 = new QLabel(layoutWidget2);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        verticalLayout_9->addWidget(label_12);

        txt_ge_codigoproduto = new QLineEdit(layoutWidget2);
        txt_ge_codigoproduto->setObjectName(QString::fromUtf8("txt_ge_codigoproduto"));

        verticalLayout_9->addWidget(txt_ge_codigoproduto);


        verticalLayout_15->addLayout(verticalLayout_9);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        label_11 = new QLabel(layoutWidget2);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        verticalLayout_10->addWidget(label_11);

        txt_ge_produto = new QLineEdit(layoutWidget2);
        txt_ge_produto->setObjectName(QString::fromUtf8("txt_ge_produto"));

        verticalLayout_10->addWidget(txt_ge_produto);


        verticalLayout_15->addLayout(verticalLayout_10);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        label_10 = new QLabel(layoutWidget2);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout_11->addWidget(label_10);

        txt_ge_qtde = new QLineEdit(layoutWidget2);
        txt_ge_qtde->setObjectName(QString::fromUtf8("txt_ge_qtde"));

        verticalLayout_11->addWidget(txt_ge_qtde);


        verticalLayout_15->addLayout(verticalLayout_11);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        label_9 = new QLabel(layoutWidget2);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout_12->addWidget(label_9);

        txt_ge_valorcompra = new QLineEdit(layoutWidget2);
        txt_ge_valorcompra->setObjectName(QString::fromUtf8("txt_ge_valorcompra"));

        verticalLayout_12->addWidget(txt_ge_valorcompra);


        verticalLayout_15->addLayout(verticalLayout_12);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        label_8 = new QLabel(layoutWidget2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout_13->addWidget(label_8);

        txt_ge_valorvenda = new QLineEdit(layoutWidget2);
        txt_ge_valorvenda->setObjectName(QString::fromUtf8("txt_ge_valorvenda"));

        verticalLayout_13->addWidget(txt_ge_valorvenda);


        verticalLayout_15->addLayout(verticalLayout_13);

        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        label_7 = new QLabel(layoutWidget2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_14->addWidget(label_7);

        txt_ge_fornecedor = new QLineEdit(layoutWidget2);
        txt_ge_fornecedor->setObjectName(QString::fromUtf8("txt_ge_fornecedor"));

        verticalLayout_14->addWidget(txt_ge_fornecedor);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_14->addItem(verticalSpacer_2);


        verticalLayout_15->addLayout(verticalLayout_14);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        btn_ge_gravar = new QPushButton(layoutWidget2);
        btn_ge_gravar->setObjectName(QString::fromUtf8("btn_ge_gravar"));

        horizontalLayout_3->addWidget(btn_ge_gravar);

        btn_ge_excluir = new QPushButton(layoutWidget2);
        btn_ge_excluir->setObjectName(QString::fromUtf8("btn_ge_excluir"));

        horizontalLayout_3->addWidget(btn_ge_excluir);


        verticalLayout_15->addLayout(horizontalLayout_3);

        txt_ge_filtrar = new QLineEdit(tab_gestaoprodutos);
        txt_ge_filtrar->setObjectName(QString::fromUtf8("txt_ge_filtrar"));
        txt_ge_filtrar->setGeometry(QRect(780, 70, 231, 28));
        tabWidget->addTab(tab_gestaoprodutos, QString());

        retranslateUi(fm_gestaoEstoque);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(fm_gestaoEstoque);
    } // setupUi

    void retranslateUi(QDialog *fm_gestaoEstoque)
    {
        fm_gestaoEstoque->setWindowTitle(QCoreApplication::translate("fm_gestaoEstoque", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("fm_gestaoEstoque", "C\303\263digo do Produto", nullptr));
        label_2->setText(QCoreApplication::translate("fm_gestaoEstoque", "Descri\303\247\303\243o do Produto", nullptr));
        label_5->setText(QCoreApplication::translate("fm_gestaoEstoque", "Quantidade do Estoque", nullptr));
        label_4->setText(QCoreApplication::translate("fm_gestaoEstoque", "Valor de Compra", nullptr));
        label_6->setText(QCoreApplication::translate("fm_gestaoEstoque", "Valor de Venda", nullptr));
        label_3->setText(QCoreApplication::translate("fm_gestaoEstoque", "Fornecedor", nullptr));
        btn_novoproduto->setText(QCoreApplication::translate("fm_gestaoEstoque", "Novo", nullptr));
        btn_gravarnovoproduto->setText(QCoreApplication::translate("fm_gestaoEstoque", "Salvar", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_novoproduto), QCoreApplication::translate("fm_gestaoEstoque", "Novo Produto", nullptr));
        groupBox->setTitle(QCoreApplication::translate("fm_gestaoEstoque", "Filtrar por:", nullptr));
        re_ge_codigo->setText(QCoreApplication::translate("fm_gestaoEstoque", "C\303\263digo do Produto", nullptr));
        re_ge_produto->setText(QCoreApplication::translate("fm_gestaoEstoque", "Descri\303\247\303\243o do Produto", nullptr));
        btn_ge_filtrar->setText(QCoreApplication::translate("fm_gestaoEstoque", "Pesquisar", nullptr));
        label_13->setText(QCoreApplication::translate("fm_gestaoEstoque", "Filtrar", nullptr));
        label_14->setText(QCoreApplication::translate("fm_gestaoEstoque", "Filtrar", nullptr));
        label_12->setText(QCoreApplication::translate("fm_gestaoEstoque", "C\303\263digo do Produto", nullptr));
        label_11->setText(QCoreApplication::translate("fm_gestaoEstoque", "Produto", nullptr));
        label_10->setText(QCoreApplication::translate("fm_gestaoEstoque", "Quantidade", nullptr));
        label_9->setText(QCoreApplication::translate("fm_gestaoEstoque", "Valor de Compra", nullptr));
        label_8->setText(QCoreApplication::translate("fm_gestaoEstoque", "Valor de Venda", nullptr));
        label_7->setText(QCoreApplication::translate("fm_gestaoEstoque", "Fornecedor", nullptr));
        btn_ge_gravar->setText(QCoreApplication::translate("fm_gestaoEstoque", "Salvar", nullptr));
        btn_ge_excluir->setText(QCoreApplication::translate("fm_gestaoEstoque", "Excluir", nullptr));
        txt_ge_filtrar->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_gestaoprodutos), QCoreApplication::translate("fm_gestaoEstoque", "Gest\303\243o de Produtos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fm_gestaoEstoque: public Ui_fm_gestaoEstoque {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FM_GESTAOESTOQUE_H
