/********************************************************************************
** Form generated from reading UI file 'Chat.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHAT_H
#define UI_CHAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChatClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *IP_edit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *Port_edit;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *Bt_connect;
    QPlainTextEdit *Text_show;
    QPlainTextEdit *Text_input;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *Bt_send;
    QSpacerItem *horizontalSpacer_4;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ChatClass)
    {
        if (ChatClass->objectName().isEmpty())
            ChatClass->setObjectName(QStringLiteral("ChatClass"));
        ChatClass->resize(600, 400);
        centralWidget = new QWidget(ChatClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(108, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        IP_edit = new QLineEdit(centralWidget);
        IP_edit->setObjectName(QStringLiteral("IP_edit"));

        horizontalLayout->addWidget(IP_edit);


        horizontalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        Port_edit = new QLineEdit(centralWidget);
        Port_edit->setObjectName(QStringLiteral("Port_edit"));

        horizontalLayout_2->addWidget(Port_edit);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        horizontalSpacer_2 = new QSpacerItem(108, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        horizontalLayout_4->addLayout(horizontalLayout_3);

        Bt_connect = new QPushButton(centralWidget);
        Bt_connect->setObjectName(QStringLiteral("Bt_connect"));

        horizontalLayout_4->addWidget(Bt_connect);


        verticalLayout->addLayout(horizontalLayout_4);

        Text_show = new QPlainTextEdit(centralWidget);
        Text_show->setObjectName(QStringLiteral("Text_show"));

        verticalLayout->addWidget(Text_show);

        Text_input = new QPlainTextEdit(centralWidget);
        Text_input->setObjectName(QStringLiteral("Text_input"));

        verticalLayout->addWidget(Text_input);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_3 = new QSpacerItem(238, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        Bt_send = new QPushButton(centralWidget);
        Bt_send->setObjectName(QStringLiteral("Bt_send"));

        horizontalLayout_5->addWidget(Bt_send);

        horizontalSpacer_4 = new QSpacerItem(248, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_5);


        verticalLayout_2->addLayout(verticalLayout);

        ChatClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ChatClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 18));
        ChatClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ChatClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        ChatClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ChatClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ChatClass->setStatusBar(statusBar);

        retranslateUi(ChatClass);

        QMetaObject::connectSlotsByName(ChatClass);
    } // setupUi

    void retranslateUi(QMainWindow *ChatClass)
    {
        ChatClass->setWindowTitle(QApplication::translate("ChatClass", "Chat", nullptr));
        label->setText(QApplication::translate("ChatClass", "IP\345\234\260\345\235\200", nullptr));
        label_2->setText(QApplication::translate("ChatClass", "\347\253\257\345\217\243\345\217\267\357\274\232", nullptr));
        Bt_connect->setText(QApplication::translate("ChatClass", "\350\277\236\346\216\245", nullptr));
        Bt_send->setText(QApplication::translate("ChatClass", "\345\217\221\351\200\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChatClass: public Ui_ChatClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHAT_H
