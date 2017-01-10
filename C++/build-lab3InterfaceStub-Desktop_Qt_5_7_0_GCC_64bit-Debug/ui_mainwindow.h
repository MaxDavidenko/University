/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <CustomButton.h>
#include <CustomWidget.h>
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
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew_Project;
    QAction *actionChoose_the_template;
    QAction *actionAlign_Left;
    QAction *actionAlign_Right;
    QAction *actionAlign_Center;
    QAction *actionAlign_Top;
    QAction *actionAlign_Middle;
    QAction *actionAlign_bottom;
    QAction *actionSend_Backward;
    QAction *actionSend_Backward_2;
    QAction *actionBring_to_Front;
    QAction *action4_Bring_to_Back;
    QAction *actionOrizontal_space_equality;
    QAction *actionVertical_space_equality;
    QAction *actionWidth_equality;
    QAction *actionHeight_equality;
    QAction *actionSize_equality;
    QAction *actionClose_project;
    QAction *actionExport;
    QAction *actionPrint;
    QAction *actionImport_XML;
    QAction *actionExport_as_XML;
    QAction *actionImport_Source_code;
    QAction *actionPage_settings;
    QAction *actionExport_All_diagrams;
    QAction *actionSave_diagrams_as_graphics;
    QAction *actionExit;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionSelect_all;
    QAction *actionInvert_selection;
    QAction *actionGo_to_diagram;
    QAction *actionFind;
    QAction *actionLines_16;
    QAction *actionLines_8;
    QAction *actionDots_16;
    QAction *actionDots_32;
    QAction *actionNone;
    QAction *actionFull_screen;
    QAction *actionZoom_out;
    QAction *actionZoom_in;
    QAction *actionZoom_reset;
    QAction *actionLayout;
    QAction *actionClass_diagram;
    QAction *actionSequence_diagram;
    QAction *actionGenerate_code_for_project;
    QAction *actionSettings;
    QAction *actionEffects;
    QAction *actionHelp;
    QAction *actionAbout;
    QAction *actionSystem_information;
    QAction *actionFile_Toolbar;
    QAction *actionEdit_Toolbar;
    QAction *actionView_Toolbar;
    QAction *actionXML_Dump;
    QAction *actionCreate_Diagram_Toolbar;
    QAction *actionUse_case_diagram;
    QAction *actionActivity_Diagram;
    QAction *actionState_Diagram;
    QAction *actionSequence_Diagram;
    QAction *actionCollaboration_Diagram;
    QAction *actionDeploymentDiagram;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    CustomButton *createNewFileButton;
    CustomButton *OpenButton;
    CustomButton *saveButton;
    CustomButton *revertLastChanges;
    CustomButton *revertLastRevert;
    CustomButton *exportProjectButton;
    CustomButton *CloseProjectButton;
    CustomButton *functionalityPictogramButton;
    CustomButton *settingsButton;
    CustomButton *searchButton;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    CustomButton *createNewDiagramOfPrecendenceButton;
    CustomButton *createClassDiagramButton;
    CustomButton *createSequenceDiagramButton;
    CustomButton *createCommunicationDiagramButton;
    CustomButton *createStateDiagramButton;
    CustomButton *createActivityDiagramButton;
    CustomButton *createDeployDiagramButton;
    QHBoxLayout *CentralzoneLayout;
    QTreeWidget *treeWidget;
    QVBoxLayout *Canvaslayout;
    QHBoxLayout *ItemsHLayout;
    CustomButton *addDiagramPacketButton;
    CustomButton *addClassOnDiagrammButton;
    CustomButton *addAssociationLinkButton;
    CustomButton *addAgregationLinkButton;
    CustomButton *addCompositionLinkButton;
    CustomButton *addFiniteLinkButton;
    CustomButton *addGeneralizationLinkButton;
    CustomButton *addNewInterfaceOnDiagramButton;
    CustomButton *addRealizationLinkOnDiagramButton;
    CustomButton *createNewAttributeButton;
    CustomButton *createNewOperationButton;
    CustomButton *createAssociationClassButton;
    CustomButton *addCommentOnDiagramButton;
    CustomButton *addCommentLingOnDiagramButton;
    QSpacerItem *horizontalSpacer_2;
    CustomWidget *Canvas;
    QTabWidget *tabWidget;
    QWidget *propertiesTab;
    QHBoxLayout *horizontalLayout_7;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_10;
    QVBoxLayout *verticalLayout_4;
    QLabel *PrTabNameLabel;
    QLineEdit *PrTabNameLineEdit;
    QLabel *prTabNmSpaceLabel;
    QComboBox *prTabNmSpaceComboBox;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_3;
    QComboBox *comboBox_2;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QWidget *DocTab;
    QHBoxLayout *horizontalLayout_8;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QLabel *VersionLabel;
    QLineEdit *VersionEditText;
    QSpacerItem *horizontalSpacer_6;
    QVBoxLayout *verticalLayout_6;
    QLabel *DocumentationLabel;
    QLineEdit *documentationEditText;
    QSpacerItem *horizontalSpacer_7;
    QVBoxLayout *verticalLayout_7;
    QLabel *DeprecateLabel;
    QCheckBox *DocumentationcheckBox;
    QWidget *ToDoTab;
    QHBoxLayout *horizontalLayout_9;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QListView *listView;
    QSpacerItem *horizontalSpacer_8;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QPushButton *ToDoAddButton;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuView;
    QMenu *menuAdjust_Grid;
    QMenu *menuScale;
    QMenu *menuToolbars;
    QMenu *menuCreate;
    QMenu *menuArrange;
    QMenu *menuAlign;
    QMenu *menuReorder;
    QMenu *menuGeneratin;
    QMenu *menuCritique;
    QMenu *menuTools;
    QMenu *menuHelp;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->setEnabled(true);
        MainWindow->resize(900, 532);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(900, 532));
        MainWindow->setLayoutDirection(Qt::LeftToRight);
        actionNew_Project = new QAction(MainWindow);
        actionNew_Project->setObjectName(QStringLiteral("actionNew_Project"));
        actionChoose_the_template = new QAction(MainWindow);
        actionChoose_the_template->setObjectName(QStringLiteral("actionChoose_the_template"));
        actionAlign_Left = new QAction(MainWindow);
        actionAlign_Left->setObjectName(QStringLiteral("actionAlign_Left"));
        actionAlign_Right = new QAction(MainWindow);
        actionAlign_Right->setObjectName(QStringLiteral("actionAlign_Right"));
        actionAlign_Center = new QAction(MainWindow);
        actionAlign_Center->setObjectName(QStringLiteral("actionAlign_Center"));
        actionAlign_Top = new QAction(MainWindow);
        actionAlign_Top->setObjectName(QStringLiteral("actionAlign_Top"));
        actionAlign_Middle = new QAction(MainWindow);
        actionAlign_Middle->setObjectName(QStringLiteral("actionAlign_Middle"));
        actionAlign_bottom = new QAction(MainWindow);
        actionAlign_bottom->setObjectName(QStringLiteral("actionAlign_bottom"));
        actionSend_Backward = new QAction(MainWindow);
        actionSend_Backward->setObjectName(QStringLiteral("actionSend_Backward"));
        actionSend_Backward_2 = new QAction(MainWindow);
        actionSend_Backward_2->setObjectName(QStringLiteral("actionSend_Backward_2"));
        actionBring_to_Front = new QAction(MainWindow);
        actionBring_to_Front->setObjectName(QStringLiteral("actionBring_to_Front"));
        action4_Bring_to_Back = new QAction(MainWindow);
        action4_Bring_to_Back->setObjectName(QStringLiteral("action4_Bring_to_Back"));
        actionOrizontal_space_equality = new QAction(MainWindow);
        actionOrizontal_space_equality->setObjectName(QStringLiteral("actionOrizontal_space_equality"));
        actionVertical_space_equality = new QAction(MainWindow);
        actionVertical_space_equality->setObjectName(QStringLiteral("actionVertical_space_equality"));
        actionWidth_equality = new QAction(MainWindow);
        actionWidth_equality->setObjectName(QStringLiteral("actionWidth_equality"));
        actionHeight_equality = new QAction(MainWindow);
        actionHeight_equality->setObjectName(QStringLiteral("actionHeight_equality"));
        actionSize_equality = new QAction(MainWindow);
        actionSize_equality->setObjectName(QStringLiteral("actionSize_equality"));
        actionClose_project = new QAction(MainWindow);
        actionClose_project->setObjectName(QStringLiteral("actionClose_project"));
        actionExport = new QAction(MainWindow);
        actionExport->setObjectName(QStringLiteral("actionExport"));
        actionPrint = new QAction(MainWindow);
        actionPrint->setObjectName(QStringLiteral("actionPrint"));
        actionImport_XML = new QAction(MainWindow);
        actionImport_XML->setObjectName(QStringLiteral("actionImport_XML"));
        actionExport_as_XML = new QAction(MainWindow);
        actionExport_as_XML->setObjectName(QStringLiteral("actionExport_as_XML"));
        actionImport_Source_code = new QAction(MainWindow);
        actionImport_Source_code->setObjectName(QStringLiteral("actionImport_Source_code"));
        actionPage_settings = new QAction(MainWindow);
        actionPage_settings->setObjectName(QStringLiteral("actionPage_settings"));
        actionExport_All_diagrams = new QAction(MainWindow);
        actionExport_All_diagrams->setObjectName(QStringLiteral("actionExport_All_diagrams"));
        actionSave_diagrams_as_graphics = new QAction(MainWindow);
        actionSave_diagrams_as_graphics->setObjectName(QStringLiteral("actionSave_diagrams_as_graphics"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QStringLiteral("actionUndo"));
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName(QStringLiteral("actionRedo"));
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName(QStringLiteral("actionCut"));
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QStringLiteral("actionCopy"));
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QStringLiteral("actionPaste"));
        actionSelect_all = new QAction(MainWindow);
        actionSelect_all->setObjectName(QStringLiteral("actionSelect_all"));
        actionInvert_selection = new QAction(MainWindow);
        actionInvert_selection->setObjectName(QStringLiteral("actionInvert_selection"));
        actionGo_to_diagram = new QAction(MainWindow);
        actionGo_to_diagram->setObjectName(QStringLiteral("actionGo_to_diagram"));
        actionFind = new QAction(MainWindow);
        actionFind->setObjectName(QStringLiteral("actionFind"));
        actionLines_16 = new QAction(MainWindow);
        actionLines_16->setObjectName(QStringLiteral("actionLines_16"));
        actionLines_16->setCheckable(true);
        actionLines_8 = new QAction(MainWindow);
        actionLines_8->setObjectName(QStringLiteral("actionLines_8"));
        actionLines_8->setCheckable(true);
        actionDots_16 = new QAction(MainWindow);
        actionDots_16->setObjectName(QStringLiteral("actionDots_16"));
        actionDots_16->setCheckable(true);
        actionDots_32 = new QAction(MainWindow);
        actionDots_32->setObjectName(QStringLiteral("actionDots_32"));
        actionDots_32->setCheckable(true);
        actionNone = new QAction(MainWindow);
        actionNone->setObjectName(QStringLiteral("actionNone"));
        actionNone->setCheckable(true);
        actionFull_screen = new QAction(MainWindow);
        actionFull_screen->setObjectName(QStringLiteral("actionFull_screen"));
        actionZoom_out = new QAction(MainWindow);
        actionZoom_out->setObjectName(QStringLiteral("actionZoom_out"));
        actionZoom_in = new QAction(MainWindow);
        actionZoom_in->setObjectName(QStringLiteral("actionZoom_in"));
        actionZoom_reset = new QAction(MainWindow);
        actionZoom_reset->setObjectName(QStringLiteral("actionZoom_reset"));
        actionLayout = new QAction(MainWindow);
        actionLayout->setObjectName(QStringLiteral("actionLayout"));
        actionClass_diagram = new QAction(MainWindow);
        actionClass_diagram->setObjectName(QStringLiteral("actionClass_diagram"));
        actionSequence_diagram = new QAction(MainWindow);
        actionSequence_diagram->setObjectName(QStringLiteral("actionSequence_diagram"));
        actionGenerate_code_for_project = new QAction(MainWindow);
        actionGenerate_code_for_project->setObjectName(QStringLiteral("actionGenerate_code_for_project"));
        actionSettings = new QAction(MainWindow);
        actionSettings->setObjectName(QStringLiteral("actionSettings"));
        actionEffects = new QAction(MainWindow);
        actionEffects->setObjectName(QStringLiteral("actionEffects"));
        actionHelp = new QAction(MainWindow);
        actionHelp->setObjectName(QStringLiteral("actionHelp"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionSystem_information = new QAction(MainWindow);
        actionSystem_information->setObjectName(QStringLiteral("actionSystem_information"));
        actionFile_Toolbar = new QAction(MainWindow);
        actionFile_Toolbar->setObjectName(QStringLiteral("actionFile_Toolbar"));
        actionFile_Toolbar->setCheckable(true);
        actionEdit_Toolbar = new QAction(MainWindow);
        actionEdit_Toolbar->setObjectName(QStringLiteral("actionEdit_Toolbar"));
        actionEdit_Toolbar->setCheckable(true);
        actionView_Toolbar = new QAction(MainWindow);
        actionView_Toolbar->setObjectName(QStringLiteral("actionView_Toolbar"));
        actionView_Toolbar->setCheckable(true);
        actionXML_Dump = new QAction(MainWindow);
        actionXML_Dump->setObjectName(QStringLiteral("actionXML_Dump"));
        actionCreate_Diagram_Toolbar = new QAction(MainWindow);
        actionCreate_Diagram_Toolbar->setObjectName(QStringLiteral("actionCreate_Diagram_Toolbar"));
        actionCreate_Diagram_Toolbar->setCheckable(true);
        actionUse_case_diagram = new QAction(MainWindow);
        actionUse_case_diagram->setObjectName(QStringLiteral("actionUse_case_diagram"));
        actionActivity_Diagram = new QAction(MainWindow);
        actionActivity_Diagram->setObjectName(QStringLiteral("actionActivity_Diagram"));
        actionState_Diagram = new QAction(MainWindow);
        actionState_Diagram->setObjectName(QStringLiteral("actionState_Diagram"));
        actionSequence_Diagram = new QAction(MainWindow);
        actionSequence_Diagram->setObjectName(QStringLiteral("actionSequence_Diagram"));
        actionCollaboration_Diagram = new QAction(MainWindow);
        actionCollaboration_Diagram->setObjectName(QStringLiteral("actionCollaboration_Diagram"));
        actionDeploymentDiagram = new QAction(MainWindow);
        actionDeploymentDiagram->setObjectName(QStringLiteral("actionDeploymentDiagram"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        centralWidget->setMinimumSize(QSize(600, 300));
        centralWidget->setStyleSheet(QLatin1String("QWidget\n"
"{\n"
"background-color: #c1d9d9;\n"
"}"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);
        widget->setMinimumSize(QSize(691, 38));
        widget->setBaseSize(QSize(691, 38));
        widget->setStyleSheet(QLatin1String("QWidget\n"
"{\n"
"background-color: #c1d9d9;\n"
"}\n"
"QPushButton\n"
"{\n"
"border-width:1px;\n"
"padding: 1px;\n"
"border-style: inset;\n"
"}"));
        horizontalLayout_4 = new QHBoxLayout(widget);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_2->setContentsMargins(-1, -1, 30, 0);
        createNewFileButton = new CustomButton(widget);
        createNewFileButton->setObjectName(QStringLiteral("createNewFileButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(createNewFileButton->sizePolicy().hasHeightForWidth());
        createNewFileButton->setSizePolicy(sizePolicy2);
        createNewFileButton->setMinimumSize(QSize(36, 36));
        createNewFileButton->setBaseSize(QSize(36, 36));
        createNewFileButton->setStyleSheet(QLatin1String("QPushButton{\n"
"background-image: url(:/new/prefix1/gallery/transparentButton.png);\n"
"image: url(:/new/prefix1/gallery/createNewProjectButton.png); \n"
"}"));

        horizontalLayout_2->addWidget(createNewFileButton);

        OpenButton = new CustomButton(widget);
        OpenButton->setObjectName(QStringLiteral("OpenButton"));
        sizePolicy2.setHeightForWidth(OpenButton->sizePolicy().hasHeightForWidth());
        OpenButton->setSizePolicy(sizePolicy2);
        OpenButton->setMinimumSize(QSize(36, 36));
        OpenButton->setBaseSize(QSize(36, 36));
        OpenButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"image: url(:/new/prefix1/gallery/openExistingFileButton.png);\n"
"background-image: url(:/new/prefix1/gallery/transparentButton.png);\n"
"}"));

        horizontalLayout_2->addWidget(OpenButton);

        saveButton = new CustomButton(widget);
        saveButton->setObjectName(QStringLiteral("saveButton"));
        sizePolicy2.setHeightForWidth(saveButton->sizePolicy().hasHeightForWidth());
        saveButton->setSizePolicy(sizePolicy2);
        saveButton->setMinimumSize(QSize(36, 36));
        saveButton->setBaseSize(QSize(36, 36));
        saveButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"image: url(:/new/prefix1/gallery/SaveProjectButton.png);\n"
"background-image: url(:/new/prefix1/gallery/transparentButton.png);\n"
"}"));

        horizontalLayout_2->addWidget(saveButton);

        revertLastChanges = new CustomButton(widget);
        revertLastChanges->setObjectName(QStringLiteral("revertLastChanges"));
        sizePolicy2.setHeightForWidth(revertLastChanges->sizePolicy().hasHeightForWidth());
        revertLastChanges->setSizePolicy(sizePolicy2);
        revertLastChanges->setMinimumSize(QSize(36, 36));
        revertLastChanges->setBaseSize(QSize(36, 36));
        revertLastChanges->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"image: url(:/new/prefix1/gallery/revertLastChangesButton.png);\n"
"background-image: url(:/new/prefix1/gallery/transparentButton.png);\n"
"}"));

        horizontalLayout_2->addWidget(revertLastChanges);

        revertLastRevert = new CustomButton(widget);
        revertLastRevert->setObjectName(QStringLiteral("revertLastRevert"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(revertLastRevert->sizePolicy().hasHeightForWidth());
        revertLastRevert->setSizePolicy(sizePolicy3);
        revertLastRevert->setMinimumSize(QSize(36, 36));
        revertLastRevert->setBaseSize(QSize(36, 0));
        revertLastRevert->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"image: url(:/new/prefix1/gallery/revertLastRevertButton.png);\n"
"background-image: url(:/new/prefix1/gallery/transparentButton.png);\n"
"}"));

        horizontalLayout_2->addWidget(revertLastRevert);

        exportProjectButton = new CustomButton(widget);
        exportProjectButton->setObjectName(QStringLiteral("exportProjectButton"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(exportProjectButton->sizePolicy().hasHeightForWidth());
        exportProjectButton->setSizePolicy(sizePolicy4);
        exportProjectButton->setMinimumSize(QSize(36, 36));
        exportProjectButton->setBaseSize(QSize(36, 0));
        exportProjectButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"image: url(:/new/prefix1/gallery/exportButton.png);\n"
"background-image: url(:/new/prefix1/gallery/transparentButton.png);\n"
"}"));

        horizontalLayout_2->addWidget(exportProjectButton);

        CloseProjectButton = new CustomButton(widget);
        CloseProjectButton->setObjectName(QStringLiteral("CloseProjectButton"));
        sizePolicy4.setHeightForWidth(CloseProjectButton->sizePolicy().hasHeightForWidth());
        CloseProjectButton->setSizePolicy(sizePolicy4);
        CloseProjectButton->setMinimumSize(QSize(36, 36));
        CloseProjectButton->setBaseSize(QSize(36, 36));
        CloseProjectButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"image: url(:/new/prefix1/gallery/closeProjectButton.png);\n"
"background-image: url(:/new/prefix1/gallery/transparentButton.png);\n"
"}"));

        horizontalLayout_2->addWidget(CloseProjectButton);

        functionalityPictogramButton = new CustomButton(widget);
        functionalityPictogramButton->setObjectName(QStringLiteral("functionalityPictogramButton"));
        sizePolicy4.setHeightForWidth(functionalityPictogramButton->sizePolicy().hasHeightForWidth());
        functionalityPictogramButton->setSizePolicy(sizePolicy4);
        functionalityPictogramButton->setMinimumSize(QSize(36, 36));
        functionalityPictogramButton->setBaseSize(QSize(0, 36));
        functionalityPictogramButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"image: url(:/new/prefix1/gallery/functionallityPictogramButton.png);\n"
