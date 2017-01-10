/********************************************************************************
** Form generated from reading UI file 'createnewdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATENEWDIALOG_H
#define UI_CREATENEWDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QDialogButtonBox *buttonBox;
    QCheckBox *checkBox;
    QLineEdit *lineEdit;
    QPushButton *NewProjectButton;
    QComboBox *comboBox;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(455, 289);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Dialog->sizePolicy().hasHeightForWidth());
        Dialog->setSizePolicy(sizePolicy);
        Dialog->setMinimumSize(QSize(455, 289));
        Dialog->setBaseSize(QSize(455, 289));
        Dialog->setStyleSheet(QLatin1String("\n"
"QDialog\n"
"{\n"
"background-color:#84f1ba;\n"
"color:#394040;\n"
"}\n"
"QLineEdit\n"
"{\n"
"background-color: #ffffff;\n"
"}\n"
"QComboBox\n"
"{\n"
"background-color: #ffffff;\n"
"}\n"
"\n"
"QComboBox\n"
"{\n"
"background-color: #ffffff;\n"
"selection-color: #7ee297;\n"
"}"));
        buttonBox = new QDialogButtonBox(Dialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(100, 250, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        checkBox = new QCheckBox(Dialog);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(10, 80, 171, 20));
        lineEdit = new QLineEdit(Dialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(10, 30, 113, 22));
        NewProjectButton = new QPushButton(Dialog);
        NewProjectButton->setObjectName(QStringLiteral("NewProjectButton"));
        NewProjectButton->setGeometry(QRect(140, 30, 171, 22));
        comboBox = new QComboBox(Dialog);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setEnabled(false);
        comboBox->setGeometry(QRect(10, 110, 201, 21));

        retranslateUi(Dialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0));
        checkBox->setText(QApplication::translate("Dialog", "Create from template", 0));
        NewProjectButton->setText(QApplication::translate("Dialog", "New Project", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATENEWDIALOG_H
