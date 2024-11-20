/********************************************************************************
** Form generated from reading UI file 'fm_gestaocolaboradores.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FM_GESTAOCOLABORADORES_H
#define UI_FM_GESTAOCOLABORADORES_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
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

class Ui_fm_gestaoUsuario
{
public:
    QTabWidget *tabWidget;
    QWidget *tab_novousuario;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *txt_novonome;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QLineEdit *txt_novotelefone;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_5;
    QComboBox *cb_novoacesso;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLineEdit *txt_novousuario;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QLineEdit *txt_novasenha;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btn_novo_novousuario;
    QPushButton *btn_novousuario_gravar;
    QPushButton *pushButton_2;
    QWidget *tab_gestaousuarios;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_13;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *txt_gu_filtrar;
    QPushButton *btn_gu_filtrar;
    QGroupBox *groupBox;
    QRadioButton *rb_gu_id;
    QRadioButton *rb_gu_nome;
    QTableWidget *tw_gu_listausuario;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_7;
    QLineEdit *txt_gu_nome;
    QLabel *label_8;
    QLineEdit *txt_gu_username;
    QLabel *label_9;
    QLineEdit *txt_gu_senha;
    QLabel *label_10;
    QLineEdit *txt_gu_telefone;
    QLabel *label_11;
    QComboBox *cb_gu_acesso;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *btn_gu_vervendas;
    QPushButton *btn_gu_excluir;

    void setupUi(QDialog *fm_gestaoUsuario)
    {
        if (fm_gestaoUsuario->objectName().isEmpty())
            fm_gestaoUsuario->setObjectName(QString::fromUtf8("fm_gestaoUsuario"));
        fm_gestaoUsuario->resize(698, 408);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imagens/img/images.png"), QSize(), QIcon::Normal, QIcon::Off);
        fm_gestaoUsuario->setWindowIcon(icon);
        tabWidget = new QTabWidget(fm_gestaoUsuario);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 651, 411));
        tab_novousuario = new QWidget();
        tab_novousuario->setObjectName(QString::fromUtf8("tab_novousuario"));
        layoutWidget = new QWidget(tab_novousuario);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 631, 179));
        verticalLayout_6 = new QVBoxLayout(layoutWidget);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        txt_novonome = new QLineEdit(layoutWidget);
        txt_novonome->setObjectName(QString::fromUtf8("txt_novonome"));

        verticalLayout->addWidget(txt_novonome);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_4->addWidget(label_4);

        txt_novotelefone = new QLineEdit(layoutWidget);
        txt_novotelefone->setObjectName(QString::fromUtf8("txt_novotelefone"));

        verticalLayout_4->addWidget(txt_novotelefone);


        horizontalLayout->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_5->addWidget(label_5);

        cb_novoacesso = new QComboBox(layoutWidget);
        cb_novoacesso->setObjectName(QString::fromUtf8("cb_novoacesso"));

        verticalLayout_5->addWidget(cb_novoacesso);


        horizontalLayout->addLayout(verticalLayout_5);


        verticalLayout_6->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        txt_novousuario = new QLineEdit(layoutWidget);
        txt_novousuario->setObjectName(QString::fromUtf8("txt_novousuario"));

        verticalLayout_2->addWidget(txt_novousuario);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_3->addWidget(label_3);

        txt_novasenha = new QLineEdit(layoutWidget);
        txt_novasenha->setObjectName(QString::fromUtf8("txt_novasenha"));

        verticalLayout_3->addWidget(txt_novasenha);


        horizontalLayout_2->addLayout(verticalLayout_3);


        verticalLayout_6->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        btn_novo_novousuario = new QPushButton(layoutWidget);
        btn_novo_novousuario->setObjectName(QString::fromUtf8("btn_novo_novousuario"));
        btn_novo_novousuario->setAutoDefault(false);

        horizontalLayout_3->addWidget(btn_novo_novousuario);

        btn_novousuario_gravar = new QPushButton(layoutWidget);
        btn_novousuario_gravar->setObjectName(QString::fromUtf8("btn_novousuario_gravar"));
        btn_novousuario_gravar->setAutoDefault(false);

        horizontalLayout_3->addWidget(btn_novousuario_gravar);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setAutoDefault(false);

        horizontalLayout_3->addWidget(pushButton_2);


        verticalLayout_6->addLayout(horizontalLayout_3);

        tabWidget->addTab(tab_novousuario, QString());
        tab_gestaousuarios = new QWidget();
        tab_gestaousuarios->setObjectName(QString::fromUtf8("tab_gestaousuarios"));
        layoutWidget_3 = new QWidget(tab_gestaousuarios);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(390, 20, 251, 60));
        verticalLayout_9 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(layoutWidget_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        verticalLayout_9->addWidget(label_13);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        txt_gu_filtrar = new QLineEdit(layoutWidget_3);
        txt_gu_filtrar->setObjectName(QString::fromUtf8("txt_gu_filtrar"));

        horizontalLayout_5->addWidget(txt_gu_filtrar);

        btn_gu_filtrar = new QPushButton(layoutWidget_3);
        btn_gu_filtrar->setObjectName(QString::fromUtf8("btn_gu_filtrar"));

        horizontalLayout_5->addWidget(btn_gu_filtrar);


        verticalLayout_9->addLayout(horizontalLayout_5);

        groupBox = new QGroupBox(tab_gestaousuarios);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(260, 10, 120, 61));
        rb_gu_id = new QRadioButton(groupBox);
        rb_gu_id->setObjectName(QString::fromUtf8("rb_gu_id"));
        rb_gu_id->setGeometry(QRect(10, 20, 82, 17));
        rb_gu_id->setChecked(true);
        rb_gu_nome = new QRadioButton(groupBox);
        rb_gu_nome->setObjectName(QString::fromUtf8("rb_gu_nome"));
        rb_gu_nome->setGeometry(QRect(10, 40, 82, 17));
        tw_gu_listausuario = new QTableWidget(tab_gestaousuarios);
        tw_gu_listausuario->setObjectName(QString::fromUtf8("tw_gu_listausuario"));
        tw_gu_listausuario->setGeometry(QRect(260, 90, 381, 241));
        layoutWidget1 = new QWidget(tab_gestaousuarios);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 0, 241, 352));
        verticalLayout_7 = new QVBoxLayout(layoutWidget1);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        label_7 = new QLabel(layoutWidget1);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_8->addWidget(label_7);

        txt_gu_nome = new QLineEdit(layoutWidget1);
        txt_gu_nome->setObjectName(QString::fromUtf8("txt_gu_nome"));

        verticalLayout_8->addWidget(txt_gu_nome);

        label_8 = new QLabel(layoutWidget1);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout_8->addWidget(label_8);

        txt_gu_username = new QLineEdit(layoutWidget1);
        txt_gu_username->setObjectName(QString::fromUtf8("txt_gu_username"));

        verticalLayout_8->addWidget(txt_gu_username);

        label_9 = new QLabel(layoutWidget1);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout_8->addWidget(label_9);

        txt_gu_senha = new QLineEdit(layoutWidget1);
        txt_gu_senha->setObjectName(QString::fromUtf8("txt_gu_senha"));

        verticalLayout_8->addWidget(txt_gu_senha);

        label_10 = new QLabel(layoutWidget1);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout_8->addWidget(label_10);

        txt_gu_telefone = new QLineEdit(layoutWidget1);
        txt_gu_telefone->setObjectName(QString::fromUtf8("txt_gu_telefone"));

        verticalLayout_8->addWidget(txt_gu_telefone);

        label_11 = new QLabel(layoutWidget1);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        verticalLayout_8->addWidget(label_11);

        cb_gu_acesso = new QComboBox(layoutWidget1);
        cb_gu_acesso->setObjectName(QString::fromUtf8("cb_gu_acesso"));

        verticalLayout_8->addWidget(cb_gu_acesso);


        verticalLayout_7->addLayout(verticalLayout_8);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        btn_gu_vervendas = new QPushButton(layoutWidget1);
        btn_gu_vervendas->setObjectName(QString::fromUtf8("btn_gu_vervendas"));

        horizontalLayout_4->addWidget(btn_gu_vervendas);

        btn_gu_excluir = new QPushButton(layoutWidget1);
        btn_gu_excluir->setObjectName(QString::fromUtf8("btn_gu_excluir"));

        horizontalLayout_4->addWidget(btn_gu_excluir);


        verticalLayout_7->addLayout(horizontalLayout_4);

        tabWidget->addTab(tab_gestaousuarios, QString());

        retranslateUi(fm_gestaoUsuario);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(fm_gestaoUsuario);
    } // setupUi

    void retranslateUi(QDialog *fm_gestaoUsuario)
    {
        fm_gestaoUsuario->setWindowTitle(QCoreApplication::translate("fm_gestaoUsuario", "Gest\303\243o de Usuarios", nullptr));
        label->setText(QCoreApplication::translate("fm_gestaoUsuario", "Nome", nullptr));
        label_4->setText(QCoreApplication::translate("fm_gestaoUsuario", "Telefone", nullptr));
        label_5->setText(QCoreApplication::translate("fm_gestaoUsuario", "Tipo do Acesso", nullptr));
        label_2->setText(QCoreApplication::translate("fm_gestaoUsuario", "Username", nullptr));
        label_3->setText(QCoreApplication::translate("fm_gestaoUsuario", "Senha", nullptr));
        btn_novo_novousuario->setText(QCoreApplication::translate("fm_gestaoUsuario", "Novo", nullptr));
        btn_novousuario_gravar->setText(QCoreApplication::translate("fm_gestaoUsuario", "Gravar", nullptr));
        pushButton_2->setText(QCoreApplication::translate("fm_gestaoUsuario", "Cancelar", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_novousuario), QCoreApplication::translate("fm_gestaoUsuario", "Novo usuario", nullptr));
        label_13->setText(QCoreApplication::translate("fm_gestaoUsuario", "Filtar", nullptr));
        btn_gu_filtrar->setText(QCoreApplication::translate("fm_gestaoUsuario", "ok", nullptr));
        groupBox->setTitle(QCoreApplication::translate("fm_gestaoUsuario", "Filtrar por:", nullptr));
        rb_gu_id->setText(QCoreApplication::translate("fm_gestaoUsuario", "ID", nullptr));
        rb_gu_nome->setText(QCoreApplication::translate("fm_gestaoUsuario", "Nome", nullptr));
        label_7->setText(QCoreApplication::translate("fm_gestaoUsuario", "Nome", nullptr));
        label_8->setText(QCoreApplication::translate("fm_gestaoUsuario", "Username", nullptr));
        label_9->setText(QCoreApplication::translate("fm_gestaoUsuario", "Senha", nullptr));
        label_10->setText(QCoreApplication::translate("fm_gestaoUsuario", "Telefone", nullptr));
        label_11->setText(QCoreApplication::translate("fm_gestaoUsuario", "Acesso", nullptr));
        btn_gu_vervendas->setText(QCoreApplication::translate("fm_gestaoUsuario", "Ver vendas", nullptr));
        btn_gu_excluir->setText(QCoreApplication::translate("fm_gestaoUsuario", "Excluir", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_gestaousuarios), QCoreApplication::translate("fm_gestaoUsuario", "Gest\303\243o de usuarios", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fm_gestaoUsuario: public Ui_fm_gestaoUsuario {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FM_GESTAOCOLABORADORES_H