"background-image: url(:/new/prefix1/gallery/transparentButton.png);\n"
"}"));

        horizontalLayout_2->addWidget(functionalityPictogramButton);

        settingsButton = new CustomButton(widget);
        settingsButton->setObjectName(QStringLiteral("settingsButton"));
        sizePolicy4.setHeightForWidth(settingsButton->sizePolicy().hasHeightForWidth());
        settingsButton->setSizePolicy(sizePolicy4);
        settingsButton->setMinimumSize(QSize(0, 36));
        settingsButton->setBaseSize(QSize(36, 36));
        settingsButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"image: url(:/new/prefix1/gallery/settingsWindowButton.png);\n"
"background-image: url(:/new/prefix1/gallery/transparentButton.png);\n"
"}"));

        horizontalLayout_2->addWidget(settingsButton);

        searchButton = new CustomButton(widget);
        searchButton->setObjectName(QStringLiteral("searchButton"));
        sizePolicy4.setHeightForWidth(searchButton->sizePolicy().hasHeightForWidth());
        searchButton->setSizePolicy(sizePolicy4);
        searchButton->setMinimumSize(QSize(0, 36));
        searchButton->setBaseSize(QSize(36, 36));
        searchButton->setMouseTracking(false);
        searchButton->setAcceptDrops(false);
        searchButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"image: url(:/new/prefix1/gallery/searchButton.png);\n"
