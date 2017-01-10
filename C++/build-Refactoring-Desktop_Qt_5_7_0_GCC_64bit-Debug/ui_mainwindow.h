/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *leditSourseVar;
    QLabel *label_2;
    QLineEdit *leditResultVar;
    QPushButton *buttonRename;
    QPushButton *formatCodeButton;
    QPlainTextEdit *plainTxtSource;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pbExplicitProc;
    QLineEdit *lnName;
    QSpacerItem *horizontalSpacer;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        leditSourseVar = new QLineEdit(centralwidget);
        leditSourseVar->setObjectName(QStringLiteral("leditSourseVar"));

        horizontalLayout->addWidget(leditSourseVar);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        leditResultVar = new QLineEdit(centralwidget);
        leditResultVar->setObjectName(QStringLiteral("leditResultVar"));

        horizontalLayout->addWidget(leditResultVar);

        buttonRename = new QPushButton(centralwidget);
        buttonRename->setObjectName(QStringLiteral("buttonRename"));

        horizontalLayout->addWidget(buttonRename);

        formatCodeButton = new QPushButton(centralwidget);
        formatCodeButton->setObjectName(QStringLiteral("formatCodeButton"));

        horizontalLayout->addWidget(formatCodeButton);


        verticalLayout_2->addLayout(horizontalLayout);

        plainTxtSource = new QPlainTextEdit(centralwidget);
        plainTxtSource->setObjectName(QStringLiteral("plainTxtSource"));

        verticalLayout_2->addWidget(plainTxtSource);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pbExplicitProc = new QPushButton(centralwidget);
        pbExplicitProc->setObjectName(QStringLiteral("pbExplicitProc"));

        horizontalLayout_2->addWidget(pbExplicitProc);

        lnName = new QLineEdit(centralwidget);
        lnName->setObjectName(QStringLiteral("lnName"));

        horizontalLayout_2->addWidget(lnName);

        horizontalSpacer = new QSpacerItem(550, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 19));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label->setText(QApplication::translate("MainWindow", "Name to change", 0));
        label_2->setText(QApplication::translate("MainWindow", "new name", 0));
        buttonRename->setText(QApplication::translate("MainWindow", "Rename", 0));
        formatCodeButton->setText(QApplication::translate("MainWindow", "CodeFormat", 0));
        pbExplicitProc->setText(QApplication::translate("MainWindow", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
