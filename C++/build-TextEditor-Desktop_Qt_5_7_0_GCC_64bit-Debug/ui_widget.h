/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *leditSourseVar;
    QLabel *label;
    QLineEdit *leditResultVar;
    QPushButton *buttonRename;
    QPushButton *formatCodeButton;
    QVBoxLayout *verticalLayout;
    QTextEdit *teditSourceCode;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(610, 441);
        verticalLayout_2 = new QVBoxLayout(Widget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        leditSourseVar = new QLineEdit(Widget);
        leditSourseVar->setObjectName(QStringLiteral("leditSourseVar"));

        horizontalLayout->addWidget(leditSourseVar);

        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        leditResultVar = new QLineEdit(Widget);
        leditResultVar->setObjectName(QStringLiteral("leditResultVar"));

        horizontalLayout->addWidget(leditResultVar);

        buttonRename = new QPushButton(Widget);
        buttonRename->setObjectName(QStringLiteral("buttonRename"));

        horizontalLayout->addWidget(buttonRename);

        formatCodeButton = new QPushButton(Widget);
        formatCodeButton->setObjectName(QStringLiteral("formatCodeButton"));

        horizontalLayout->addWidget(formatCodeButton);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        teditSourceCode = new QTextEdit(Widget);
        teditSourceCode->setObjectName(QStringLiteral("teditSourceCode"));

        verticalLayout->addWidget(teditSourceCode);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        label_2->setText(QApplication::translate("Widget", "Name to changel", 0));
        label->setText(QApplication::translate("Widget", "new naml", 0));
        buttonRename->setText(QApplication::translate("Widget", "Rename", 0));
        formatCodeButton->setText(QApplication::translate("Widget", "CodeFormat", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