"background-image: url(:/new/prefix1/gallery/transparentButton.png);\n"
"}"));

        horizontalLayout_2->addWidget(searchButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        horizontalLayout_4->addLayout(horizontalLayout_2);

        horizontalSpacer = new QSpacerItem(100, 2, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalLayout_3->setContentsMargins(170, -1, -1, -1);
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        createNewDiagramOfPrecendenceButton = new CustomButton(widget);
        createNewDiagramOfPrecendenceButton->setObjectName(QStringLiteral("createNewDiagramOfPrecendenceButton"));
        sizePolicy2.setHeightForWidth(createNewDiagramOfPrecendenceButton->sizePolicy().hasHeightForWidth());
        createNewDiagramOfPrecendenceButton->setSizePolicy(sizePolicy2);
        createNewDiagramOfPrecendenceButton->setMinimumSize(QSize(0, 36));
        createNewDiagramOfPrecendenceButton->setBaseSize(QSize(32, 0));
        createNewDiagramOfPrecendenceButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"image: url(:/new/prefix1/gallery/createNewDiagramOfPrecendenceButton.png);\n"
"background-image: url(:/new/prefix1/gallery/transparentButton.png);\n"
"}"));
        createNewDiagramOfPrecendenceButton->setCheckable(true);
        createNewDiagramOfPrecendenceButton->setFlat(false);

        horizontalLayout_3->addWidget(createNewDiagramOfPrecendenceButton);

        createClassDiagramButton = new CustomButton(widget);
        createClassDiagramButton->setObjectName(QStringLiteral("createClassDiagramButton"));
        sizePolicy2.setHeightForWidth(createClassDiagramButton->sizePolicy().hasHeightForWidth());
        createClassDiagramButton->setSizePolicy(sizePolicy2);
        createClassDiagramButton->setMinimumSize(QSize(0, 36));
        createClassDiagramButton->setBaseSize(QSize(32, 0));
        createClassDiagramButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"image: url(:/new/prefix1/gallery/createClassDiagramButton.png);\n"
"background-image: url(:/new/prefix1/gallery/transparent.png);\n"
"}"));
        createClassDiagramButton->setCheckable(true);

        horizontalLayout_3->addWidget(createClassDiagramButton);

        createSequenceDiagramButton = new CustomButton(widget);
        createSequenceDiagramButton->setObjectName(QStringLiteral("createSequenceDiagramButton"));
        sizePolicy2.setHeightForWidth(createSequenceDiagramButton->sizePolicy().hasHeightForWidth());
        createSequenceDiagramButton->setSizePolicy(sizePolicy2);
        createSequenceDiagramButton->setMinimumSize(QSize(0, 36));
        createSequenceDiagramButton->setBaseSize(QSize(32, 0));
        createSequenceDiagramButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"image: url(:/new/prefix1/gallery/createSequenceDiagramButton.png);\n"
"background-image: url(:/new/prefix1/gallery/transparent.png);\n"
"}"));
        createSequenceDiagramButton->setCheckable(true);

        horizontalLayout_3->addWidget(createSequenceDiagramButton);

        createCommunicationDiagramButton = new CustomButton(widget);
        createCommunicationDiagramButton->setObjectName(QStringLiteral("createCommunicationDiagramButton"));
        sizePolicy2.setHeightForWidth(createCommunicationDiagramButton->sizePolicy().hasHeightForWidth());
        createCommunicationDiagramButton->setSizePolicy(sizePolicy2);
        createCommunicationDiagramButton->setMinimumSize(QSize(0, 36));
        createCommunicationDiagramButton->setBaseSize(QSize(32, 0));
        createCommunicationDiagramButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"image: url(:/new/prefix1/gallery/createCommunicationDiagramButton.png);\n"
