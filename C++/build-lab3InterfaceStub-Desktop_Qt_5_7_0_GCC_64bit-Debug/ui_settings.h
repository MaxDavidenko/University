/********************************************************************************
** Form generated from reading UI file 'settings.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_3;
    QListWidget *listWidget;
    QStackedWidget *stackedWidget;
    QWidget *preferencesPage;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *showSpashPanelCheck;
    QCheckBox *ReloadLastProjectCheck;
    QCheckBox *StripCheck;
    QWidget *environmentPage;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_6;
    QLabel *label;
    QComboBox *outputFormatComboBox;
    QLabel *label_2;
    QLineEdit *saveFileDirectoryLine;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QWidget *userPage;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_4;
    QLineEdit *userNameLine;
    QLabel *label_3;
    QLineEdit *emailLine;
    QLabel *label_5;
    QLineEdit *userHomePageLine;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QWidget *AppearencePage;
    QVBoxLayout *verticalLayout_12;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_7;
    QComboBox *languageComboBox;
    QLabel *label_6;
    QComboBox *themeComboBox;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout_7;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QStringLiteral("Form"));
        Form->setWindowModality(Qt::WindowModal);
        Form->resize(604, 317);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Form->sizePolicy().hasHeightForWidth());
        Form->setSizePolicy(sizePolicy);
        Form->setMinimumSize(QSize(604, 317));
        Form->setMaximumSize(QSize(604, 317));
        Form->setBaseSize(QSize(604, 317));
        Form->setContextMenuPolicy(Qt::ActionsContextMenu);
        Form->setStyleSheet(QLatin1String("QCheckBox::indicator::unchecked\n"
"{\n"
"background-color: #ffffff;\n"
"}\n"
"QCheckBox::indicator::checked\n"
"{\n"
"background-color: #ffffff;\n"
"}"));
        horizontalLayout = new QHBoxLayout(Form);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, -1, 0, -1);
        listWidget = new QListWidget(Form);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy1);
        listWidget->setMinimumSize(QSize(100, 0));
        QPalette palette;
        QBrush brush(QColor(57, 64, 64, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(220, 247, 247, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        listWidget->setPalette(palette);
        listWidget->setAutoFillBackground(false);
        listWidget->setStyleSheet(QLatin1String("QListWidget\n"
"{\n"
"background-color:#dcf7f7;\n"
"color: #394040;\n"
"}\n"
"QListWidget::focus\n"
"{\n"
"background-color:#afedbf;\n"
"color: #394040;\n"
"}\n"
""));
        listWidget->setSpacing(6);

        horizontalLayout_3->addWidget(listWidget);

        stackedWidget = new QStackedWidget(Form);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy2);
        stackedWidget->setMinimumSize(QSize(500, 315));
        stackedWidget->setBaseSize(QSize(500, 315));
        stackedWidget->setMouseTracking(false);
        stackedWidget->setStyleSheet(QLatin1String("QWidget\n"
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
        stackedWidget->setFrameShape(QFrame::StyledPanel);
        stackedWidget->setFrameShadow(QFrame::Plain);
        preferencesPage = new QWidget();
        preferencesPage->setObjectName(QStringLiteral("preferencesPage"));
        preferencesPage->setEnabled(true);
        verticalLayout_4 = new QVBoxLayout(preferencesPage);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setSizeConstraint(QLayout::SetNoConstraint);
        verticalLayout_5->setContentsMargins(-1, 6, -1, 250);
        showSpashPanelCheck = new QCheckBox(preferencesPage);
        showSpashPanelCheck->setObjectName(QStringLiteral("showSpashPanelCheck"));

        verticalLayout_5->addWidget(showSpashPanelCheck);

        ReloadLastProjectCheck = new QCheckBox(preferencesPage);
        ReloadLastProjectCheck->setObjectName(QStringLiteral("ReloadLastProjectCheck"));

        verticalLayout_5->addWidget(ReloadLastProjectCheck);

        StripCheck = new QCheckBox(preferencesPage);
        StripCheck->setObjectName(QStringLiteral("StripCheck"));

        verticalLayout_5->addWidget(StripCheck);


        horizontalLayout_4->addLayout(verticalLayout_5);


        verticalLayout_4->addLayout(horizontalLayout_4);

        stackedWidget->addWidget(preferencesPage);
        environmentPage = new QWidget();
        environmentPage->setObjectName(QStringLiteral("environmentPage"));
        environmentPage->setEnabled(true);
        verticalLayout_3 = new QVBoxLayout(environmentPage);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(-1, 6, -1, -1);
        label = new QLabel(environmentPage);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_6->addWidget(label);

        outputFormatComboBox = new QComboBox(environmentPage);
        outputFormatComboBox->setObjectName(QStringLiteral("outputFormatComboBox"));

        verticalLayout_6->addWidget(outputFormatComboBox);

        label_2 = new QLabel(environmentPage);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_6->addWidget(label_2);

        saveFileDirectoryLine = new QLineEdit(environmentPage);
        saveFileDirectoryLine->setObjectName(QStringLiteral("saveFileDirectoryLine"));

        verticalLayout_6->addWidget(saveFileDirectoryLine);


        horizontalLayout_6->addLayout(verticalLayout_6);

        horizontalSpacer = new QSpacerItem(250, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);


        verticalLayout_3->addLayout(horizontalLayout_6);

        verticalSpacer = new QSpacerItem(40, 238, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout_3->addItem(verticalSpacer);

        stackedWidget->addWidget(environmentPage);
        userPage = new QWidget();
        userPage->setObjectName(QStringLiteral("userPage"));
        userPage->setEnabled(true);
        verticalLayout_10 = new QVBoxLayout(userPage);
        verticalLayout_10->setSpacing(0);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(-1, 6, -1, -1);
        label_4 = new QLabel(userPage);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_9->addWidget(label_4);

        userNameLine = new QLineEdit(userPage);
        userNameLine->setObjectName(QStringLiteral("userNameLine"));

        verticalLayout_9->addWidget(userNameLine);

        label_3 = new QLabel(userPage);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_9->addWidget(label_3);

        emailLine = new QLineEdit(userPage);
        emailLine->setObjectName(QStringLiteral("emailLine"));

        verticalLayout_9->addWidget(emailLine);

        label_5 = new QLabel(userPage);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_9->addWidget(label_5);

        userHomePageLine = new QLineEdit(userPage);
        userHomePageLine->setObjectName(QStringLiteral("userHomePageLine"));

        verticalLayout_9->addWidget(userHomePageLine);


        horizontalLayout_2->addLayout(verticalLayout_9);

        horizontalSpacer_2 = new QSpacerItem(250, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_10->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 180, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout_10->addItem(verticalSpacer_2);

        stackedWidget->addWidget(userPage);
        AppearencePage = new QWidget();
        AppearencePage->setObjectName(QStringLiteral("AppearencePage"));
        AppearencePage->setEnabled(true);
        verticalLayout_12 = new QVBoxLayout(AppearencePage);
        verticalLayout_12->setSpacing(0);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(-1, 6, -1, 0);
        label_7 = new QLabel(AppearencePage);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_11->addWidget(label_7);

        languageComboBox = new QComboBox(AppearencePage);
        languageComboBox->setObjectName(QStringLiteral("languageComboBox"));

        verticalLayout_11->addWidget(languageComboBox);

        label_6 = new QLabel(AppearencePage);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_11->addWidget(label_6);

        themeComboBox = new QComboBox(AppearencePage);
        themeComboBox->setObjectName(QStringLiteral("themeComboBox"));

        verticalLayout_11->addWidget(themeComboBox);


        horizontalLayout_7->addLayout(verticalLayout_11);

        horizontalSpacer_3 = new QSpacerItem(250, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_3);


        verticalLayout_12->addLayout(horizontalLayout_7);

        verticalSpacer_3 = new QSpacerItem(20, 237, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout_12->addItem(verticalSpacer_3);

        stackedWidget->addWidget(AppearencePage);

        horizontalLayout_3->addWidget(stackedWidget);


        horizontalLayout->addLayout(horizontalLayout_3);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));

        horizontalLayout->addLayout(verticalLayout_7);


        retranslateUi(Form);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Settings", 0));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("Form", "Preferences", 0));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("Form", "Environment", 0));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("Form", "User", 0));
        QListWidgetItem *___qlistwidgetitem3 = listWidget->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("Form", "Appearance", 0));
        listWidget->setSortingEnabled(__sortingEnabled);

        showSpashPanelCheck->setText(QApplication::translate("Form", "Show splash panel", 0));
        ReloadLastProjectCheck->setText(QApplication::translate("Form", "Reload last project on startup", 0));
        StripCheck->setText(QApplication::translate("Form", "Strip(non standard) diagrams from XML file during import", 0));
        label->setText(QApplication::translate("Form", "Output file format", 0));
        outputFormatComboBox->clear();
        outputFormatComboBox->insertItems(0, QStringList()
         << QApplication::translate("Form", "GIF", 0)
         << QApplication::translate("Form", "JPEG", 0)
         << QApplication::translate("Form", "PNG", 0)
        );
        label_2->setText(QApplication::translate("Form", "Save file directory", 0));
        label_4->setText(QApplication::translate("Form", "User name", 0));
        label_3->setText(QApplication::translate("Form", "Email address", 0));
        label_5->setText(QApplication::translate("Form", "User home page", 0));
        label_7->setText(QApplication::translate("Form", "Language", 0));
        languageComboBox->clear();
        languageComboBox->insertItems(0, QStringList()
         << QApplication::translate("Form", "English", 0)
        );
        label_6->setText(QApplication::translate("Form", "Theme", 0));
        themeComboBox->clear();
        themeComboBox->insertItems(0, QStringList()
         << QApplication::translate("Form", "Windows", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
