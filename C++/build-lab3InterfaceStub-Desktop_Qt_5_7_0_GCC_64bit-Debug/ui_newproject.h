/********************************************************************************
** Form generated from reading UI file 'newproject.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWPROJECT_H
#define UI_NEWPROJECT_H

#include <CustomListWidget.h>
#include <CustomStackedWidget.h>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewProjectForm
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    CustomListWidget *listWidget;
    CustomStackedWidget *stackedWidget;
    QWidget *page_5;
    QTextBrowser *textBrowser;
    QWidget *page_2;
    QLabel *label;
    QLineEdit *projectNameLine;
    QPushButton *pushBrowsePathButton;
    QLabel *label_2;
    QLineEdit *projectPathLine;
    QWidget *page;
    QLabel *label_3;
    QComboBox *comboBox;
    QWidget *page_3;
    QLabel *label_4;
    QComboBox *comboBox_2;
    QLineEdit *lineEdit;
    QPushButton *BrowseCodeButton;
    QLabel *label_5;
    QWidget *page_4;
    QGridLayout *gridLayout;
    QLabel *label_6;
    QLabel *labelTemplate;
    QLabel *label_10;
    QLabel *labelFileName;
    QSpacerItem *verticalSpacer;
    QLabel *labelFilePath;
    QLabel *label_7;
    QLabel *labelSourceCode;
    QLabel *label_9;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *CancelButton;
    QPushButton *PrevPageButton;
    QPushButton *NextPageButton;

    void setupUi(QWidget *NewProjectForm)
    {
        if (NewProjectForm->objectName().isEmpty())
            NewProjectForm->setObjectName(QStringLiteral("NewProjectForm"));
        NewProjectForm->resize(758, 434);
        NewProjectForm->setStyleSheet(QLatin1String("QWidget\n"
"{\n"
"background-color: #84f1ba;\n"
"color:  #394040;\n"
"}\n"
"QLineEdit\n"
"{\n"
"background-color: #ffffff;\n"
"}"));
        verticalLayout = new QVBoxLayout(NewProjectForm);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, -1, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, -1, -1, 0);
        listWidget = new CustomListWidget(NewProjectForm);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy);
        listWidget->setMinimumSize(QSize(150, 384));
        listWidget->setBaseSize(QSize(80, 0));
        listWidget->setLayoutDirection(Qt::LeftToRight);
        listWidget->setStyleSheet(QLatin1String("QListWidget\n"
"{\n"
"background-color: #dcf7f7;\n"
"color:#394040;\n"
"}"));
        listWidget->setFrameShape(QFrame::StyledPanel);
        listWidget->setFrameShadow(QFrame::Plain);
        listWidget->setLineWidth(1);
        listWidget->setMovement(QListView::Free);
        listWidget->setFlow(QListView::TopToBottom);
        listWidget->setLayoutMode(QListView::SinglePass);
        listWidget->setSpacing(2);

        horizontalLayout_2->addWidget(listWidget);

        stackedWidget = new CustomStackedWidget(NewProjectForm);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy1);
        stackedWidget->setMinimumSize(QSize(600, 384));
        stackedWidget->setStyleSheet(QLatin1String("QWidget\n"
"{\n"
"background-color: #84f1ba;\n"
"color:  #394040;\n"
"}"));
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        textBrowser = new QTextBrowser(page_5);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(0, 0, 591, 241));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        textBrowser->setFont(font);
        textBrowser->setStyleSheet(QLatin1String("QTextBrowser\n"
"{\n"
"	border: 1px;\n"
"}\n"
""));
        stackedWidget->addWidget(page_5);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        label = new QLabel(page_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 40, 41, 16));
        projectNameLine = new QLineEdit(page_2);
        projectNameLine->setObjectName(QStringLiteral("projectNameLine"));
        projectNameLine->setGeometry(QRect(60, 40, 471, 22));
        projectNameLine->setStyleSheet(QStringLiteral("background-color: #ffffff;"));
        pushBrowsePathButton = new QPushButton(page_2);
        pushBrowsePathButton->setObjectName(QStringLiteral("pushBrowsePathButton"));
        pushBrowsePathButton->setGeometry(QRect(450, 80, 81, 21));
        label_2 = new QLabel(page_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 80, 41, 20));
        projectPathLine = new QLineEdit(page_2);
        projectPathLine->setObjectName(QStringLiteral("projectPathLine"));
        projectPathLine->setGeometry(QRect(60, 80, 381, 22));
        projectPathLine->setStyleSheet(QStringLiteral("background-color: #ffffff;"));
        stackedWidget->addWidget(page_2);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        label_3 = new QLabel(page);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 10, 121, 31));
        comboBox = new QComboBox(page);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(10, 50, 191, 22));
        comboBox->setStyleSheet(QStringLiteral("background-color: #ffffff;"));
        stackedWidget->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        label_4 = new QLabel(page_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 80, 121, 41));
        comboBox_2 = new QComboBox(page_3);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(10, 120, 111, 21));
        comboBox_2->setStyleSheet(QStringLiteral("background-color: #ffffff;"));
        lineEdit = new QLineEdit(page_3);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(50, 50, 441, 22));
        lineEdit->setStyleSheet(QStringLiteral("background-color: #ffffff;"));
        BrowseCodeButton = new QPushButton(page_3);
        BrowseCodeButton->setObjectName(QStringLiteral("BrowseCodeButton"));
        BrowseCodeButton->setGeometry(QRect(500, 50, 81, 22));
        label_5 = new QLabel(page_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 50, 51, 21));
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        gridLayout = new QGridLayout(page_4);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_6 = new QLabel(page_4);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 0, 0, 1, 2);

        labelTemplate = new QLabel(page_4);
        labelTemplate->setObjectName(QStringLiteral("labelTemplate"));

        gridLayout->addWidget(labelTemplate, 3, 1, 1, 1);

        label_10 = new QLabel(page_4);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout->addWidget(label_10, 4, 0, 1, 1);

        labelFileName = new QLabel(page_4);
        labelFileName->setObjectName(QStringLiteral("labelFileName"));

        gridLayout->addWidget(labelFileName, 2, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 200, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout->addItem(verticalSpacer, 5, 1, 1, 1);

        labelFilePath = new QLabel(page_4);
        labelFilePath->setObjectName(QStringLiteral("labelFilePath"));

        gridLayout->addWidget(labelFilePath, 1, 1, 1, 1);

        label_7 = new QLabel(page_4);
        label_7->setObjectName(QStringLiteral("label_7"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(label_7, 1, 0, 1, 1);

        labelSourceCode = new QLabel(page_4);
        labelSourceCode->setObjectName(QStringLiteral("labelSourceCode"));

        gridLayout->addWidget(labelSourceCode, 4, 1, 1, 1);

        label_9 = new QLabel(page_4);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout->addWidget(label_9, 3, 0, 1, 1);

        label_8 = new QLabel(page_4);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 2, 0, 1, 1);

        stackedWidget->addWidget(page_4);

        horizontalLayout_2->addWidget(stackedWidget);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, -1, 6, 6);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        CancelButton = new QPushButton(NewProjectForm);
        CancelButton->setObjectName(QStringLiteral("CancelButton"));

        horizontalLayout_3->addWidget(CancelButton);

        PrevPageButton = new QPushButton(NewProjectForm);
        PrevPageButton->setObjectName(QStringLiteral("PrevPageButton"));

        horizontalLayout_3->addWidget(PrevPageButton);

        NextPageButton = new QPushButton(NewProjectForm);
        NextPageButton->setObjectName(QStringLiteral("NextPageButton"));

        horizontalLayout_3->addWidget(NextPageButton);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(NewProjectForm);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(NewProjectForm);
    } // setupUi

    void retranslateUi(QWidget *NewProjectForm)
    {
        NewProjectForm->setWindowTitle(QApplication::translate("NewProjectForm", "Form", 0));
        textBrowser->setHtml(QApplication::translate("NewProjectForm", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:12pt; font-weight:600; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">Master of new project creation</span><span style=\" font-weight:400;\"><br />Follow this master you could create a new project with different diagrams.</span></p></body></html>", 0));
        label->setText(QApplication::translate("NewProjectForm", "Name:", 0));
        pushBrowsePathButton->setText(QApplication::translate("NewProjectForm", "Browse", 0));
        label_2->setText(QApplication::translate("NewProjectForm", "Path:", 0));
        label_3->setText(QApplication::translate("NewProjectForm", "Choose template", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("NewProjectForm", "None", 0)
         << QApplication::translate("NewProjectForm", "Activity diagram", 0)
         << QApplication::translate("NewProjectForm", "Class diagram", 0)
         << QApplication::translate("NewProjectForm", "Communication diagram", 0)
         << QApplication::translate("NewProjectForm", "Deployment diagram", 0)
         << QApplication::translate("NewProjectForm", "Precendence diagram", 0)
         << QApplication::translate("NewProjectForm", "Sequence diagram", 0)
        );
        label_4->setText(QApplication::translate("NewProjectForm", "Choose language", 0));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("NewProjectForm", "C++", 0)
         << QApplication::translate("NewProjectForm", "Java", 0)
         << QApplication::translate("NewProjectForm", "C#", 0)
        );
        BrowseCodeButton->setText(QApplication::translate("NewProjectForm", "Browse", 0));
        label_5->setText(QApplication::translate("NewProjectForm", "Path:", 0));
        label_6->setText(QApplication::translate("NewProjectForm", "File to be added in", 0));
        labelTemplate->setText(QString());
        label_10->setText(QApplication::translate("NewProjectForm", "Source code path:", 0));
        labelFileName->setText(QString());
        labelFilePath->setText(QString());
        label_7->setText(QApplication::translate("NewProjectForm", "Path:", 0));
        labelSourceCode->setText(QString());
        label_9->setText(QApplication::translate("NewProjectForm", "Template:", 0));
        label_8->setText(QApplication::translate("NewProjectForm", "Name:", 0));
        CancelButton->setText(QApplication::translate("NewProjectForm", "Cancel", 0));
        PrevPageButton->setText(QApplication::translate("NewProjectForm", "Prev", 0));
        NextPageButton->setText(QApplication::translate("NewProjectForm", "Next", 0));
    } // retranslateUi

};

namespace Ui {
    class NewProjectForm: public Ui_NewProjectForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWPROJECT_H