"background-image: url(:/new/prefix1/gallery/transparent.png);\n"
"}"));
        createCommunicationDiagramButton->setCheckable(true);

        horizontalLayout_3->addWidget(createCommunicationDiagramButton);

        createStateDiagramButton = new CustomButton(widget);
        createStateDiagramButton->setObjectName(QStringLiteral("createStateDiagramButton"));
        sizePolicy2.setHeightForWidth(createStateDiagramButton->sizePolicy().hasHeightForWidth());
        createStateDiagramButton->setSizePolicy(sizePolicy2);
        createStateDiagramButton->setMinimumSize(QSize(0, 36));
        createStateDiagramButton->setBaseSize(QSize(32, 0));
        createStateDiagramButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"image: url(:/new/prefix1/gallery/createStateDiagramButton.png);\n"
"background-image: url(:/new/prefix1/gallery/transparent.png);\n"
"}"));
        createStateDiagramButton->setCheckable(true);

        horizontalLayout_3->addWidget(createStateDiagramButton);

        createActivityDiagramButton = new CustomButton(widget);
        createActivityDiagramButton->setObjectName(QStringLiteral("createActivityDiagramButton"));
        sizePolicy2.setHeightForWidth(createActivityDiagramButton->sizePolicy().hasHeightForWidth());
        createActivityDiagramButton->setSizePolicy(sizePolicy2);
        createActivityDiagramButton->setMinimumSize(QSize(0, 36));
        createActivityDiagramButton->setBaseSize(QSize(32, 0));
        createActivityDiagramButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"image: url(:/new/prefix1/gallery/createActivityDiagramButton.png);\n"
"background-image: url(:/new/prefix1/gallery/transparent.png);\n"
"}"));
        createActivityDiagramButton->setCheckable(true);

        horizontalLayout_3->addWidget(createActivityDiagramButton);

        createDeployDiagramButton = new CustomButton(widget);
        createDeployDiagramButton->setObjectName(QStringLiteral("createDeployDiagramButton"));
        sizePolicy2.setHeightForWidth(createDeployDiagramButton->sizePolicy().hasHeightForWidth());
        createDeployDiagramButton->setSizePolicy(sizePolicy2);
        createDeployDiagramButton->setMinimumSize(QSize(32, 0));
        createDeployDiagramButton->setBaseSize(QSize(0, 36));
        createDeployDiagramButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"image: url(:/new/prefix1/gallery/createDeployDiagramButton.png);\n"
"background-image: url(:/new/prefix1/gallery/transparent.png);\n"
"}"));
        createDeployDiagramButton->setCheckable(true);

        horizontalLayout_3->addWidget(createDeployDiagramButton);


        horizontalLayout_4->addLayout(horizontalLayout_3);


        verticalLayout->addWidget(widget);

        CentralzoneLayout = new QHBoxLayout();
        CentralzoneLayout->setSpacing(0);
        CentralzoneLayout->setObjectName(QStringLiteral("CentralzoneLayout"));
        treeWidget = new QTreeWidget(centralWidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem(treeWidget);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem2);
        new QTreeWidgetItem(__qtreewidgetitem2);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        sizePolicy4.setHeightForWidth(treeWidget->sizePolicy().hasHeightForWidth());
        treeWidget->setSizePolicy(sizePolicy4);
        treeWidget->setMinimumSize(QSize(60, 0));
        treeWidget->setBaseSize(QSize(80, 0));
        treeWidget->setStyleSheet(QLatin1String("QTreeWidget\n"
"{\n"
"background-color: #dcf7f7;\n"
"color:#394040;\n"
"}"));

        CentralzoneLayout->addWidget(treeWidget);

        Canvaslayout = new QVBoxLayout();
        Canvaslayout->setSpacing(0);
        Canvaslayout->setObjectName(QStringLiteral("Canvaslayout"));
        ItemsHLayout = new QHBoxLayout();
        ItemsHLayout->setSpacing(0);
        ItemsHLayout->setObjectName(QStringLiteral("ItemsHLayout"));
        ItemsHLayout->setSizeConstraint(QLayout::SetFixedSize);
        ItemsHLayout->setContentsMargins(0, -1, 0, -1);
        addDiagramPacketButton = new CustomButton(centralWidget);
        addDiagramPacketButton->setObjectName(QStringLiteral("addDiagramPacketButton"));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(addDiagramPacketButton->sizePolicy().hasHeightForWidth());
        addDiagramPacketButton->setSizePolicy(sizePolicy5);
        addDiagramPacketButton->setBaseSize(QSize(36, 23));
        addDiagramPacketButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"image: url(:/new/prefix1/gallery/addDiagramPacketButton.png);\n"
"background-image: url(:/new/prefix1/gallery/transparentButton.png);\n"
"}"));
        addDiagramPacketButton->setCheckable(true);

        ItemsHLayout->addWidget(addDiagramPacketButton);

        addClassOnDiagrammButton = new CustomButton(centralWidget);
        addClassOnDiagrammButton->setObjectName(QStringLiteral("addClassOnDiagrammButton"));
        sizePolicy5.setHeightForWidth(addClassOnDiagrammButton->sizePolicy().hasHeightForWidth());
        addClassOnDiagrammButton->setSizePolicy(sizePolicy5);
        addClassOnDiagrammButton->setBaseSize(QSize(36, 23));
        addClassOnDiagrammButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"image: url(:/new/prefix1/gallery/addClassOnDiagrammButton.png);\n"
"background-image: url(:/new/prefix1/gallery/transparentButton.png);\n"
"}"));
        addClassOnDiagrammButton->setCheckable(true);

        ItemsHLayout->addWidget(addClassOnDiagrammButton);

        addAssociationLinkButton = new CustomButton(centralWidget);
        addAssociationLinkButton->setObjectName(QStringLiteral("addAssociationLinkButton"));
        sizePolicy5.setHeightForWidth(addAssociationLinkButton->sizePolicy().hasHeightForWidth());
        addAssociationLinkButton->setSizePolicy(sizePolicy5);
        addAssociationLinkButton->setBaseSize(QSize(36, 23));
        addAssociationLinkButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"image: url(:/new/prefix1/gallery/addAssociationLinkButton.png);\n"
"background-image: url(:/new/prefix1/gallery/transparentButton.png);\n"
"}"));
        addAssociationLinkButton->setCheckable(true);

        ItemsHLayout->addWidget(addAssociationLinkButton);

        addAgregationLinkButton = new CustomButton(centralWidget);
        addAgregationLinkButton->setObjectName(QStringLiteral("addAgregationLinkButton"));
        sizePolicy5.setHeightForWidth(addAgregationLinkButton->sizePolicy().hasHeightForWidth());
        addAgregationLinkButton->setSizePolicy(sizePolicy5);
        addAgregationLinkButton->setBaseSize(QSize(36, 23));
        addAgregationLinkButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"image: url(:/new/prefix1/gallery/addAgregationLinkButton.png);\n"
"background-image: url(:/new/prefix1/gallery/transparentButton.png);\n"
"}"));
        addAgregationLinkButton->setCheckable(true);

        ItemsHLayout->addWidget(addAgregationLinkButton);

        addCompositionLinkButton = new CustomButton(centralWidget);
        addCompositionLinkButton->setObjectName(QStringLiteral("addCompositionLinkButton"));
        sizePolicy5.setHeightForWidth(addCompositionLinkButton->sizePolicy().hasHeightForWidth());
        addCompositionLinkButton->setSizePolicy(sizePolicy5);
        addCompositionLinkButton->setMinimumSize(QSize(27, 0));
        addCompositionLinkButton->setBaseSize(QSize(36, 23));
        addCompositionLinkButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"image: url(:/new/prefix1/gallery/addCompositionLinkButton.png);\n"
"background-image: url(:/new/prefix1/gallery/transparentButton.png);\n"
"}"));
        addCompositionLinkButton->setCheckable(true);

        ItemsHLayout->addWidget(addCompositionLinkButton);

        addFiniteLinkButton = new CustomButton(centralWidget);
        addFiniteLinkButton->setObjectName(QStringLiteral("addFiniteLinkButton"));
        sizePolicy5.setHeightForWidth(addFiniteLinkButton->sizePolicy().hasHeightForWidth());
        addFiniteLinkButton->setSizePolicy(sizePolicy5);
        addFiniteLinkButton->setMinimumSize(QSize(27, 0));
        addFiniteLinkButton->setBaseSize(QSize(36, 23));
        addFiniteLinkButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"image: url(:/new/prefix1/gallery/addFiniteLinkButton.png);\n"
"background-image: url(:/new/prefix1/gallery/transparentButton.png);\n"
"}"));
        addFiniteLinkButton->setCheckable(true);

        ItemsHLayout->addWidget(addFiniteLinkButton);

        addGeneralizationLinkButton = new CustomButton(centralWidget);
        addGeneralizationLinkButton->setObjectName(QStringLiteral("addGeneralizationLinkButton"));
        sizePolicy5.setHeightForWidth(addGeneralizationLinkButton->sizePolicy().hasHeightForWidth());
        addGeneralizationLinkButton->setSizePolicy(sizePolicy5);
        addGeneralizationLinkButton->setMinimumSize(QSize(27, 0));
        addGeneralizationLinkButton->setBaseSize(QSize(36, 23));
        addGeneralizationLinkButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"image: url(:/new/prefix1/gallery/addGeneralizationLinkButton.png);\n"
"background-image: url(:/new/prefix1/gallery/transparentButton.png);\n"
"}"));
        addGeneralizationLinkButton->setCheckable(true);

        ItemsHLayout->addWidget(addGeneralizationLinkButton);

        addNewInterfaceOnDiagramButton = new CustomButton(centralWidget);
        addNewInterfaceOnDiagramButton->setObjectName(QStringLiteral("addNewInterfaceOnDiagramButton"));
        sizePolicy5.setHeightForWidth(addNewInterfaceOnDiagramButton->sizePolicy().hasHeightForWidth());
        addNewInterfaceOnDiagramButton->setSizePolicy(sizePolicy5);
        addNewInterfaceOnDiagramButton->setMinimumSize(QSize(27, 0));
        addNewInterfaceOnDiagramButton->setBaseSize(QSize(36, 23));
        addNewInterfaceOnDiagramButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"image: url(:/new/prefix1/gallery/addNewInterfaceOnDiagramButton.png);\n"
"background-image: url(:/new/prefix1/gallery/transparentButton.png);\n"
"}"));
        addNewInterfaceOnDiagramButton->setCheckable(true);

        ItemsHLayout->addWidget(addNewInterfaceOnDiagramButton);

        addRealizationLinkOnDiagramButton = new CustomButton(centralWidget);
        addRealizationLinkOnDiagramButton->setObjectName(QStringLiteral("addRealizationLinkOnDiagramButton"));
        sizePolicy5.setHeightForWidth(addRealizationLinkOnDiagramButton->sizePolicy().hasHeightForWidth());
        addRealizationLinkOnDiagramButton->setSizePolicy(sizePolicy5);
        addRealizationLinkOnDiagramButton->setMinimumSize(QSize(27, 0));
        addRealizationLinkOnDiagramButton->setBaseSize(QSize(36, 23));
        addRealizationLinkOnDiagramButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"image: url(:/new/prefix1/gallery/addRealizationLinkOnDiagramButton.png);\n"
"background-image: url(:/new/prefix1/gallery/transparentButton.png);\n"
"}"));
        addRealizationLinkOnDiagramButton->setCheckable(true);

        ItemsHLayout->addWidget(addRealizationLinkOnDiagramButton);

        createNewAttributeButton = new CustomButton(centralWidget);
        createNewAttributeButton->setObjectName(QStringLiteral("createNewAttributeButton"));
        sizePolicy5.setHeightForWidth(createNewAttributeButton->sizePolicy().hasHeightForWidth());
        createNewAttributeButton->setSizePolicy(sizePolicy5);
        createNewAttributeButton->setMinimumSize(QSize(27, 0));
        createNewAttributeButton->setBaseSize(QSize(36, 23));
        createNewAttributeButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"image: url(:/new/prefix1/gallery/createNewAttributeButton.png);\n"
"background-image: url(:/new/prefix1/gallery/transparentButton.png);\n"
"}"));
        createNewAttributeButton->setCheckable(true);

        ItemsHLayout->addWidget(createNewAttributeButton);

        createNewOperationButton = new CustomButton(centralWidget);
        createNewOperationButton->setObjectName(QStringLiteral("createNewOperationButton"));
        sizePolicy5.setHeightForWidth(createNewOperationButton->sizePolicy().hasHeightForWidth());
        createNewOperationButton->setSizePolicy(sizePolicy5);
        createNewOperationButton->setMinimumSize(QSize(27, 0));
        createNewOperationButton->setBaseSize(QSize(36, 23));
        createNewOperationButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"image: url(:/new/prefix1/gallery/createNewOperationButton.png);\n"
"background-image: url(:/new/prefix1/gallery/transparentButton.png);\n"
"}"));
        createNewOperationButton->setCheckable(true);

        ItemsHLayout->addWidget(createNewOperationButton);

        createAssociationClassButton = new CustomButton(centralWidget);
        createAssociationClassButton->setObjectName(QStringLiteral("createAssociationClassButton"));
        sizePolicy5.setHeightForWidth(createAssociationClassButton->sizePolicy().hasHeightForWidth());
        createAssociationClassButton->setSizePolicy(sizePolicy5);
        createAssociationClassButton->setMinimumSize(QSize(27, 0));
        createAssociationClassButton->setBaseSize(QSize(36, 23));
        createAssociationClassButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"image: url(:/new/prefix1/gallery/createAssociationClassButton.png);\n"
"background-image: url(:/new/prefix1/gallery/transparentButton.png);\n"
"}"));
        createAssociationClassButton->setCheckable(true);

        ItemsHLayout->addWidget(createAssociationClassButton);

        addCommentOnDiagramButton = new CustomButton(centralWidget);
        addCommentOnDiagramButton->setObjectName(QStringLiteral("addCommentOnDiagramButton"));
        sizePolicy5.setHeightForWidth(addCommentOnDiagramButton->sizePolicy().hasHeightForWidth());
        addCommentOnDiagramButton->setSizePolicy(sizePolicy5);
        addCommentOnDiagramButton->setMinimumSize(QSize(36, 0));
        addCommentOnDiagramButton->setBaseSize(QSize(36, 23));
        addCommentOnDiagramButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"image: url(:/new/prefix1/gallery/addCommentOnDiagramButton.png);\n"
"background-image: url(:/new/prefix1/gallery/transparentButton.png);\n"
"}"));
        addCommentOnDiagramButton->setCheckable(true);

        ItemsHLayout->addWidget(addCommentOnDiagramButton);

        addCommentLingOnDiagramButton = new CustomButton(centralWidget);
        addCommentLingOnDiagramButton->setObjectName(QStringLiteral("addCommentLingOnDiagramButton"));
        sizePolicy5.setHeightForWidth(addCommentLingOnDiagramButton->sizePolicy().hasHeightForWidth());
        addCommentLingOnDiagramButton->setSizePolicy(sizePolicy5);
        addCommentLingOnDiagramButton->setMinimumSize(QSize(27, 0));
        addCommentLingOnDiagramButton->setBaseSize(QSize(36, 23));
        addCommentLingOnDiagramButton->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"image: url(:/new/prefix1/gallery/addCommentLingOnDiagramButton.png);\n"
"background-image: url(:/new/prefix1/gallery/transparentButton.png);\n"
"}"));
        addCommentLingOnDiagramButton->setCheckable(true);

        ItemsHLayout->addWidget(addCommentLingOnDiagramButton);

        horizontalSpacer_2 = new QSpacerItem(100, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        ItemsHLayout->addItem(horizontalSpacer_2);


        Canvaslayout->addLayout(ItemsHLayout);

        Canvas = new CustomWidget(centralWidget);
        Canvas->setObjectName(QStringLiteral("Canvas"));
        sizePolicy.setHeightForWidth(Canvas->sizePolicy().hasHeightForWidth());
        Canvas->setSizePolicy(sizePolicy);
        Canvas->setMinimumSize(QSize(0, 250));
        Canvas->setContextMenuPolicy(Qt::CustomContextMenu);
        Canvas->setStyleSheet(QLatin1String("\n"
"background-color: rgb(255, 255, 255);\n"
"alternate-background-color: rgb(255, 255, 255);\n"
""));

        Canvaslayout->addWidget(Canvas);

        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        QSizePolicy sizePolicy6(QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy6);
        tabWidget->setMinimumSize(QSize(50, 103));
        tabWidget->setStyleSheet(QLatin1String("QTabWidget\n"
"{\n"
"background-color: #84f1ba;\n"
"color:  #394040;\n"
"}"));
        propertiesTab = new QWidget();
        propertiesTab->setObjectName(QStringLiteral("propertiesTab"));
        propertiesTab->setStyleSheet(QLatin1String("QWidget\n"
"{\n"
"background-color:#84f1ba;\n"
"color:  #394040;\n"
"}\n"
"QLineEdit\n"
"{\n"
"background-color: #ffffff;\n"
"}\n"
"QLineEdit: focus\n"
"{\n"
"background-color:  #fffffc;\n"
"}\n"
"QLineEdit: focus:pressed\n"
"{\n"
"background-color:  #fffffc;\n"
"}\n"
""));
        horizontalLayout_7 = new QHBoxLayout(propertiesTab);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(-1, -1, 100, -1);
        widget_2 = new QWidget(propertiesTab);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setStyleSheet(QLatin1String("QComboBox\n"
"{\n"
"background-color: #ffffff;\n"
"}\n"
"QComboBox: focus\n"
"{\n"
"background-color:  #fffffc;\n"
"}\n"
"QComboBox: focus:pressed\n"
"{\n"
"background-color:  #fffffc;\n"
"}"));
        horizontalLayout_10 = new QHBoxLayout(widget_2);
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(-1, -1, -1, 4);
        PrTabNameLabel = new QLabel(widget_2);
        PrTabNameLabel->setObjectName(QStringLiteral("PrTabNameLabel"));

        verticalLayout_4->addWidget(PrTabNameLabel);

        PrTabNameLineEdit = new QLineEdit(widget_2);
        PrTabNameLineEdit->setObjectName(QStringLiteral("PrTabNameLineEdit"));

        verticalLayout_4->addWidget(PrTabNameLineEdit);

        prTabNmSpaceLabel = new QLabel(widget_2);
        prTabNmSpaceLabel->setObjectName(QStringLiteral("prTabNmSpaceLabel"));

        verticalLayout_4->addWidget(prTabNmSpaceLabel);

        prTabNmSpaceComboBox = new QComboBox(widget_2);
        prTabNmSpaceComboBox->setObjectName(QStringLiteral("prTabNmSpaceComboBox"));

        verticalLayout_4->addWidget(prTabNmSpaceComboBox);


        horizontalLayout_10->addLayout(verticalLayout_4);

        horizontalSpacer_3 = new QSpacerItem(60, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_3);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(-1, -1, -1, 4);
        label_3 = new QLabel(widget_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_5->addWidget(label_3);

        comboBox_2 = new QComboBox(widget_2);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        verticalLayout_5->addWidget(comboBox_2);

        label_4 = new QLabel(widget_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_5->addWidget(label_4);

        lineEdit_3 = new QLineEdit(widget_2);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        verticalLayout_5->addWidget(lineEdit_3);


        horizontalLayout_10->addLayout(verticalLayout_5);


        horizontalLayout_7->addWidget(widget_2);

        tabWidget->addTab(propertiesTab, QString());
        DocTab = new QWidget();
        DocTab->setObjectName(QStringLiteral("DocTab"));
        DocTab->setStyleSheet(QLatin1String("QWidget\n"
"{\n"
"background-color:#84f1ba;\n"
"color:  #394040;\n"
"}\n"
"QLineEdit\n"
"{\n"
"background-color: #ffffff;\n"
"}\n"
"QLineEdit: focus\n"
"{\n"
"background-color:  #fffffc;\n"
"}\n"
"QLineEdit: focus:pressed\n"
"{\n"
"background-color:  #fffffc;\n"
"}\n"
"QCheckBox\n"
"{\n"
"background-color: #ffffff;\n"
"color:#ffffff;\n"
"}\n"
""));
        horizontalLayout_8 = new QHBoxLayout(DocTab);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        widget_3 = new QWidget(DocTab);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setStyleSheet(QLatin1String("QCheckBox::indicator::unchecked\n"
"{\n"
"background-color: #ffffff;\n"
"}\n"
"QCheckBox::indicator::checked\n"
"{\n"
"background-color: #ffffff;\n"
"}"));
        horizontalLayout = new QHBoxLayout(widget_3);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, 100, -1);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, -1, -1, 15);
        VersionLabel = new QLabel(widget_3);
        VersionLabel->setObjectName(QStringLiteral("VersionLabel"));

        verticalLayout_3->addWidget(VersionLabel);

        VersionEditText = new QLineEdit(widget_3);
        VersionEditText->setObjectName(QStringLiteral("VersionEditText"));

        verticalLayout_3->addWidget(VersionEditText);


        horizontalLayout->addLayout(verticalLayout_3);

        horizontalSpacer_6 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(-1, -1, -1, 15);
        DocumentationLabel = new QLabel(widget_3);
        DocumentationLabel->setObjectName(QStringLiteral("DocumentationLabel"));

        verticalLayout_6->addWidget(DocumentationLabel);

        documentationEditText = new QLineEdit(widget_3);
        documentationEditText->setObjectName(QStringLiteral("documentationEditText"));

        verticalLayout_6->addWidget(documentationEditText);


        horizontalLayout->addLayout(verticalLayout_6);

        horizontalSpacer_7 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_7);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(-1, -1, -1, 15);
        DeprecateLabel = new QLabel(widget_3);
        DeprecateLabel->setObjectName(QStringLiteral("DeprecateLabel"));

        verticalLayout_7->addWidget(DeprecateLabel);

        DocumentationcheckBox = new QCheckBox(widget_3);
        DocumentationcheckBox->setObjectName(QStringLiteral("DocumentationcheckBox"));

        verticalLayout_7->addWidget(DocumentationcheckBox);


        horizontalLayout->addLayout(verticalLayout_7);


        horizontalLayout_8->addWidget(widget_3);

        tabWidget->addTab(DocTab, QString());
        ToDoTab = new QWidget();
        ToDoTab->setObjectName(QStringLiteral("ToDoTab"));
        ToDoTab->setStyleSheet(QLatin1String("QWidget\n"
"{\n"
"background-color:#84f1ba;\n"
"color:  #394040;\n"
"}\n"
"QLineEdit\n"
"{\n"
"background-color: #ffffff;\n"
"}\n"
"QLineEdit: focus\n"
"{\n"
"background-color:  #fffffc;\n"
"}\n"
"QLineEdit: focus:pressed\n"
"{\n"
"background-color:  #fffffc;\n"
"}\n"
"QCheckBox\n"
"{\n"
"background-color: #ffffff;\n"
"color:#ffffff;\n"
"}\n"
"QListView\n"
"{\n"
"backgroud-color: #fffffc;\n"
"}\n"
""));
        horizontalLayout_9 = new QHBoxLayout(ToDoTab);
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        widget_4 = new QWidget(ToDoTab);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setStyleSheet(QStringLiteral(""));
        horizontalLayout_6 = new QHBoxLayout(widget_4);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(widget_4);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);

        listView = new QListView(widget_4);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setStyleSheet(QLatin1String("QListView\n"
"{\n"
"background-color: #fffffc;\n"
"color: xffffc;\n"
"}"));

        verticalLayout_2->addWidget(listView);


        horizontalLayout_6->addLayout(verticalLayout_2);

        horizontalSpacer_8 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_8);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(50, -1, 50, -1);
        label_2 = new QLabel(widget_4);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy7(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy7);
        label_2->setMinimumSize(QSize(0, 30));

        verticalLayout_8->addWidget(label_2);

        lineEdit = new QLineEdit(widget_4);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout_8->addWidget(lineEdit);

        ToDoAddButton = new QPushButton(widget_4);
        ToDoAddButton->setObjectName(QStringLiteral("ToDoAddButton"));

        verticalLayout_8->addWidget(ToDoAddButton);


        horizontalLayout_6->addLayout(verticalLayout_8);


        horizontalLayout_9->addWidget(widget_4);

        tabWidget->addTab(ToDoTab, QString());

        Canvaslayout->addWidget(tabWidget);


        CentralzoneLayout->addLayout(Canvaslayout);


        verticalLayout->addLayout(CentralzoneLayout);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 900, 19));
        menuBar->setAutoFillBackground(false);
        menuBar->setStyleSheet(QLatin1String("QMenuBar\n"
"{\n"
"background-color: #42cad7;\n"
"color: #fffffc;\n"
"border-color: #fffffc;\n"
"selection-background-color: #7ee297;\n"
"selection-color: #fffffc;\n"
"}"));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QStringLiteral("menuView"));
        menuAdjust_Grid = new QMenu(menuView);
        menuAdjust_Grid->setObjectName(QStringLiteral("menuAdjust_Grid"));
        menuScale = new QMenu(menuView);
        menuScale->setObjectName(QStringLiteral("menuScale"));
        menuToolbars = new QMenu(menuView);
        menuToolbars->setObjectName(QStringLiteral("menuToolbars"));
        menuCreate = new QMenu(menuBar);
        menuCreate->setObjectName(QStringLiteral("menuCreate"));
        menuArrange = new QMenu(menuBar);
        menuArrange->setObjectName(QStringLiteral("menuArrange"));
        menuAlign = new QMenu(menuArrange);
        menuAlign->setObjectName(QStringLiteral("menuAlign"));
        menuReorder = new QMenu(menuArrange);
        menuReorder->setObjectName(QStringLiteral("menuReorder"));
        menuGeneratin = new QMenu(menuBar);
        menuGeneratin->setObjectName(QStringLiteral("menuGeneratin"));
        menuCritique = new QMenu(menuBar);
        menuCritique->setObjectName(QStringLiteral("menuCritique"));
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QStringLiteral("menuTools"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuCreate->menuAction());
        menuBar->addAction(menuArrange->menuAction());
        menuBar->addAction(menuGeneratin->menuAction());
        menuBar->addAction(menuCritique->menuAction());
        menuBar->addAction(menuTools->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionNew_Project);
        menuFile->addAction(actionChoose_the_template);
        menuFile->addAction(actionClose_project);
        menuFile->addAction(actionExport);
        menuFile->addAction(actionPrint);
        menuFile->addAction(actionImport_XML);
        menuFile->addAction(actionExport_as_XML);
        menuFile->addAction(actionImport_Source_code);
        menuFile->addAction(actionPage_settings);
        menuFile->addAction(actionExport_All_diagrams);
        menuFile->addAction(actionSave_diagrams_as_graphics);
        menuFile->addAction(actionExit);
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuEdit->addAction(actionSelect_all);
        menuEdit->addAction(actionInvert_selection);
        menuView->addAction(actionGo_to_diagram);
        menuView->addAction(actionFind);
        menuView->addAction(menuAdjust_Grid->menuAction());
        menuView->addAction(actionFull_screen);
        menuView->addAction(menuScale->menuAction());
        menuView->addAction(menuToolbars->menuAction());
        menuAdjust_Grid->addAction(actionLines_16);
        menuAdjust_Grid->addAction(actionLines_8);
        menuAdjust_Grid->addAction(actionDots_16);
        menuAdjust_Grid->addAction(actionDots_32);
        menuAdjust_Grid->addAction(actionNone);
        menuScale->addAction(actionZoom_out);
        menuScale->addAction(actionZoom_in);
        menuScale->addAction(actionZoom_reset);
        menuToolbars->addAction(actionFile_Toolbar);
        menuToolbars->addAction(actionEdit_Toolbar);
        menuToolbars->addAction(actionView_Toolbar);
        menuToolbars->addAction(actionCreate_Diagram_Toolbar);
        menuCreate->addAction(actionXML_Dump);
        menuCreate->addSeparator();
        menuCreate->addAction(actionUse_case_diagram);
        menuCreate->addAction(actionActivity_Diagram);
        menuCreate->addAction(actionState_Diagram);
        menuCreate->addAction(actionSequence_Diagram);
        menuCreate->addAction(actionCollaboration_Diagram);
        menuCreate->addAction(actionDeploymentDiagram);
        menuArrange->addAction(menuAlign->menuAction());
        menuArrange->addAction(menuReorder->menuAction());
        menuArrange->addAction(actionOrizontal_space_equality);
        menuArrange->addAction(actionVertical_space_equality);
        menuArrange->addAction(actionWidth_equality);
        menuArrange->addAction(actionHeight_equality);
        menuArrange->addAction(actionSize_equality);
        menuArrange->addAction(actionLayout);
        menuAlign->addAction(actionAlign_Left);
        menuAlign->addAction(actionAlign_Right);
        menuAlign->addAction(actionAlign_Center);
        menuAlign->addAction(actionAlign_Top);
        menuAlign->addAction(actionAlign_Middle);
        menuAlign->addAction(actionAlign_bottom);
        menuReorder->addSeparator();
        menuReorder->addAction(actionSend_Backward);
        menuReorder->addAction(actionSend_Backward_2);
        menuReorder->addAction(actionBring_to_Front);
        menuReorder->addAction(action4_Bring_to_Back);
        menuGeneratin->addAction(actionClass_diagram);
        menuGeneratin->addAction(actionSequence_diagram);
        menuGeneratin->addAction(actionGenerate_code_for_project);
        menuTools->addAction(actionSettings);
        menuTools->addAction(actionEffects);
        menuHelp->addAction(actionHelp);
        menuHelp->addAction(actionAbout);
        menuHelp->addAction(actionSystem_information);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionNew_Project->setText(QApplication::translate("MainWindow", "New project", 0));
        actionChoose_the_template->setText(QApplication::translate("MainWindow", "Save project", 0));
        actionAlign_Left->setText(QApplication::translate("MainWindow", "Align Left", 0));
        actionAlign_Right->setText(QApplication::translate("MainWindow", "Align Right", 0));
        actionAlign_Center->setText(QApplication::translate("MainWindow", "Align Center", 0));
        actionAlign_Top->setText(QApplication::translate("MainWindow", "Align Top", 0));
        actionAlign_Middle->setText(QApplication::translate("MainWindow", "Align Middle", 0));
        actionAlign_bottom->setText(QApplication::translate("MainWindow", "Align Bottom", 0));
        actionSend_Backward->setText(QApplication::translate("MainWindow", "Bring Forward", 0));
        actionSend_Backward_2->setText(QApplication::translate("MainWindow", "Send Backward", 0));
        actionBring_to_Front->setText(QApplication::translate("MainWindow", "Bring to Front", 0));
        action4_Bring_to_Back->setText(QApplication::translate("MainWindow", "Bring to Back", 0));
        actionOrizontal_space_equality->setText(QApplication::translate("MainWindow", "Horizontal space equality", 0));
        actionVertical_space_equality->setText(QApplication::translate("MainWindow", "Vertical space equality", 0));
        actionWidth_equality->setText(QApplication::translate("MainWindow", "Width equality", 0));
        actionHeight_equality->setText(QApplication::translate("MainWindow", "Height equality", 0));
        actionSize_equality->setText(QApplication::translate("MainWindow", "Size equality", 0));
        actionClose_project->setText(QApplication::translate("MainWindow", "Close project", 0));
        actionExport->setText(QApplication::translate("MainWindow", "Export", 0));
        actionPrint->setText(QApplication::translate("MainWindow", "Print", 0));
        actionImport_XML->setText(QApplication::translate("MainWindow", "Import XML", 0));
        actionExport_as_XML->setText(QApplication::translate("MainWindow", "Export as XML", 0));
        actionImport_Source_code->setText(QApplication::translate("MainWindow", "Import source code", 0));
        actionPage_settings->setText(QApplication::translate("MainWindow", "Page settings", 0));
        actionExport_All_diagrams->setText(QApplication::translate("MainWindow", "Export all diagrams", 0));
        actionSave_diagrams_as_graphics->setText(QApplication::translate("MainWindow", "Save diagrams as graphics", 0));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", 0));
        actionUndo->setText(QApplication::translate("MainWindow", "Undo", 0));
        actionUndo->setShortcut(QApplication::translate("MainWindow", "Ctrl+Z", 0));
        actionRedo->setText(QApplication::translate("MainWindow", "Redo", 0));
        actionRedo->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+Z", 0));
        actionCut->setText(QApplication::translate("MainWindow", "Cut", 0));
        actionCut->setShortcut(QApplication::translate("MainWindow", "Ctrl+X", 0));
        actionCopy->setText(QApplication::translate("MainWindow", "Copy", 0));
        actionCopy->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", 0));
        actionPaste->setText(QApplication::translate("MainWindow", "Paste", 0));
        actionPaste->setShortcut(QApplication::translate("MainWindow", "Ctrl+V", 0));
        actionSelect_all->setText(QApplication::translate("MainWindow", "Select all", 0));
        actionSelect_all->setShortcut(QApplication::translate("MainWindow", "Ctrl+A", 0));
        actionInvert_selection->setText(QApplication::translate("MainWindow", "Invert selection", 0));
        actionInvert_selection->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+A", 0));
        actionGo_to_diagram->setText(QApplication::translate("MainWindow", "Go to diagram", 0));
        actionFind->setText(QApplication::translate("MainWindow", "Find", 0));
        actionLines_16->setText(QApplication::translate("MainWindow", "Lines 16", 0));
        actionLines_8->setText(QApplication::translate("MainWindow", "Lines 8", 0));
        actionLines_8->setShortcut(QApplication::translate("MainWindow", "Ctrl+2", 0));
        actionDots_16->setText(QApplication::translate("MainWindow", "Dots 16", 0));
        actionDots_16->setShortcut(QApplication::translate("MainWindow", "Ctrl+3", 0));
        actionDots_32->setText(QApplication::translate("MainWindow", "Dots 32", 0));
        actionDots_32->setShortcut(QApplication::translate("MainWindow", "Ctrl+4", 0));
        actionNone->setText(QApplication::translate("MainWindow", "None", 0));
        actionNone->setShortcut(QApplication::translate("MainWindow", "Ctrl+5", 0));
        actionFull_screen->setText(QApplication::translate("MainWindow", "Full screen", 0));
        actionFull_screen->setShortcut(QApplication::translate("MainWindow", "Alt+Return", 0));
        actionZoom_out->setText(QApplication::translate("MainWindow", "Zoom out", 0));
        actionZoom_in->setText(QApplication::translate("MainWindow", "Zoom in", 0));
        actionZoom_reset->setText(QApplication::translate("MainWindow", "Zoom reset", 0));
        actionLayout->setText(QApplication::translate("MainWindow", "Layout", 0));
        actionClass_diagram->setText(QApplication::translate("MainWindow", "Class diagram", 0));
        actionClass_diagram->setShortcut(QApplication::translate("MainWindow", "Alt+G", 0));
        actionSequence_diagram->setText(QApplication::translate("MainWindow", "Sequence diagram", 0));
        actionSequence_diagram->setShortcut(QApplication::translate("MainWindow", "Alt+G", 0));
        actionGenerate_code_for_project->setText(QApplication::translate("MainWindow", "Generate code for project", 0));
        actionGenerate_code_for_project->setShortcut(QString());
        actionSettings->setText(QApplication::translate("MainWindow", "Settings", 0));
        actionEffects->setText(QApplication::translate("MainWindow", "Effects", 0));
        actionHelp->setText(QApplication::translate("MainWindow", "Help", 0));
        actionHelp->setShortcut(QApplication::translate("MainWindow", "Ctrl+H", 0));
        actionAbout->setText(QApplication::translate("MainWindow", "About", 0));
        actionSystem_information->setText(QApplication::translate("MainWindow", "System information", 0));
        actionFile_Toolbar->setText(QApplication::translate("MainWindow", "File Toolbar", 0));
        actionEdit_Toolbar->setText(QApplication::translate("MainWindow", "Edit Toolbar", 0));
        actionView_Toolbar->setText(QApplication::translate("MainWindow", "View Toolbar", 0));
        actionXML_Dump->setText(QApplication::translate("MainWindow", "Class Diagram", 0));
        actionCreate_Diagram_Toolbar->setText(QApplication::translate("MainWindow", "Create Diagram Toolbar", 0));
        actionUse_case_diagram->setText(QApplication::translate("MainWindow", "Use Case Diagram", 0));
        actionActivity_Diagram->setText(QApplication::translate("MainWindow", "Activity Diagram", 0));
        actionState_Diagram->setText(QApplication::translate("MainWindow", "State Diagram", 0));
        actionSequence_Diagram->setText(QApplication::translate("MainWindow", "Sequence Diagram", 0));
        actionCollaboration_Diagram->setText(QApplication::translate("MainWindow", "Collaboration Diagram", 0));
        actionDeploymentDiagram->setText(QApplication::translate("MainWindow", "Deployment Diagram", 0));
        createNewFileButton->setText(QString());
        OpenButton->setText(QString());
        saveButton->setText(QString());
        revertLastChanges->setText(QString());
        revertLastRevert->setText(QString());
        exportProjectButton->setText(QString());
        CloseProjectButton->setText(QString());
        functionalityPictogramButton->setText(QString());
        settingsButton->setText(QString());
        searchButton->setText(QString());
        createNewDiagramOfPrecendenceButton->setText(QString());
        createClassDiagramButton->setText(QString());
        createSequenceDiagramButton->setText(QString());
        createCommunicationDiagramButton->setText(QString());
        createStateDiagramButton->setText(QString());
        createActivityDiagramButton->setText(QString());
        createDeployDiagramButton->setText(QString());
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("MainWindow", "1", 0));

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("MainWindow", "Class Diagram", 0));
        QTreeWidgetItem *___qtreewidgetitem2 = ___qtreewidgetitem1->child(0);
        ___qtreewidgetitem2->setText(0, QApplication::translate("MainWindow", "Class Tree", 0));
        QTreeWidgetItem *___qtreewidgetitem3 = ___qtreewidgetitem2->child(0);
        ___qtreewidgetitem3->setText(0, QApplication::translate("MainWindow", "void set();", 0));
        QTreeWidgetItem *___qtreewidgetitem4 = ___qtreewidgetitem2->child(1);
        ___qtreewidgetitem4->setText(0, QApplication::translate("MainWindow", "const T * get();", 0));
        QTreeWidgetItem *___qtreewidgetitem5 = ___qtreewidgetitem2->child(2);
        ___qtreewidgetitem5->setText(0, QApplication::translate("MainWindow", "void deleteNode(int pos);", 0));
        QTreeWidgetItem *___qtreewidgetitem6 = ___qtreewidgetitem2->child(3);
        ___qtreewidgetitem6->setText(0, QApplication::translate("MainWindow", "void clear();", 0));
        QTreeWidgetItem *___qtreewidgetitem7 = ___qtreewidgetitem1->child(1);
        ___qtreewidgetitem7->setText(0, QApplication::translate("MainWindow", "Agregation bind", 0));
        QTreeWidgetItem *___qtreewidgetitem8 = treeWidget->topLevelItem(1);
        ___qtreewidgetitem8->setText(0, QApplication::translate("MainWindow", "Class Node", 0));
        QTreeWidgetItem *___qtreewidgetitem9 = ___qtreewidgetitem8->child(0);
        ___qtreewidgetitem9->setText(0, QApplication::translate("MainWindow", "void set();", 0));
        QTreeWidgetItem *___qtreewidgetitem10 = ___qtreewidgetitem8->child(1);
        ___qtreewidgetitem10->setText(0, QApplication::translate("MainWindow", "const T * get();", 0));
        treeWidget->setSortingEnabled(__sortingEnabled);

        addDiagramPacketButton->setText(QString());
        addClassOnDiagrammButton->setText(QString());
        addAssociationLinkButton->setText(QString());
        addAgregationLinkButton->setText(QString());
        addCompositionLinkButton->setText(QString());
        addFiniteLinkButton->setText(QString());
        addGeneralizationLinkButton->setText(QString());
        addNewInterfaceOnDiagramButton->setText(QString());
        addRealizationLinkOnDiagramButton->setText(QString());
        createNewAttributeButton->setText(QString());
        createNewOperationButton->setText(QString());
        createAssociationClassButton->setText(QString());
        addCommentOnDiagramButton->setText(QString());
        addCommentLingOnDiagramButton->setText(QString());
#ifndef QT_NO_ACCESSIBILITY
        propertiesTab->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        PrTabNameLabel->setText(QApplication::translate("MainWindow", "Name:", 0));
        prTabNmSpaceLabel->setText(QApplication::translate("MainWindow", "Namespace:", 0));
        prTabNmSpaceComboBox->clear();
        prTabNmSpaceComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Namespace name", 0)
        );
        label_3->setText(QApplication::translate("MainWindow", "Type:", 0));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Type name", 0)
        );
        label_4->setText(QApplication::translate("MainWindow", "Author", 0));
        tabWidget->setTabText(tabWidget->indexOf(propertiesTab), QApplication::translate("MainWindow", "Properties", 0));
        VersionLabel->setText(QApplication::translate("MainWindow", "Version:", 0));
        DocumentationLabel->setText(QApplication::translate("MainWindow", "Documentation:", 0));
        DeprecateLabel->setText(QApplication::translate("MainWindow", "Deprecated:", 0));
        DocumentationcheckBox->setText(QApplication::translate("MainWindow", "CheckBox", 0));
        tabWidget->setTabText(tabWidget->indexOf(DocTab), QApplication::translate("MainWindow", "Documentation", 0));
        label->setText(QApplication::translate("MainWindow", "ToDo items:", 0));
        label_2->setText(QApplication::translate("MainWindow", "ToDo item:", 0));
        ToDoAddButton->setText(QApplication::translate("MainWindow", "Add", 0));
        tabWidget->setTabText(tabWidget->indexOf(ToDoTab), QApplication::translate("MainWindow", "ToDo Items", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", 0));
        menuView->setTitle(QApplication::translate("MainWindow", "View", 0));
        menuAdjust_Grid->setTitle(QApplication::translate("MainWindow", "Adjust Grid", 0));
        menuScale->setTitle(QApplication::translate("MainWindow", "Scale", 0));
        menuToolbars->setTitle(QApplication::translate("MainWindow", "Toolbars", 0));
        menuCreate->setTitle(QApplication::translate("MainWindow", "Create", 0));
        menuArrange->setTitle(QApplication::translate("MainWindow", "Arrange", 0));
        menuAlign->setTitle(QApplication::translate("MainWindow", "Align", 0));
        menuReorder->setTitle(QApplication::translate("MainWindow", "Reorder", 0));
        menuGeneratin->setTitle(QApplication::translate("MainWindow", "Generation", 0));
        menuCritique->setTitle(QApplication::translate("MainWindow", "Critique", 0));
        menuTools->setTitle(QApplication::translate("MainWindow", "Tools", 0));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
