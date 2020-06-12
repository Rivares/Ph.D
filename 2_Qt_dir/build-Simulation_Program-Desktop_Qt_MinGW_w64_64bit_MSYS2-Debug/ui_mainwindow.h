/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QAction *action_3;
    QAction *actionAbout_rectification_column;
    QAction *action3D_model;
    QAction *actionCheck_stat_of_values;
    QWidget *centralWidget;
    QTabWidget *tabGraph;
    QWidget *tabGeneral;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QLineEdit *inputLeftY;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_6;
    QLineEdit *inputRightY;
    QLabel *label_7;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *inputLeftX;
    QLabel *label_3;
    QLineEdit *inputRightX;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_20;
    QSpinBox *spaceParametrBP;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_19;
    QSpinBox *spaceParametrTP;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_21;
    QSpinBox *spaceParametrACU;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_9;
    QSpinBox *spaceParametrEVAP;
    QFrame *line_5;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout_5;
    QFormLayout *formLayout;
    QRadioButton *LVM_BP;
    QRadioButton *EVM_TP;
    QRadioButton *NLVM_BP;
    QRadioButton *EFM_TP;
    QRadioButton *EVM_BP;
    QRadioButton *ACU;
    QRadioButton *EFM_BP;
    QRadioButton *EVAP;
    QRadioButton *BP_EVAP;
    QRadioButton *TP_ACU;
    QRadioButton *TP_BP;
    QRadioButton *FULL_RC;
    QFrame *line_3;
    QVBoxLayout *verticalLayout;
    QPushButton *draw;
    QPushButton *clear;
    QPushButton *save;
    QPushButton *exit;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_11;
    QLabel *label_12;
    QComboBox *firstState;
    QLabel *label_13;
    QComboBox *secondState;
    QLabel *label_28;
    QComboBox *thirdState;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_8;
    QLineEdit *selectStepT;
    QLabel *label_14;
    QLineEdit *selectStepH;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_27;
    QLineEdit *selectDRC;
    QCustomPlot *customPlot;
    QWidget *tabCustomize1;
    QTableWidget *tableBordersAndInitialConditions_BP_1;
    QTableWidget *tableBordersAndInitialConditions_BP_2;
    QTableWidget *tableBordersAndInitialConditions_BP_3;
    QTableWidget *tableBordersAndInitialConditions_BP_4;
    QWidget *tabCustomize2;
    QTableWidget *tableBordersAndInitialConditions_TP_1;
    QTableWidget *tableBordersAndInitialConditions_TP_2;
    QTableWidget *tableBordersAndInitialConditions_TP_4;
    QTableWidget *tableBordersAndInitialConditions_TP_3;
    QWidget *tabCustomize3;
    QTableWidget *tableBordersAndInitialConditions_ACU_4;
    QTableWidget *tableBordersAndInitialConditions_ACU_1;
    QTableWidget *tableBordersAndInitialConditions_ACU_2;
    QTableWidget *tableBordersAndInitialConditions_ACU_3;
    QWidget *tabCustomize4;
    QTableWidget *tableBordersAndInitialConditions_EVAP_2;
    QTableWidget *tableBordersAndInitialConditions_EVAP_4;
    QTableWidget *tableBordersAndInitialConditions_EVAP_3;
    QTableWidget *tableBordersAndInitialConditions_EVAP_1;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menuHelp;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1013, 577);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMaximumSize(QSize(1100, 580));
        action = new QAction(MainWindow);
        action->setObjectName(QString::fromUtf8("action"));
        action_3 = new QAction(MainWindow);
        action_3->setObjectName(QString::fromUtf8("action_3"));
        action_3->setMenuRole(QAction::QuitRole);
        actionAbout_rectification_column = new QAction(MainWindow);
        actionAbout_rectification_column->setObjectName(QString::fromUtf8("actionAbout_rectification_column"));
        action3D_model = new QAction(MainWindow);
        action3D_model->setObjectName(QString::fromUtf8("action3D_model"));
        action3D_model->setCheckable(false);
        action3D_model->setChecked(false);
        action3D_model->setMenuRole(QAction::ApplicationSpecificRole);
        actionCheck_stat_of_values = new QAction(MainWindow);
        actionCheck_stat_of_values->setObjectName(QString::fromUtf8("actionCheck_stat_of_values"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabGraph = new QTabWidget(centralWidget);
        tabGraph->setObjectName(QString::fromUtf8("tabGraph"));
        tabGraph->setGeometry(QRect(10, 0, 991, 531));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tabGraph->sizePolicy().hasHeightForWidth());
        tabGraph->setSizePolicy(sizePolicy1);
        tabGeneral = new QWidget();
        tabGeneral->setObjectName(QString::fromUtf8("tabGeneral"));
        verticalLayoutWidget_2 = new QWidget(tabGeneral);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(710, 0, 271, 491));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget_2);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_4->addWidget(label);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_5 = new QLabel(verticalLayoutWidget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_6->addWidget(label_5);

        inputLeftY = new QLineEdit(verticalLayoutWidget_2);
        inputLeftY->setObjectName(QString::fromUtf8("inputLeftY"));
        inputLeftY->setEnabled(true);
        inputLeftY->setMaximumSize(QSize(50, 16777215));
        inputLeftY->setReadOnly(false);

        horizontalLayout_6->addWidget(inputLeftY);


        horizontalLayout_5->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_6 = new QLabel(verticalLayoutWidget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMaximumSize(QSize(20, 16777215));

        horizontalLayout_8->addWidget(label_6);

        inputRightY = new QLineEdit(verticalLayoutWidget_2);
        inputRightY->setObjectName(QString::fromUtf8("inputRightY"));
        inputRightY->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_8->addWidget(inputRightY);


        horizontalLayout_7->addLayout(horizontalLayout_8);

        label_7 = new QLabel(verticalLayoutWidget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_7->addWidget(label_7, 0, Qt::AlignLeft);


        horizontalLayout_5->addLayout(horizontalLayout_7);


        verticalLayout_4->addLayout(horizontalLayout_5);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(verticalLayoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);


        horizontalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        inputLeftX = new QLineEdit(verticalLayoutWidget_2);
        inputLeftX->setObjectName(QString::fromUtf8("inputLeftX"));
        inputLeftX->setMaximumSize(QSize(15, 16777215));
        inputLeftX->setReadOnly(true);

        horizontalLayout_2->addWidget(inputLeftX);

        label_3 = new QLabel(verticalLayoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(20, 16777215));

        horizontalLayout_2->addWidget(label_3);

        inputRightX = new QLineEdit(verticalLayoutWidget_2);
        inputRightX->setObjectName(QString::fromUtf8("inputRightX"));
        inputRightX->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_2->addWidget(inputRightX);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        label_4 = new QLabel(verticalLayoutWidget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);


        horizontalLayout_4->addLayout(horizontalLayout_3);


        verticalLayout_3->addLayout(horizontalLayout_4);


        verticalLayout_4->addLayout(verticalLayout_3);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(1);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setSizeConstraint(QLayout::SetNoConstraint);
        label_20 = new QLabel(verticalLayoutWidget_2);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setMaximumSize(QSize(200, 16777215));

        horizontalLayout_12->addWidget(label_20, 0, Qt::AlignLeft);

        spaceParametrBP = new QSpinBox(verticalLayoutWidget_2);
        spaceParametrBP->setObjectName(QString::fromUtf8("spaceParametrBP"));
        spaceParametrBP->setMaximumSize(QSize(50, 16777215));
        spaceParametrBP->setAcceptDrops(false);
        spaceParametrBP->setValue(3);

        horizontalLayout_12->addWidget(spaceParametrBP);


        verticalLayout_4->addLayout(horizontalLayout_12);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(1);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        horizontalLayout_15->setSizeConstraint(QLayout::SetNoConstraint);
        label_19 = new QLabel(verticalLayoutWidget_2);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setMaximumSize(QSize(200, 16777215));

        horizontalLayout_15->addWidget(label_19, 0, Qt::AlignLeft);

        spaceParametrTP = new QSpinBox(verticalLayoutWidget_2);
        spaceParametrTP->setObjectName(QString::fromUtf8("spaceParametrTP"));
        spaceParametrTP->setMaximumSize(QSize(50, 16777215));
        spaceParametrTP->setAcceptDrops(false);
        spaceParametrTP->setValue(3);

        horizontalLayout_15->addWidget(spaceParametrTP);


        verticalLayout_4->addLayout(horizontalLayout_15);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(1);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        horizontalLayout_16->setSizeConstraint(QLayout::SetNoConstraint);
        label_21 = new QLabel(verticalLayoutWidget_2);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setMaximumSize(QSize(200, 16777215));

        horizontalLayout_16->addWidget(label_21, 0, Qt::AlignLeft);

        spaceParametrACU = new QSpinBox(verticalLayoutWidget_2);
        spaceParametrACU->setObjectName(QString::fromUtf8("spaceParametrACU"));
        spaceParametrACU->setMaximumSize(QSize(50, 16777215));
        spaceParametrACU->setAcceptDrops(false);
        spaceParametrACU->setValue(3);

        horizontalLayout_16->addWidget(spaceParametrACU);


        verticalLayout_4->addLayout(horizontalLayout_16);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(1);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setSizeConstraint(QLayout::SetNoConstraint);
        label_9 = new QLabel(verticalLayoutWidget_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMaximumSize(QSize(200, 16777215));

        horizontalLayout_11->addWidget(label_9, 0, Qt::AlignLeft);

        spaceParametrEVAP = new QSpinBox(verticalLayoutWidget_2);
        spaceParametrEVAP->setObjectName(QString::fromUtf8("spaceParametrEVAP"));
        spaceParametrEVAP->setMaximumSize(QSize(50, 16777215));
        spaceParametrEVAP->setAcceptDrops(false);
        spaceParametrEVAP->setValue(3);

        horizontalLayout_11->addWidget(spaceParametrEVAP);


        verticalLayout_4->addLayout(horizontalLayout_11);

        line_5 = new QFrame(verticalLayoutWidget_2);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line_5);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        LVM_BP = new QRadioButton(verticalLayoutWidget_2);
        LVM_BP->setObjectName(QString::fromUtf8("LVM_BP"));

        formLayout->setWidget(0, QFormLayout::LabelRole, LVM_BP);

        EVM_TP = new QRadioButton(verticalLayoutWidget_2);
        EVM_TP->setObjectName(QString::fromUtf8("EVM_TP"));

        formLayout->setWidget(0, QFormLayout::FieldRole, EVM_TP);

        NLVM_BP = new QRadioButton(verticalLayoutWidget_2);
        NLVM_BP->setObjectName(QString::fromUtf8("NLVM_BP"));

        formLayout->setWidget(1, QFormLayout::LabelRole, NLVM_BP);

        EFM_TP = new QRadioButton(verticalLayoutWidget_2);
        EFM_TP->setObjectName(QString::fromUtf8("EFM_TP"));

        formLayout->setWidget(1, QFormLayout::FieldRole, EFM_TP);

        EVM_BP = new QRadioButton(verticalLayoutWidget_2);
        EVM_BP->setObjectName(QString::fromUtf8("EVM_BP"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(EVM_BP->sizePolicy().hasHeightForWidth());
        EVM_BP->setSizePolicy(sizePolicy2);
        EVM_BP->setMinimumSize(QSize(55, 20));
        EVM_BP->setMaximumSize(QSize(300, 22));
        QFont font;
        font.setItalic(false);
        font.setUnderline(false);
        font.setKerning(true);
        EVM_BP->setFont(font);
        EVM_BP->setChecked(false);
        EVM_BP->setAutoRepeat(false);

        formLayout->setWidget(2, QFormLayout::LabelRole, EVM_BP);

        ACU = new QRadioButton(verticalLayoutWidget_2);
        ACU->setObjectName(QString::fromUtf8("ACU"));

        formLayout->setWidget(2, QFormLayout::FieldRole, ACU);

        EFM_BP = new QRadioButton(verticalLayoutWidget_2);
        EFM_BP->setObjectName(QString::fromUtf8("EFM_BP"));
        EFM_BP->setMaximumSize(QSize(300, 16777215));

        formLayout->setWidget(3, QFormLayout::LabelRole, EFM_BP);

        EVAP = new QRadioButton(verticalLayoutWidget_2);
        EVAP->setObjectName(QString::fromUtf8("EVAP"));

        formLayout->setWidget(3, QFormLayout::FieldRole, EVAP);

        BP_EVAP = new QRadioButton(verticalLayoutWidget_2);
        BP_EVAP->setObjectName(QString::fromUtf8("BP_EVAP"));

        formLayout->setWidget(4, QFormLayout::LabelRole, BP_EVAP);

        TP_ACU = new QRadioButton(verticalLayoutWidget_2);
        TP_ACU->setObjectName(QString::fromUtf8("TP_ACU"));
        sizePolicy2.setHeightForWidth(TP_ACU->sizePolicy().hasHeightForWidth());
        TP_ACU->setSizePolicy(sizePolicy2);
        TP_ACU->setMinimumSize(QSize(55, 20));
        TP_ACU->setMaximumSize(QSize(300, 22));
        TP_ACU->setFont(font);
        TP_ACU->setChecked(false);
        TP_ACU->setAutoRepeat(false);

        formLayout->setWidget(4, QFormLayout::FieldRole, TP_ACU);

        TP_BP = new QRadioButton(verticalLayoutWidget_2);
        TP_BP->setObjectName(QString::fromUtf8("TP_BP"));

        formLayout->setWidget(5, QFormLayout::LabelRole, TP_BP);

        FULL_RC = new QRadioButton(verticalLayoutWidget_2);
        FULL_RC->setObjectName(QString::fromUtf8("FULL_RC"));

        formLayout->setWidget(5, QFormLayout::FieldRole, FULL_RC);


        verticalLayout_5->addLayout(formLayout);


        verticalLayout_2->addLayout(verticalLayout_5);


        verticalLayout_4->addLayout(verticalLayout_2);

        line_3 = new QFrame(verticalLayoutWidget_2);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        draw = new QPushButton(verticalLayoutWidget_2);
        draw->setObjectName(QString::fromUtf8("draw"));

        verticalLayout->addWidget(draw);

        clear = new QPushButton(verticalLayoutWidget_2);
        clear->setObjectName(QString::fromUtf8("clear"));

        verticalLayout->addWidget(clear);

        save = new QPushButton(verticalLayoutWidget_2);
        save->setObjectName(QString::fromUtf8("save"));

        verticalLayout->addWidget(save);

        exit = new QPushButton(verticalLayoutWidget_2);
        exit->setObjectName(QString::fromUtf8("exit"));

        verticalLayout->addWidget(exit);


        verticalLayout_4->addLayout(verticalLayout);

        verticalLayoutWidget = new QWidget(tabGeneral);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(40, 390, 661, 101));
        verticalLayout_6 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        label_11 = new QLabel(verticalLayoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy3);

        horizontalLayout_14->addWidget(label_11);

        label_12 = new QLabel(verticalLayoutWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy4);
        label_12->setMinimumSize(QSize(80, 0));
        label_12->setMaximumSize(QSize(180, 16777215));
        label_12->setBaseSize(QSize(80, 0));
        label_12->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_14->addWidget(label_12);

        firstState = new QComboBox(verticalLayoutWidget);
        firstState->setObjectName(QString::fromUtf8("firstState"));

        horizontalLayout_14->addWidget(firstState);

        label_13 = new QLabel(verticalLayoutWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_14->addWidget(label_13);

        secondState = new QComboBox(verticalLayoutWidget);
        secondState->setObjectName(QString::fromUtf8("secondState"));

        horizontalLayout_14->addWidget(secondState);

        label_28 = new QLabel(verticalLayoutWidget);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        horizontalLayout_14->addWidget(label_28);

        thirdState = new QComboBox(verticalLayoutWidget);
        thirdState->setObjectName(QString::fromUtf8("thirdState"));

        horizontalLayout_14->addWidget(thirdState);


        verticalLayout_6->addLayout(horizontalLayout_14);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_8 = new QLabel(verticalLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy4.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy4);
        label_8->setMinimumSize(QSize(20, 20));
        label_8->setMaximumSize(QSize(230, 20));
        label_8->setBaseSize(QSize(30, 0));

        horizontalLayout_9->addWidget(label_8);

        selectStepT = new QLineEdit(verticalLayoutWidget);
        selectStepT->setObjectName(QString::fromUtf8("selectStepT"));
        sizePolicy1.setHeightForWidth(selectStepT->sizePolicy().hasHeightForWidth());
        selectStepT->setSizePolicy(sizePolicy1);
        selectStepT->setMinimumSize(QSize(0, 21));
        selectStepT->setMaximumSize(QSize(70, 21));
        selectStepT->setBaseSize(QSize(30, 30));

        horizontalLayout_9->addWidget(selectStepT);

        label_14 = new QLabel(verticalLayoutWidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        sizePolicy4.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy4);
        label_14->setMinimumSize(QSize(0, 20));
        label_14->setMaximumSize(QSize(260, 20));
        label_14->setBaseSize(QSize(30, 0));

        horizontalLayout_9->addWidget(label_14);

        selectStepH = new QLineEdit(verticalLayoutWidget);
        selectStepH->setObjectName(QString::fromUtf8("selectStepH"));
        sizePolicy1.setHeightForWidth(selectStepH->sizePolicy().hasHeightForWidth());
        selectStepH->setSizePolicy(sizePolicy1);
        selectStepH->setMinimumSize(QSize(0, 21));
        selectStepH->setMaximumSize(QSize(70, 21));
        selectStepH->setBaseSize(QSize(30, 30));
        selectStepH->setReadOnly(true);

        horizontalLayout_9->addWidget(selectStepH);


        verticalLayout_6->addLayout(horizontalLayout_9);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_27 = new QLabel(verticalLayoutWidget);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        sizePolicy4.setHeightForWidth(label_27->sizePolicy().hasHeightForWidth());
        label_27->setSizePolicy(sizePolicy4);
        label_27->setMinimumSize(QSize(20, 20));
        label_27->setMaximumSize(QSize(240, 20));
        label_27->setBaseSize(QSize(30, 0));

        horizontalLayout_13->addWidget(label_27, 0, Qt::AlignRight);

        selectDRC = new QLineEdit(verticalLayoutWidget);
        selectDRC->setObjectName(QString::fromUtf8("selectDRC"));
        sizePolicy1.setHeightForWidth(selectDRC->sizePolicy().hasHeightForWidth());
        selectDRC->setSizePolicy(sizePolicy1);
        selectDRC->setMinimumSize(QSize(0, 21));
        selectDRC->setMaximumSize(QSize(70, 21));
        selectDRC->setBaseSize(QSize(30, 30));

        horizontalLayout_13->addWidget(selectDRC);


        verticalLayout_6->addLayout(horizontalLayout_13);

        customPlot = new QCustomPlot(tabGeneral);
        customPlot->setObjectName(QString::fromUtf8("customPlot"));
        customPlot->setGeometry(QRect(10, 10, 691, 371));
        tabGraph->addTab(tabGeneral, QString());
        tabCustomize1 = new QWidget();
        tabCustomize1->setObjectName(QString::fromUtf8("tabCustomize1"));
        tableBordersAndInitialConditions_BP_1 = new QTableWidget(tabCustomize1);
        if (tableBordersAndInitialConditions_BP_1->columnCount() < 5)
            tableBordersAndInitialConditions_BP_1->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableBordersAndInitialConditions_BP_1->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableBordersAndInitialConditions_BP_1->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableBordersAndInitialConditions_BP_1->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableBordersAndInitialConditions_BP_1->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableBordersAndInitialConditions_BP_1->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        if (tableBordersAndInitialConditions_BP_1->rowCount() < 2)
            tableBordersAndInitialConditions_BP_1->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableBordersAndInitialConditions_BP_1->setVerticalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableBordersAndInitialConditions_BP_1->setVerticalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableBordersAndInitialConditions_BP_1->setItem(1, 1, __qtablewidgetitem7);
        tableBordersAndInitialConditions_BP_1->setObjectName(QString::fromUtf8("tableBordersAndInitialConditions_BP_1"));
        tableBordersAndInitialConditions_BP_1->setGeometry(QRect(90, 30, 751, 101));
        tableBordersAndInitialConditions_BP_1->setSelectionMode(QAbstractItemView::SingleSelection);
        tableBordersAndInitialConditions_BP_2 = new QTableWidget(tabCustomize1);
        if (tableBordersAndInitialConditions_BP_2->columnCount() < 5)
            tableBordersAndInitialConditions_BP_2->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableBordersAndInitialConditions_BP_2->setHorizontalHeaderItem(0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableBordersAndInitialConditions_BP_2->setHorizontalHeaderItem(1, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableBordersAndInitialConditions_BP_2->setHorizontalHeaderItem(2, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableBordersAndInitialConditions_BP_2->setHorizontalHeaderItem(3, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableBordersAndInitialConditions_BP_2->setHorizontalHeaderItem(4, __qtablewidgetitem12);
        if (tableBordersAndInitialConditions_BP_2->rowCount() < 2)
            tableBordersAndInitialConditions_BP_2->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableBordersAndInitialConditions_BP_2->setVerticalHeaderItem(0, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableBordersAndInitialConditions_BP_2->setVerticalHeaderItem(1, __qtablewidgetitem14);
        tableBordersAndInitialConditions_BP_2->setObjectName(QString::fromUtf8("tableBordersAndInitialConditions_BP_2"));
        tableBordersAndInitialConditions_BP_2->setGeometry(QRect(90, 140, 751, 101));
        tableBordersAndInitialConditions_BP_2->setSelectionMode(QAbstractItemView::SingleSelection);
        tableBordersAndInitialConditions_BP_3 = new QTableWidget(tabCustomize1);
        if (tableBordersAndInitialConditions_BP_3->columnCount() < 5)
            tableBordersAndInitialConditions_BP_3->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableBordersAndInitialConditions_BP_3->setHorizontalHeaderItem(0, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableBordersAndInitialConditions_BP_3->setHorizontalHeaderItem(1, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableBordersAndInitialConditions_BP_3->setHorizontalHeaderItem(2, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableBordersAndInitialConditions_BP_3->setHorizontalHeaderItem(3, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableBordersAndInitialConditions_BP_3->setHorizontalHeaderItem(4, __qtablewidgetitem19);
        if (tableBordersAndInitialConditions_BP_3->rowCount() < 2)
            tableBordersAndInitialConditions_BP_3->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableBordersAndInitialConditions_BP_3->setVerticalHeaderItem(0, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableBordersAndInitialConditions_BP_3->setVerticalHeaderItem(1, __qtablewidgetitem21);
        tableBordersAndInitialConditions_BP_3->setObjectName(QString::fromUtf8("tableBordersAndInitialConditions_BP_3"));
        tableBordersAndInitialConditions_BP_3->setGeometry(QRect(90, 250, 751, 101));
        tableBordersAndInitialConditions_BP_3->setSelectionMode(QAbstractItemView::SingleSelection);
        tableBordersAndInitialConditions_BP_4 = new QTableWidget(tabCustomize1);
        if (tableBordersAndInitialConditions_BP_4->columnCount() < 5)
            tableBordersAndInitialConditions_BP_4->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableBordersAndInitialConditions_BP_4->setHorizontalHeaderItem(0, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableBordersAndInitialConditions_BP_4->setHorizontalHeaderItem(1, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableBordersAndInitialConditions_BP_4->setHorizontalHeaderItem(2, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableBordersAndInitialConditions_BP_4->setHorizontalHeaderItem(3, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tableBordersAndInitialConditions_BP_4->setHorizontalHeaderItem(4, __qtablewidgetitem26);
        if (tableBordersAndInitialConditions_BP_4->rowCount() < 2)
            tableBordersAndInitialConditions_BP_4->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tableBordersAndInitialConditions_BP_4->setVerticalHeaderItem(0, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        tableBordersAndInitialConditions_BP_4->setVerticalHeaderItem(1, __qtablewidgetitem28);
        tableBordersAndInitialConditions_BP_4->setObjectName(QString::fromUtf8("tableBordersAndInitialConditions_BP_4"));
        tableBordersAndInitialConditions_BP_4->setGeometry(QRect(90, 360, 751, 101));
        tableBordersAndInitialConditions_BP_4->setSelectionMode(QAbstractItemView::SingleSelection);
        tabGraph->addTab(tabCustomize1, QString());
        tabCustomize2 = new QWidget();
        tabCustomize2->setObjectName(QString::fromUtf8("tabCustomize2"));
        tableBordersAndInitialConditions_TP_1 = new QTableWidget(tabCustomize2);
        if (tableBordersAndInitialConditions_TP_1->columnCount() < 5)
            tableBordersAndInitialConditions_TP_1->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        tableBordersAndInitialConditions_TP_1->setHorizontalHeaderItem(0, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        tableBordersAndInitialConditions_TP_1->setHorizontalHeaderItem(1, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        tableBordersAndInitialConditions_TP_1->setHorizontalHeaderItem(2, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        tableBordersAndInitialConditions_TP_1->setHorizontalHeaderItem(3, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        tableBordersAndInitialConditions_TP_1->setHorizontalHeaderItem(4, __qtablewidgetitem33);
        if (tableBordersAndInitialConditions_TP_1->rowCount() < 2)
            tableBordersAndInitialConditions_TP_1->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        tableBordersAndInitialConditions_TP_1->setVerticalHeaderItem(0, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        tableBordersAndInitialConditions_TP_1->setVerticalHeaderItem(1, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        tableBordersAndInitialConditions_TP_1->setItem(1, 1, __qtablewidgetitem36);
        tableBordersAndInitialConditions_TP_1->setObjectName(QString::fromUtf8("tableBordersAndInitialConditions_TP_1"));
        tableBordersAndInitialConditions_TP_1->setGeometry(QRect(90, 30, 751, 101));
        tableBordersAndInitialConditions_TP_1->setSelectionMode(QAbstractItemView::SingleSelection);
        tableBordersAndInitialConditions_TP_2 = new QTableWidget(tabCustomize2);
        if (tableBordersAndInitialConditions_TP_2->columnCount() < 5)
            tableBordersAndInitialConditions_TP_2->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        tableBordersAndInitialConditions_TP_2->setHorizontalHeaderItem(0, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        tableBordersAndInitialConditions_TP_2->setHorizontalHeaderItem(1, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        tableBordersAndInitialConditions_TP_2->setHorizontalHeaderItem(2, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        tableBordersAndInitialConditions_TP_2->setHorizontalHeaderItem(3, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        tableBordersAndInitialConditions_TP_2->setHorizontalHeaderItem(4, __qtablewidgetitem41);
        if (tableBordersAndInitialConditions_TP_2->rowCount() < 2)
            tableBordersAndInitialConditions_TP_2->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        tableBordersAndInitialConditions_TP_2->setVerticalHeaderItem(0, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        tableBordersAndInitialConditions_TP_2->setVerticalHeaderItem(1, __qtablewidgetitem43);
        tableBordersAndInitialConditions_TP_2->setObjectName(QString::fromUtf8("tableBordersAndInitialConditions_TP_2"));
        tableBordersAndInitialConditions_TP_2->setGeometry(QRect(90, 140, 751, 101));
        tableBordersAndInitialConditions_TP_2->setSelectionMode(QAbstractItemView::SingleSelection);
        tableBordersAndInitialConditions_TP_4 = new QTableWidget(tabCustomize2);
        if (tableBordersAndInitialConditions_TP_4->columnCount() < 5)
            tableBordersAndInitialConditions_TP_4->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        tableBordersAndInitialConditions_TP_4->setHorizontalHeaderItem(0, __qtablewidgetitem44);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        tableBordersAndInitialConditions_TP_4->setHorizontalHeaderItem(1, __qtablewidgetitem45);
        QTableWidgetItem *__qtablewidgetitem46 = new QTableWidgetItem();
        tableBordersAndInitialConditions_TP_4->setHorizontalHeaderItem(2, __qtablewidgetitem46);
        QTableWidgetItem *__qtablewidgetitem47 = new QTableWidgetItem();
        tableBordersAndInitialConditions_TP_4->setHorizontalHeaderItem(3, __qtablewidgetitem47);
        QTableWidgetItem *__qtablewidgetitem48 = new QTableWidgetItem();
        tableBordersAndInitialConditions_TP_4->setHorizontalHeaderItem(4, __qtablewidgetitem48);
        if (tableBordersAndInitialConditions_TP_4->rowCount() < 2)
            tableBordersAndInitialConditions_TP_4->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem49 = new QTableWidgetItem();
        tableBordersAndInitialConditions_TP_4->setVerticalHeaderItem(0, __qtablewidgetitem49);
        QTableWidgetItem *__qtablewidgetitem50 = new QTableWidgetItem();
        tableBordersAndInitialConditions_TP_4->setVerticalHeaderItem(1, __qtablewidgetitem50);
        tableBordersAndInitialConditions_TP_4->setObjectName(QString::fromUtf8("tableBordersAndInitialConditions_TP_4"));
        tableBordersAndInitialConditions_TP_4->setGeometry(QRect(90, 360, 751, 101));
        tableBordersAndInitialConditions_TP_4->setSelectionMode(QAbstractItemView::SingleSelection);
        tableBordersAndInitialConditions_TP_3 = new QTableWidget(tabCustomize2);
        if (tableBordersAndInitialConditions_TP_3->columnCount() < 5)
            tableBordersAndInitialConditions_TP_3->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem51 = new QTableWidgetItem();
        tableBordersAndInitialConditions_TP_3->setHorizontalHeaderItem(0, __qtablewidgetitem51);
        QTableWidgetItem *__qtablewidgetitem52 = new QTableWidgetItem();
        tableBordersAndInitialConditions_TP_3->setHorizontalHeaderItem(1, __qtablewidgetitem52);
        QTableWidgetItem *__qtablewidgetitem53 = new QTableWidgetItem();
        tableBordersAndInitialConditions_TP_3->setHorizontalHeaderItem(2, __qtablewidgetitem53);
        QTableWidgetItem *__qtablewidgetitem54 = new QTableWidgetItem();
        tableBordersAndInitialConditions_TP_3->setHorizontalHeaderItem(3, __qtablewidgetitem54);
        QTableWidgetItem *__qtablewidgetitem55 = new QTableWidgetItem();
        tableBordersAndInitialConditions_TP_3->setHorizontalHeaderItem(4, __qtablewidgetitem55);
        if (tableBordersAndInitialConditions_TP_3->rowCount() < 2)
            tableBordersAndInitialConditions_TP_3->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem56 = new QTableWidgetItem();
        tableBordersAndInitialConditions_TP_3->setVerticalHeaderItem(0, __qtablewidgetitem56);
        QTableWidgetItem *__qtablewidgetitem57 = new QTableWidgetItem();
        tableBordersAndInitialConditions_TP_3->setVerticalHeaderItem(1, __qtablewidgetitem57);
        tableBordersAndInitialConditions_TP_3->setObjectName(QString::fromUtf8("tableBordersAndInitialConditions_TP_3"));
        tableBordersAndInitialConditions_TP_3->setGeometry(QRect(90, 250, 751, 101));
        tableBordersAndInitialConditions_TP_3->setSelectionMode(QAbstractItemView::SingleSelection);
        tabGraph->addTab(tabCustomize2, QString());
        tabCustomize3 = new QWidget();
        tabCustomize3->setObjectName(QString::fromUtf8("tabCustomize3"));
        tableBordersAndInitialConditions_ACU_4 = new QTableWidget(tabCustomize3);
        if (tableBordersAndInitialConditions_ACU_4->columnCount() < 5)
            tableBordersAndInitialConditions_ACU_4->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem58 = new QTableWidgetItem();
        tableBordersAndInitialConditions_ACU_4->setHorizontalHeaderItem(0, __qtablewidgetitem58);
        QTableWidgetItem *__qtablewidgetitem59 = new QTableWidgetItem();
        tableBordersAndInitialConditions_ACU_4->setHorizontalHeaderItem(1, __qtablewidgetitem59);
        QTableWidgetItem *__qtablewidgetitem60 = new QTableWidgetItem();
        tableBordersAndInitialConditions_ACU_4->setHorizontalHeaderItem(2, __qtablewidgetitem60);
        QTableWidgetItem *__qtablewidgetitem61 = new QTableWidgetItem();
        tableBordersAndInitialConditions_ACU_4->setHorizontalHeaderItem(3, __qtablewidgetitem61);
        QTableWidgetItem *__qtablewidgetitem62 = new QTableWidgetItem();
        tableBordersAndInitialConditions_ACU_4->setHorizontalHeaderItem(4, __qtablewidgetitem62);
        if (tableBordersAndInitialConditions_ACU_4->rowCount() < 2)
            tableBordersAndInitialConditions_ACU_4->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem63 = new QTableWidgetItem();
        tableBordersAndInitialConditions_ACU_4->setVerticalHeaderItem(0, __qtablewidgetitem63);
        QTableWidgetItem *__qtablewidgetitem64 = new QTableWidgetItem();
        tableBordersAndInitialConditions_ACU_4->setVerticalHeaderItem(1, __qtablewidgetitem64);
        tableBordersAndInitialConditions_ACU_4->setObjectName(QString::fromUtf8("tableBordersAndInitialConditions_ACU_4"));
        tableBordersAndInitialConditions_ACU_4->setGeometry(QRect(90, 360, 751, 101));
        tableBordersAndInitialConditions_ACU_4->setSelectionMode(QAbstractItemView::SingleSelection);
        tableBordersAndInitialConditions_ACU_1 = new QTableWidget(tabCustomize3);
        if (tableBordersAndInitialConditions_ACU_1->columnCount() < 5)
            tableBordersAndInitialConditions_ACU_1->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem65 = new QTableWidgetItem();
        tableBordersAndInitialConditions_ACU_1->setHorizontalHeaderItem(0, __qtablewidgetitem65);
        QTableWidgetItem *__qtablewidgetitem66 = new QTableWidgetItem();
        tableBordersAndInitialConditions_ACU_1->setHorizontalHeaderItem(1, __qtablewidgetitem66);
        QTableWidgetItem *__qtablewidgetitem67 = new QTableWidgetItem();
        tableBordersAndInitialConditions_ACU_1->setHorizontalHeaderItem(2, __qtablewidgetitem67);
        QTableWidgetItem *__qtablewidgetitem68 = new QTableWidgetItem();
        tableBordersAndInitialConditions_ACU_1->setHorizontalHeaderItem(3, __qtablewidgetitem68);
        QTableWidgetItem *__qtablewidgetitem69 = new QTableWidgetItem();
        tableBordersAndInitialConditions_ACU_1->setHorizontalHeaderItem(4, __qtablewidgetitem69);
        if (tableBordersAndInitialConditions_ACU_1->rowCount() < 2)
            tableBordersAndInitialConditions_ACU_1->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem70 = new QTableWidgetItem();
        tableBordersAndInitialConditions_ACU_1->setVerticalHeaderItem(0, __qtablewidgetitem70);
        QTableWidgetItem *__qtablewidgetitem71 = new QTableWidgetItem();
        tableBordersAndInitialConditions_ACU_1->setVerticalHeaderItem(1, __qtablewidgetitem71);
        QTableWidgetItem *__qtablewidgetitem72 = new QTableWidgetItem();
        tableBordersAndInitialConditions_ACU_1->setItem(1, 1, __qtablewidgetitem72);
        tableBordersAndInitialConditions_ACU_1->setObjectName(QString::fromUtf8("tableBordersAndInitialConditions_ACU_1"));
        tableBordersAndInitialConditions_ACU_1->setGeometry(QRect(90, 30, 751, 101));
        tableBordersAndInitialConditions_ACU_1->setSelectionMode(QAbstractItemView::SingleSelection);
        tableBordersAndInitialConditions_ACU_2 = new QTableWidget(tabCustomize3);
        if (tableBordersAndInitialConditions_ACU_2->columnCount() < 5)
            tableBordersAndInitialConditions_ACU_2->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem73 = new QTableWidgetItem();
        tableBordersAndInitialConditions_ACU_2->setHorizontalHeaderItem(0, __qtablewidgetitem73);
        QTableWidgetItem *__qtablewidgetitem74 = new QTableWidgetItem();
        tableBordersAndInitialConditions_ACU_2->setHorizontalHeaderItem(1, __qtablewidgetitem74);
        QTableWidgetItem *__qtablewidgetitem75 = new QTableWidgetItem();
        tableBordersAndInitialConditions_ACU_2->setHorizontalHeaderItem(2, __qtablewidgetitem75);
        QTableWidgetItem *__qtablewidgetitem76 = new QTableWidgetItem();
        tableBordersAndInitialConditions_ACU_2->setHorizontalHeaderItem(3, __qtablewidgetitem76);
        QTableWidgetItem *__qtablewidgetitem77 = new QTableWidgetItem();
        tableBordersAndInitialConditions_ACU_2->setHorizontalHeaderItem(4, __qtablewidgetitem77);
        if (tableBordersAndInitialConditions_ACU_2->rowCount() < 2)
            tableBordersAndInitialConditions_ACU_2->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem78 = new QTableWidgetItem();
        tableBordersAndInitialConditions_ACU_2->setVerticalHeaderItem(0, __qtablewidgetitem78);
        QTableWidgetItem *__qtablewidgetitem79 = new QTableWidgetItem();
        tableBordersAndInitialConditions_ACU_2->setVerticalHeaderItem(1, __qtablewidgetitem79);
        tableBordersAndInitialConditions_ACU_2->setObjectName(QString::fromUtf8("tableBordersAndInitialConditions_ACU_2"));
        tableBordersAndInitialConditions_ACU_2->setGeometry(QRect(90, 140, 751, 101));
        tableBordersAndInitialConditions_ACU_2->setSelectionMode(QAbstractItemView::SingleSelection);
        tableBordersAndInitialConditions_ACU_3 = new QTableWidget(tabCustomize3);
        if (tableBordersAndInitialConditions_ACU_3->columnCount() < 5)
            tableBordersAndInitialConditions_ACU_3->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem80 = new QTableWidgetItem();
        tableBordersAndInitialConditions_ACU_3->setHorizontalHeaderItem(0, __qtablewidgetitem80);
        QTableWidgetItem *__qtablewidgetitem81 = new QTableWidgetItem();
        tableBordersAndInitialConditions_ACU_3->setHorizontalHeaderItem(1, __qtablewidgetitem81);
        QTableWidgetItem *__qtablewidgetitem82 = new QTableWidgetItem();
        tableBordersAndInitialConditions_ACU_3->setHorizontalHeaderItem(2, __qtablewidgetitem82);
        QTableWidgetItem *__qtablewidgetitem83 = new QTableWidgetItem();
        tableBordersAndInitialConditions_ACU_3->setHorizontalHeaderItem(3, __qtablewidgetitem83);
        QTableWidgetItem *__qtablewidgetitem84 = new QTableWidgetItem();
        tableBordersAndInitialConditions_ACU_3->setHorizontalHeaderItem(4, __qtablewidgetitem84);
        if (tableBordersAndInitialConditions_ACU_3->rowCount() < 2)
            tableBordersAndInitialConditions_ACU_3->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem85 = new QTableWidgetItem();
        tableBordersAndInitialConditions_ACU_3->setVerticalHeaderItem(0, __qtablewidgetitem85);
        QTableWidgetItem *__qtablewidgetitem86 = new QTableWidgetItem();
        tableBordersAndInitialConditions_ACU_3->setVerticalHeaderItem(1, __qtablewidgetitem86);
        tableBordersAndInitialConditions_ACU_3->setObjectName(QString::fromUtf8("tableBordersAndInitialConditions_ACU_3"));
        tableBordersAndInitialConditions_ACU_3->setGeometry(QRect(90, 250, 751, 101));
        tableBordersAndInitialConditions_ACU_3->setSelectionMode(QAbstractItemView::SingleSelection);
        tabGraph->addTab(tabCustomize3, QString());
        tabCustomize4 = new QWidget();
        tabCustomize4->setObjectName(QString::fromUtf8("tabCustomize4"));
        tableBordersAndInitialConditions_EVAP_2 = new QTableWidget(tabCustomize4);
        if (tableBordersAndInitialConditions_EVAP_2->columnCount() < 5)
            tableBordersAndInitialConditions_EVAP_2->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem87 = new QTableWidgetItem();
        tableBordersAndInitialConditions_EVAP_2->setHorizontalHeaderItem(0, __qtablewidgetitem87);
        QTableWidgetItem *__qtablewidgetitem88 = new QTableWidgetItem();
        tableBordersAndInitialConditions_EVAP_2->setHorizontalHeaderItem(1, __qtablewidgetitem88);
        QTableWidgetItem *__qtablewidgetitem89 = new QTableWidgetItem();
        tableBordersAndInitialConditions_EVAP_2->setHorizontalHeaderItem(2, __qtablewidgetitem89);
        QTableWidgetItem *__qtablewidgetitem90 = new QTableWidgetItem();
        tableBordersAndInitialConditions_EVAP_2->setHorizontalHeaderItem(3, __qtablewidgetitem90);
        QTableWidgetItem *__qtablewidgetitem91 = new QTableWidgetItem();
        tableBordersAndInitialConditions_EVAP_2->setHorizontalHeaderItem(4, __qtablewidgetitem91);
        if (tableBordersAndInitialConditions_EVAP_2->rowCount() < 2)
            tableBordersAndInitialConditions_EVAP_2->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem92 = new QTableWidgetItem();
        tableBordersAndInitialConditions_EVAP_2->setVerticalHeaderItem(0, __qtablewidgetitem92);
        QTableWidgetItem *__qtablewidgetitem93 = new QTableWidgetItem();
        tableBordersAndInitialConditions_EVAP_2->setVerticalHeaderItem(1, __qtablewidgetitem93);
        tableBordersAndInitialConditions_EVAP_2->setObjectName(QString::fromUtf8("tableBordersAndInitialConditions_EVAP_2"));
        tableBordersAndInitialConditions_EVAP_2->setGeometry(QRect(90, 140, 751, 101));
        tableBordersAndInitialConditions_EVAP_2->setSelectionMode(QAbstractItemView::SingleSelection);
        tableBordersAndInitialConditions_EVAP_4 = new QTableWidget(tabCustomize4);
        if (tableBordersAndInitialConditions_EVAP_4->columnCount() < 5)
            tableBordersAndInitialConditions_EVAP_4->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem94 = new QTableWidgetItem();
        tableBordersAndInitialConditions_EVAP_4->setHorizontalHeaderItem(0, __qtablewidgetitem94);
        QTableWidgetItem *__qtablewidgetitem95 = new QTableWidgetItem();
        tableBordersAndInitialConditions_EVAP_4->setHorizontalHeaderItem(1, __qtablewidgetitem95);
        QTableWidgetItem *__qtablewidgetitem96 = new QTableWidgetItem();
        tableBordersAndInitialConditions_EVAP_4->setHorizontalHeaderItem(2, __qtablewidgetitem96);
        QTableWidgetItem *__qtablewidgetitem97 = new QTableWidgetItem();
        tableBordersAndInitialConditions_EVAP_4->setHorizontalHeaderItem(3, __qtablewidgetitem97);
        QTableWidgetItem *__qtablewidgetitem98 = new QTableWidgetItem();
        tableBordersAndInitialConditions_EVAP_4->setHorizontalHeaderItem(4, __qtablewidgetitem98);
        if (tableBordersAndInitialConditions_EVAP_4->rowCount() < 2)
            tableBordersAndInitialConditions_EVAP_4->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem99 = new QTableWidgetItem();
        tableBordersAndInitialConditions_EVAP_4->setVerticalHeaderItem(0, __qtablewidgetitem99);
        QTableWidgetItem *__qtablewidgetitem100 = new QTableWidgetItem();
        tableBordersAndInitialConditions_EVAP_4->setVerticalHeaderItem(1, __qtablewidgetitem100);
        tableBordersAndInitialConditions_EVAP_4->setObjectName(QString::fromUtf8("tableBordersAndInitialConditions_EVAP_4"));
        tableBordersAndInitialConditions_EVAP_4->setGeometry(QRect(90, 360, 751, 101));
        tableBordersAndInitialConditions_EVAP_4->setSelectionMode(QAbstractItemView::SingleSelection);
        tableBordersAndInitialConditions_EVAP_3 = new QTableWidget(tabCustomize4);
        if (tableBordersAndInitialConditions_EVAP_3->columnCount() < 5)
            tableBordersAndInitialConditions_EVAP_3->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem101 = new QTableWidgetItem();
        tableBordersAndInitialConditions_EVAP_3->setHorizontalHeaderItem(0, __qtablewidgetitem101);
        QTableWidgetItem *__qtablewidgetitem102 = new QTableWidgetItem();
        tableBordersAndInitialConditions_EVAP_3->setHorizontalHeaderItem(1, __qtablewidgetitem102);
        QTableWidgetItem *__qtablewidgetitem103 = new QTableWidgetItem();
        tableBordersAndInitialConditions_EVAP_3->setHorizontalHeaderItem(2, __qtablewidgetitem103);
        QTableWidgetItem *__qtablewidgetitem104 = new QTableWidgetItem();
        tableBordersAndInitialConditions_EVAP_3->setHorizontalHeaderItem(3, __qtablewidgetitem104);
        QTableWidgetItem *__qtablewidgetitem105 = new QTableWidgetItem();
        tableBordersAndInitialConditions_EVAP_3->setHorizontalHeaderItem(4, __qtablewidgetitem105);
        if (tableBordersAndInitialConditions_EVAP_3->rowCount() < 2)
            tableBordersAndInitialConditions_EVAP_3->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem106 = new QTableWidgetItem();
        tableBordersAndInitialConditions_EVAP_3->setVerticalHeaderItem(0, __qtablewidgetitem106);
        QTableWidgetItem *__qtablewidgetitem107 = new QTableWidgetItem();
        tableBordersAndInitialConditions_EVAP_3->setVerticalHeaderItem(1, __qtablewidgetitem107);
        tableBordersAndInitialConditions_EVAP_3->setObjectName(QString::fromUtf8("tableBordersAndInitialConditions_EVAP_3"));
        tableBordersAndInitialConditions_EVAP_3->setGeometry(QRect(90, 250, 751, 101));
        tableBordersAndInitialConditions_EVAP_3->setSelectionMode(QAbstractItemView::SingleSelection);
        tableBordersAndInitialConditions_EVAP_1 = new QTableWidget(tabCustomize4);
        if (tableBordersAndInitialConditions_EVAP_1->columnCount() < 5)
            tableBordersAndInitialConditions_EVAP_1->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem108 = new QTableWidgetItem();
        tableBordersAndInitialConditions_EVAP_1->setHorizontalHeaderItem(0, __qtablewidgetitem108);
        QTableWidgetItem *__qtablewidgetitem109 = new QTableWidgetItem();
        tableBordersAndInitialConditions_EVAP_1->setHorizontalHeaderItem(1, __qtablewidgetitem109);
        QTableWidgetItem *__qtablewidgetitem110 = new QTableWidgetItem();
        tableBordersAndInitialConditions_EVAP_1->setHorizontalHeaderItem(2, __qtablewidgetitem110);
        QTableWidgetItem *__qtablewidgetitem111 = new QTableWidgetItem();
        tableBordersAndInitialConditions_EVAP_1->setHorizontalHeaderItem(3, __qtablewidgetitem111);
        QTableWidgetItem *__qtablewidgetitem112 = new QTableWidgetItem();
        tableBordersAndInitialConditions_EVAP_1->setHorizontalHeaderItem(4, __qtablewidgetitem112);
        if (tableBordersAndInitialConditions_EVAP_1->rowCount() < 2)
            tableBordersAndInitialConditions_EVAP_1->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem113 = new QTableWidgetItem();
        tableBordersAndInitialConditions_EVAP_1->setVerticalHeaderItem(0, __qtablewidgetitem113);
        QTableWidgetItem *__qtablewidgetitem114 = new QTableWidgetItem();
        tableBordersAndInitialConditions_EVAP_1->setVerticalHeaderItem(1, __qtablewidgetitem114);
        QTableWidgetItem *__qtablewidgetitem115 = new QTableWidgetItem();
        tableBordersAndInitialConditions_EVAP_1->setItem(1, 1, __qtablewidgetitem115);
        tableBordersAndInitialConditions_EVAP_1->setObjectName(QString::fromUtf8("tableBordersAndInitialConditions_EVAP_1"));
        tableBordersAndInitialConditions_EVAP_1->setGeometry(QRect(90, 30, 751, 101));
        tableBordersAndInitialConditions_EVAP_1->setSelectionMode(QAbstractItemView::SingleSelection);
        tabGraph->addTab(tabCustomize4, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1013, 21));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menu->addAction(action);
        menu->addSeparator();
        menu->addAction(action_3);
        menuHelp->addAction(actionAbout_rectification_column);
        menuHelp->addAction(action3D_model);
        menuHelp->addAction(actionCheck_stat_of_values);

        retranslateUi(MainWindow);

        tabGraph->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "The Study Of Technological Processes", nullptr));
#ifndef QT_NO_TOOLTIP
        MainWindow->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Simulation Program</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        action->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\272\320\260\321\200\321\202\320\270\320\275\320\272\321\203", nullptr));
        action_3->setText(QApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        actionAbout_rectification_column->setText(QApplication::translate("MainWindow", "About rectification column", nullptr));
        action3D_model->setText(QApplication::translate("MainWindow", "3D model", nullptr));
        actionCheck_stat_of_values->setText(QApplication::translate("MainWindow", "Check steady state", nullptr));
#ifndef QT_NO_TOOLTIP
        actionCheck_stat_of_values->setToolTip(QApplication::translate("MainWindow", "Check stat of values", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        tabGraph->setWhatsThis(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\260 \320\275.\321\203. \320\270 \320\263\321\200\320\260\320\275\320\270\321\206 \320\243\320\240\320\232</p></body></html>", nullptr));
#endif // QT_NO_WHATSTHIS
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:9pt; font-weight:600;\">\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\260 \320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200\320\276\320\262 \320\274\320\276\320\264\320\265\320\273\320\270\321\200\320\276\320\262\320\260\320\275\320\270\321\217:</span></p></body></html>", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "T, 'C \320\270\320\273\320\270 \320\241, % = [", nullptr));
        inputLeftY->setText(QApplication::translate("MainWindow", "100", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "...", nullptr));
        inputRightY->setText(QApplication::translate("MainWindow", "180", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "]", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\320\222\321\200\320\265\320\274\320\265\320\275\320\275\320\260\321\217 \320\276\320\261\320\273. \320\262 \321\201\320\265\320\272.: t = [", nullptr));
        inputLeftX->setText(QApplication::translate("MainWindow", "0", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "...", nullptr));
        inputRightX->setText(QApplication::translate("MainWindow", "1000", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "]", nullptr));
        label_20->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\273. \320\277\321\200\320\276\321\201\321\202\321\200\320\260\320\275\321\201\321\202\320\262\320\265\320\275.\320\277\320\265\321\200\320\265\320\274. \320\236\320\240\320\232   =", nullptr));
        label_19->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\273. \320\277\321\200\320\276\321\201\321\202\321\200\320\260\320\275\321\201\321\202\320\262\320\265\320\275.\320\277\320\265\321\200\320\265\320\274. \320\243\320\240\320\232   =", nullptr));
        label_21->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\273. \320\277\321\200\320\276\321\201\321\202\321\200\320\260\320\275\321\201\321\202\320\262\320\265\320\275.\320\277\320\265\321\200\320\265\320\274. \320\220\320\222\320\236   =", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\273. \320\277\321\200\320\276\321\201\321\202\321\200\320\260\320\275\321\201\321\202\320\262\320\265\320\275.\320\277\320\265\321\200\320\265\320\274. \320\230\321\201\320\277\320\260\321\200.   =", nullptr));
        LVM_BP->setText(QApplication::translate("MainWindow", "\320\233\320\242\320\234 \320\236\320\240\320\232", nullptr));
        EVM_TP->setText(QApplication::translate("MainWindow", "\320\222\320\242\320\234 \320\243\320\240\320\232", nullptr));
        NLVM_BP->setText(QApplication::translate("MainWindow", "\320\235\320\242\320\234 \320\236\320\240\320\232", nullptr));
        EFM_TP->setText(QApplication::translate("MainWindow", "\320\222\320\234\320\234 \320\243\320\240\320\232", nullptr));
        EVM_BP->setText(QApplication::translate("MainWindow", "\320\222\320\242\320\234 \320\236\320\240\320\232", nullptr));
        ACU->setText(QApplication::translate("MainWindow", "\320\220\320\222\320\236", nullptr));
        EFM_BP->setText(QApplication::translate("MainWindow", "\320\222\320\234\320\234 \320\236\320\240\320\232", nullptr));
        EVAP->setText(QApplication::translate("MainWindow", "\320\230\321\201\320\277\320\260\321\200\320\270\321\202\320\265\320\273\321\214", nullptr));
        BP_EVAP->setText(QApplication::translate("MainWindow", "\320\236\320\240\320\232 + \320\230\321\201\320\277\320\260\321\200\320\270\321\202\320\265\320\273\321\214", nullptr));
        TP_ACU->setText(QApplication::translate("MainWindow", "\320\243\320\240\320\232 + \320\220\320\222\320\236", nullptr));
        TP_BP->setText(QApplication::translate("MainWindow", "\320\243\320\240\320\232 + \320\236\320\240\320\232", nullptr));
        FULL_RC->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\273\320\275\320\260\321\217 \320\240\320\232", nullptr));
        draw->setText(QApplication::translate("MainWindow", "\320\237\320\276\321\201\321\202\321\200\320\276\320\270\321\202\321\214 \320\263\321\200\320\260\321\204\320\270\320\272\320\270", nullptr));
        clear->setText(QApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \320\274\320\276\320\275\320\270\321\202\320\276\321\200", nullptr));
        save->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        exit->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\271\321\202\320\270", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:9pt; font-weight:600;\">\320\243\321\201\321\202\320\260\320\275\320\276\320\262\320\270\320\262\321\210\320\270\320\265\321\201\321\217 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\321\217:</span></p></body></html>", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:9pt; color:#299d32;\">\320\237\320\265\321\200\320\262\320\260\321\217 \321\204\320\260\320\267\320\260:</span></p></body></html>", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:9pt; color:#2677cd;\">\320\222\321\202\320\276\321\200\320\260\321\217 \321\204\320\260\320\267\320\260:</span></p></body></html>", nullptr));
        label_28->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:9pt; color:#2677cd;\">\320\242\321\200\320\265\321\202\321\214\321\217 \321\204\320\260\320\267\320\260:</span></p></body></html>", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600;\">\320\250\320\260\320\263 \320\264\320\270\321\201\320\272\321\200\320\265\321\202\320\270\320\267\320\260\321\206\320\270\320\270 \320\277\320\276 \320\262\321\200\320\265\320\274\320\265\320\275\320\270 : dt = </span></p></body></html>", nullptr));
        selectStepT->setText(QApplication::translate("MainWindow", "0.01", nullptr));
        label_14->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600;\">\320\250\320\260\320\263 \320\264\320\270\321\201\320\272\321\200\320\265\321\202\320\270\320\267\320\260\321\206\320\270\320\270 \320\277\320\276 \320\277\321\200\320\276\321\201\321\202\321\200\320\260\320\275\321\201\321\202\320\262\321\203 : dh = </span></p></body></html>", nullptr));
        selectStepH->setText(QApplication::translate("MainWindow", "0.4666", nullptr));
        label_27->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"right\"><span style=\" font-weight:600;\">\320\240\320\260\320\267\320\274\320\265\321\200 \320\275\320\260\321\201\320\260\320\264\320\272\320\270: H =</span></p></body></html>", nullptr));
        selectDRC->setText(QApplication::translate("MainWindow", "1.400", nullptr));
        tabGraph->setTabText(tabGraph->indexOf(tabGeneral), QApplication::translate("MainWindow", "\320\236\321\201\320\275\320\276\320\262\320\275\320\260\321\217 \320\262\320\272\320\273\320\260\320\264\320\272\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableBordersAndInitialConditions_BP_1->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "\320\233\320\265\320\262\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableBordersAndInitialConditions_BP_1->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableBordersAndInitialConditions_BP_1->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableBordersAndInitialConditions_BP_1->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableBordersAndInitialConditions_BP_1->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\260\320\262\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableBordersAndInitialConditions_BP_1->verticalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", " 0-\321\213\320\271 \320\274\320\276\320\274\320\265\320\275\321\202 \320\262\321\200\320\265\320\274\320\265\320\275\320\270", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableBordersAndInitialConditions_BP_1->verticalHeaderItem(1);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", " i-\321\213\320\271 \320\274\320\276\320\274\320\265\320\275\321\202 \320\262\321\200\320\265\320\274\320\265\320\275\320\270", nullptr));

        const bool __sortingEnabled = tableBordersAndInitialConditions_BP_1->isSortingEnabled();
        tableBordersAndInitialConditions_BP_1->setSortingEnabled(false);
        tableBordersAndInitialConditions_BP_1->setSortingEnabled(__sortingEnabled);

        QTableWidgetItem *___qtablewidgetitem7 = tableBordersAndInitialConditions_BP_2->horizontalHeaderItem(0);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "\320\233\320\265\320\262\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableBordersAndInitialConditions_BP_2->horizontalHeaderItem(1);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableBordersAndInitialConditions_BP_2->horizontalHeaderItem(2);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableBordersAndInitialConditions_BP_2->horizontalHeaderItem(3);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableBordersAndInitialConditions_BP_2->horizontalHeaderItem(4);
        ___qtablewidgetitem11->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\260\320\262\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableBordersAndInitialConditions_BP_2->verticalHeaderItem(0);
        ___qtablewidgetitem12->setText(QApplication::translate("MainWindow", " 0-\321\213\320\271 \320\274\320\276\320\274\320\265\320\275\321\202 \320\262\321\200\320\265\320\274\320\265\320\275\320\270", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableBordersAndInitialConditions_BP_2->verticalHeaderItem(1);
        ___qtablewidgetitem13->setText(QApplication::translate("MainWindow", " i-\321\213\320\271 \320\274\320\276\320\274\320\265\320\275\321\202 \320\262\321\200\320\265\320\274\320\265\320\275\320\270", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableBordersAndInitialConditions_BP_3->horizontalHeaderItem(0);
        ___qtablewidgetitem14->setText(QApplication::translate("MainWindow", "\320\233\320\265\320\262\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tableBordersAndInitialConditions_BP_3->horizontalHeaderItem(1);
        ___qtablewidgetitem15->setText(QApplication::translate("MainWindow", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = tableBordersAndInitialConditions_BP_3->horizontalHeaderItem(2);
        ___qtablewidgetitem16->setText(QApplication::translate("MainWindow", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = tableBordersAndInitialConditions_BP_3->horizontalHeaderItem(3);
        ___qtablewidgetitem17->setText(QApplication::translate("MainWindow", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = tableBordersAndInitialConditions_BP_3->horizontalHeaderItem(4);
        ___qtablewidgetitem18->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\260\320\262\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = tableBordersAndInitialConditions_BP_3->verticalHeaderItem(0);
        ___qtablewidgetitem19->setText(QApplication::translate("MainWindow", " 0-\321\213\320\271 \320\274\320\276\320\274\320\265\320\275\321\202 \320\262\321\200\320\265\320\274\320\265\320\275\320\270", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = tableBordersAndInitialConditions_BP_3->verticalHeaderItem(1);
        ___qtablewidgetitem20->setText(QApplication::translate("MainWindow", " i-\321\213\320\271 \320\274\320\276\320\274\320\265\320\275\321\202 \320\262\321\200\320\265\320\274\320\265\320\275\320\270", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = tableBordersAndInitialConditions_BP_4->horizontalHeaderItem(0);
        ___qtablewidgetitem21->setText(QApplication::translate("MainWindow", "\320\233\320\265\320\262\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = tableBordersAndInitialConditions_BP_4->horizontalHeaderItem(1);
        ___qtablewidgetitem22->setText(QApplication::translate("MainWindow", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = tableBordersAndInitialConditions_BP_4->horizontalHeaderItem(2);
        ___qtablewidgetitem23->setText(QApplication::translate("MainWindow", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem24 = tableBordersAndInitialConditions_BP_4->horizontalHeaderItem(3);
        ___qtablewidgetitem24->setText(QApplication::translate("MainWindow", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem25 = tableBordersAndInitialConditions_BP_4->horizontalHeaderItem(4);
        ___qtablewidgetitem25->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\260\320\262\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem26 = tableBordersAndInitialConditions_BP_4->verticalHeaderItem(0);
        ___qtablewidgetitem26->setText(QApplication::translate("MainWindow", " 0-\321\213\320\271 \320\274\320\276\320\274\320\265\320\275\321\202 \320\262\321\200\320\265\320\274\320\265\320\275\320\270", nullptr));
        QTableWidgetItem *___qtablewidgetitem27 = tableBordersAndInitialConditions_BP_4->verticalHeaderItem(1);
        ___qtablewidgetitem27->setText(QApplication::translate("MainWindow", " i-\321\213\320\271 \320\274\320\276\320\274\320\265\320\275\321\202 \320\262\321\200\320\265\320\274\320\265\320\275\320\270", nullptr));
        tabGraph->setTabText(tabGraph->indexOf(tabCustomize1), QApplication::translate("MainWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\260 \320\275.\321\203. \320\270 \320\263\321\200\320\260\320\275\320\270\321\206 \320\236\320\240\320\232", nullptr));
        QTableWidgetItem *___qtablewidgetitem28 = tableBordersAndInitialConditions_TP_1->horizontalHeaderItem(0);
        ___qtablewidgetitem28->setText(QApplication::translate("MainWindow", "\320\233\320\265\320\262\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem29 = tableBordersAndInitialConditions_TP_1->horizontalHeaderItem(1);
        ___qtablewidgetitem29->setText(QApplication::translate("MainWindow", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem30 = tableBordersAndInitialConditions_TP_1->horizontalHeaderItem(2);
        ___qtablewidgetitem30->setText(QApplication::translate("MainWindow", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem31 = tableBordersAndInitialConditions_TP_1->horizontalHeaderItem(3);
        ___qtablewidgetitem31->setText(QApplication::translate("MainWindow", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem32 = tableBordersAndInitialConditions_TP_1->horizontalHeaderItem(4);
        ___qtablewidgetitem32->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\260\320\262\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem33 = tableBordersAndInitialConditions_TP_1->verticalHeaderItem(0);
        ___qtablewidgetitem33->setText(QApplication::translate("MainWindow", " 0-\321\213\320\271 \320\274\320\276\320\274\320\265\320\275\321\202 \320\262\321\200\320\265\320\274\320\265\320\275\320\270", nullptr));
        QTableWidgetItem *___qtablewidgetitem34 = tableBordersAndInitialConditions_TP_1->verticalHeaderItem(1);
        ___qtablewidgetitem34->setText(QApplication::translate("MainWindow", " i-\321\213\320\271 \320\274\320\276\320\274\320\265\320\275\321\202 \320\262\321\200\320\265\320\274\320\265\320\275\320\270", nullptr));

        const bool __sortingEnabled1 = tableBordersAndInitialConditions_TP_1->isSortingEnabled();
        tableBordersAndInitialConditions_TP_1->setSortingEnabled(false);
        tableBordersAndInitialConditions_TP_1->setSortingEnabled(__sortingEnabled1);

        QTableWidgetItem *___qtablewidgetitem35 = tableBordersAndInitialConditions_TP_2->horizontalHeaderItem(0);
        ___qtablewidgetitem35->setText(QApplication::translate("MainWindow", "\320\233\320\265\320\262\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem36 = tableBordersAndInitialConditions_TP_2->horizontalHeaderItem(1);
        ___qtablewidgetitem36->setText(QApplication::translate("MainWindow", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem37 = tableBordersAndInitialConditions_TP_2->horizontalHeaderItem(2);
        ___qtablewidgetitem37->setText(QApplication::translate("MainWindow", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem38 = tableBordersAndInitialConditions_TP_2->horizontalHeaderItem(3);
        ___qtablewidgetitem38->setText(QApplication::translate("MainWindow", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem39 = tableBordersAndInitialConditions_TP_2->horizontalHeaderItem(4);
        ___qtablewidgetitem39->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\260\320\262\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem40 = tableBordersAndInitialConditions_TP_2->verticalHeaderItem(0);
        ___qtablewidgetitem40->setText(QApplication::translate("MainWindow", " 0-\321\213\320\271 \320\274\320\276\320\274\320\265\320\275\321\202 \320\262\321\200\320\265\320\274\320\265\320\275\320\270", nullptr));
        QTableWidgetItem *___qtablewidgetitem41 = tableBordersAndInitialConditions_TP_2->verticalHeaderItem(1);
        ___qtablewidgetitem41->setText(QApplication::translate("MainWindow", " i-\321\213\320\271 \320\274\320\276\320\274\320\265\320\275\321\202 \320\262\321\200\320\265\320\274\320\265\320\275\320\270", nullptr));
        QTableWidgetItem *___qtablewidgetitem42 = tableBordersAndInitialConditions_TP_4->horizontalHeaderItem(0);
        ___qtablewidgetitem42->setText(QApplication::translate("MainWindow", "\320\233\320\265\320\262\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem43 = tableBordersAndInitialConditions_TP_4->horizontalHeaderItem(1);
        ___qtablewidgetitem43->setText(QApplication::translate("MainWindow", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem44 = tableBordersAndInitialConditions_TP_4->horizontalHeaderItem(2);
        ___qtablewidgetitem44->setText(QApplication::translate("MainWindow", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem45 = tableBordersAndInitialConditions_TP_4->horizontalHeaderItem(3);
        ___qtablewidgetitem45->setText(QApplication::translate("MainWindow", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem46 = tableBordersAndInitialConditions_TP_4->horizontalHeaderItem(4);
        ___qtablewidgetitem46->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\260\320\262\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem47 = tableBordersAndInitialConditions_TP_4->verticalHeaderItem(0);
        ___qtablewidgetitem47->setText(QApplication::translate("MainWindow", " 0-\321\213\320\271 \320\274\320\276\320\274\320\265\320\275\321\202 \320\262\321\200\320\265\320\274\320\265\320\275\320\270", nullptr));
        QTableWidgetItem *___qtablewidgetitem48 = tableBordersAndInitialConditions_TP_4->verticalHeaderItem(1);
        ___qtablewidgetitem48->setText(QApplication::translate("MainWindow", " i-\321\213\320\271 \320\274\320\276\320\274\320\265\320\275\321\202 \320\262\321\200\320\265\320\274\320\265\320\275\320\270", nullptr));
        QTableWidgetItem *___qtablewidgetitem49 = tableBordersAndInitialConditions_TP_3->horizontalHeaderItem(0);
        ___qtablewidgetitem49->setText(QApplication::translate("MainWindow", "\320\233\320\265\320\262\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem50 = tableBordersAndInitialConditions_TP_3->horizontalHeaderItem(1);
        ___qtablewidgetitem50->setText(QApplication::translate("MainWindow", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem51 = tableBordersAndInitialConditions_TP_3->horizontalHeaderItem(2);
        ___qtablewidgetitem51->setText(QApplication::translate("MainWindow", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem52 = tableBordersAndInitialConditions_TP_3->horizontalHeaderItem(3);
        ___qtablewidgetitem52->setText(QApplication::translate("MainWindow", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem53 = tableBordersAndInitialConditions_TP_3->horizontalHeaderItem(4);
        ___qtablewidgetitem53->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\260\320\262\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem54 = tableBordersAndInitialConditions_TP_3->verticalHeaderItem(0);
        ___qtablewidgetitem54->setText(QApplication::translate("MainWindow", " 0-\321\213\320\271 \320\274\320\276\320\274\320\265\320\275\321\202 \320\262\321\200\320\265\320\274\320\265\320\275\320\270", nullptr));
        QTableWidgetItem *___qtablewidgetitem55 = tableBordersAndInitialConditions_TP_3->verticalHeaderItem(1);
        ___qtablewidgetitem55->setText(QApplication::translate("MainWindow", " i-\321\213\320\271 \320\274\320\276\320\274\320\265\320\275\321\202 \320\262\321\200\320\265\320\274\320\265\320\275\320\270", nullptr));
        tabGraph->setTabText(tabGraph->indexOf(tabCustomize2), QApplication::translate("MainWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\260 \320\275.\321\203. \320\270 \320\263\321\200\320\260\320\275\320\270\321\206 \320\243\320\240\320\232", nullptr));
        QTableWidgetItem *___qtablewidgetitem56 = tableBordersAndInitialConditions_ACU_4->horizontalHeaderItem(0);
        ___qtablewidgetitem56->setText(QApplication::translate("MainWindow", "\320\233\320\265\320\262\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem57 = tableBordersAndInitialConditions_ACU_4->horizontalHeaderItem(1);
        ___qtablewidgetitem57->setText(QApplication::translate("MainWindow", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem58 = tableBordersAndInitialConditions_ACU_4->horizontalHeaderItem(2);
        ___qtablewidgetitem58->setText(QApplication::translate("MainWindow", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem59 = tableBordersAndInitialConditions_ACU_4->horizontalHeaderItem(3);
        ___qtablewidgetitem59->setText(QApplication::translate("MainWindow", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem60 = tableBordersAndInitialConditions_ACU_4->horizontalHeaderItem(4);
        ___qtablewidgetitem60->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\260\320\262\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem61 = tableBordersAndInitialConditions_ACU_4->verticalHeaderItem(0);
        ___qtablewidgetitem61->setText(QApplication::translate("MainWindow", " 0-\321\213\320\271 \320\274\320\276\320\274\320\265\320\275\321\202 \320\262\321\200\320\265\320\274\320\265\320\275\320\270", nullptr));
        QTableWidgetItem *___qtablewidgetitem62 = tableBordersAndInitialConditions_ACU_4->verticalHeaderItem(1);
        ___qtablewidgetitem62->setText(QApplication::translate("MainWindow", " i-\321\213\320\271 \320\274\320\276\320\274\320\265\320\275\321\202 \320\262\321\200\320\265\320\274\320\265\320\275\320\270", nullptr));
        QTableWidgetItem *___qtablewidgetitem63 = tableBordersAndInitialConditions_ACU_1->horizontalHeaderItem(0);
        ___qtablewidgetitem63->setText(QApplication::translate("MainWindow", "\320\233\320\265\320\262\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem64 = tableBordersAndInitialConditions_ACU_1->horizontalHeaderItem(1);
        ___qtablewidgetitem64->setText(QApplication::translate("MainWindow", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem65 = tableBordersAndInitialConditions_ACU_1->horizontalHeaderItem(2);
        ___qtablewidgetitem65->setText(QApplication::translate("MainWindow", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem66 = tableBordersAndInitialConditions_ACU_1->horizontalHeaderItem(3);
        ___qtablewidgetitem66->setText(QApplication::translate("MainWindow", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem67 = tableBordersAndInitialConditions_ACU_1->horizontalHeaderItem(4);
        ___qtablewidgetitem67->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\260\320\262\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem68 = tableBordersAndInitialConditions_ACU_1->verticalHeaderItem(0);
        ___qtablewidgetitem68->setText(QApplication::translate("MainWindow", " 0-\321\213\320\271 \320\274\320\276\320\274\320\265\320\275\321\202 \320\262\321\200\320\265\320\274\320\265\320\275\320\270", nullptr));
        QTableWidgetItem *___qtablewidgetitem69 = tableBordersAndInitialConditions_ACU_1->verticalHeaderItem(1);
        ___qtablewidgetitem69->setText(QApplication::translate("MainWindow", " i-\321\213\320\271 \320\274\320\276\320\274\320\265\320\275\321\202 \320\262\321\200\320\265\320\274\320\265\320\275\320\270", nullptr));

        const bool __sortingEnabled2 = tableBordersAndInitialConditions_ACU_1->isSortingEnabled();
        tableBordersAndInitialConditions_ACU_1->setSortingEnabled(false);
        tableBordersAndInitialConditions_ACU_1->setSortingEnabled(__sortingEnabled2);

        QTableWidgetItem *___qtablewidgetitem70 = tableBordersAndInitialConditions_ACU_2->horizontalHeaderItem(0);
        ___qtablewidgetitem70->setText(QApplication::translate("MainWindow", "\320\233\320\265\320\262\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem71 = tableBordersAndInitialConditions_ACU_2->horizontalHeaderItem(1);
        ___qtablewidgetitem71->setText(QApplication::translate("MainWindow", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem72 = tableBordersAndInitialConditions_ACU_2->horizontalHeaderItem(2);
        ___qtablewidgetitem72->setText(QApplication::translate("MainWindow", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem73 = tableBordersAndInitialConditions_ACU_2->horizontalHeaderItem(3);
        ___qtablewidgetitem73->setText(QApplication::translate("MainWindow", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem74 = tableBordersAndInitialConditions_ACU_2->horizontalHeaderItem(4);
        ___qtablewidgetitem74->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\260\320\262\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem75 = tableBordersAndInitialConditions_ACU_2->verticalHeaderItem(0);
        ___qtablewidgetitem75->setText(QApplication::translate("MainWindow", " 0-\321\213\320\271 \320\274\320\276\320\274\320\265\320\275\321\202 \320\262\321\200\320\265\320\274\320\265\320\275\320\270", nullptr));
        QTableWidgetItem *___qtablewidgetitem76 = tableBordersAndInitialConditions_ACU_2->verticalHeaderItem(1);
        ___qtablewidgetitem76->setText(QApplication::translate("MainWindow", " i-\321\213\320\271 \320\274\320\276\320\274\320\265\320\275\321\202 \320\262\321\200\320\265\320\274\320\265\320\275\320\270", nullptr));
        QTableWidgetItem *___qtablewidgetitem77 = tableBordersAndInitialConditions_ACU_3->horizontalHeaderItem(0);
        ___qtablewidgetitem77->setText(QApplication::translate("MainWindow", "\320\233\320\265\320\262\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem78 = tableBordersAndInitialConditions_ACU_3->horizontalHeaderItem(1);
        ___qtablewidgetitem78->setText(QApplication::translate("MainWindow", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem79 = tableBordersAndInitialConditions_ACU_3->horizontalHeaderItem(2);
        ___qtablewidgetitem79->setText(QApplication::translate("MainWindow", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem80 = tableBordersAndInitialConditions_ACU_3->horizontalHeaderItem(3);
        ___qtablewidgetitem80->setText(QApplication::translate("MainWindow", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem81 = tableBordersAndInitialConditions_ACU_3->horizontalHeaderItem(4);
        ___qtablewidgetitem81->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\260\320\262\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem82 = tableBordersAndInitialConditions_ACU_3->verticalHeaderItem(0);
        ___qtablewidgetitem82->setText(QApplication::translate("MainWindow", " 0-\321\213\320\271 \320\274\320\276\320\274\320\265\320\275\321\202 \320\262\321\200\320\265\320\274\320\265\320\275\320\270", nullptr));
        QTableWidgetItem *___qtablewidgetitem83 = tableBordersAndInitialConditions_ACU_3->verticalHeaderItem(1);
        ___qtablewidgetitem83->setText(QApplication::translate("MainWindow", " i-\321\213\320\271 \320\274\320\276\320\274\320\265\320\275\321\202 \320\262\321\200\320\265\320\274\320\265\320\275\320\270", nullptr));
        tabGraph->setTabText(tabGraph->indexOf(tabCustomize3), QApplication::translate("MainWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\260 \320\275.\321\203. \320\270 \320\263\321\200\320\260\320\275\320\270\321\206 \320\220\320\222\320\236", nullptr));
        QTableWidgetItem *___qtablewidgetitem84 = tableBordersAndInitialConditions_EVAP_2->horizontalHeaderItem(0);
        ___qtablewidgetitem84->setText(QApplication::translate("MainWindow", "\320\233\320\265\320\262\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem85 = tableBordersAndInitialConditions_EVAP_2->horizontalHeaderItem(1);
        ___qtablewidgetitem85->setText(QApplication::translate("MainWindow", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem86 = tableBordersAndInitialConditions_EVAP_2->horizontalHeaderItem(2);
        ___qtablewidgetitem86->setText(QApplication::translate("MainWindow", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem87 = tableBordersAndInitialConditions_EVAP_2->horizontalHeaderItem(3);
        ___qtablewidgetitem87->setText(QApplication::translate("MainWindow", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem88 = tableBordersAndInitialConditions_EVAP_2->horizontalHeaderItem(4);
        ___qtablewidgetitem88->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\260\320\262\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem89 = tableBordersAndInitialConditions_EVAP_2->verticalHeaderItem(0);
        ___qtablewidgetitem89->setText(QApplication::translate("MainWindow", " 0-\321\213\320\271 \320\274\320\276\320\274\320\265\320\275\321\202 \320\262\321\200\320\265\320\274\320\265\320\275\320\270", nullptr));
        QTableWidgetItem *___qtablewidgetitem90 = tableBordersAndInitialConditions_EVAP_2->verticalHeaderItem(1);
        ___qtablewidgetitem90->setText(QApplication::translate("MainWindow", " i-\321\213\320\271 \320\274\320\276\320\274\320\265\320\275\321\202 \320\262\321\200\320\265\320\274\320\265\320\275\320\270", nullptr));
        QTableWidgetItem *___qtablewidgetitem91 = tableBordersAndInitialConditions_EVAP_4->horizontalHeaderItem(0);
        ___qtablewidgetitem91->setText(QApplication::translate("MainWindow", "\320\233\320\265\320\262\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem92 = tableBordersAndInitialConditions_EVAP_4->horizontalHeaderItem(1);
        ___qtablewidgetitem92->setText(QApplication::translate("MainWindow", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem93 = tableBordersAndInitialConditions_EVAP_4->horizontalHeaderItem(2);
        ___qtablewidgetitem93->setText(QApplication::translate("MainWindow", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem94 = tableBordersAndInitialConditions_EVAP_4->horizontalHeaderItem(3);
        ___qtablewidgetitem94->setText(QApplication::translate("MainWindow", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem95 = tableBordersAndInitialConditions_EVAP_4->horizontalHeaderItem(4);
        ___qtablewidgetitem95->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\260\320\262\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem96 = tableBordersAndInitialConditions_EVAP_4->verticalHeaderItem(0);
        ___qtablewidgetitem96->setText(QApplication::translate("MainWindow", " 0-\321\213\320\271 \320\274\320\276\320\274\320\265\320\275\321\202 \320\262\321\200\320\265\320\274\320\265\320\275\320\270", nullptr));
        QTableWidgetItem *___qtablewidgetitem97 = tableBordersAndInitialConditions_EVAP_4->verticalHeaderItem(1);
        ___qtablewidgetitem97->setText(QApplication::translate("MainWindow", " i-\321\213\320\271 \320\274\320\276\320\274\320\265\320\275\321\202 \320\262\321\200\320\265\320\274\320\265\320\275\320\270", nullptr));
        QTableWidgetItem *___qtablewidgetitem98 = tableBordersAndInitialConditions_EVAP_3->horizontalHeaderItem(0);
        ___qtablewidgetitem98->setText(QApplication::translate("MainWindow", "\320\233\320\265\320\262\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem99 = tableBordersAndInitialConditions_EVAP_3->horizontalHeaderItem(1);
        ___qtablewidgetitem99->setText(QApplication::translate("MainWindow", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem100 = tableBordersAndInitialConditions_EVAP_3->horizontalHeaderItem(2);
        ___qtablewidgetitem100->setText(QApplication::translate("MainWindow", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem101 = tableBordersAndInitialConditions_EVAP_3->horizontalHeaderItem(3);
        ___qtablewidgetitem101->setText(QApplication::translate("MainWindow", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem102 = tableBordersAndInitialConditions_EVAP_3->horizontalHeaderItem(4);
        ___qtablewidgetitem102->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\260\320\262\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem103 = tableBordersAndInitialConditions_EVAP_3->verticalHeaderItem(0);
        ___qtablewidgetitem103->setText(QApplication::translate("MainWindow", " 0-\321\213\320\271 \320\274\320\276\320\274\320\265\320\275\321\202 \320\262\321\200\320\265\320\274\320\265\320\275\320\270", nullptr));
        QTableWidgetItem *___qtablewidgetitem104 = tableBordersAndInitialConditions_EVAP_3->verticalHeaderItem(1);
        ___qtablewidgetitem104->setText(QApplication::translate("MainWindow", " i-\321\213\320\271 \320\274\320\276\320\274\320\265\320\275\321\202 \320\262\321\200\320\265\320\274\320\265\320\275\320\270", nullptr));
        QTableWidgetItem *___qtablewidgetitem105 = tableBordersAndInitialConditions_EVAP_1->horizontalHeaderItem(0);
        ___qtablewidgetitem105->setText(QApplication::translate("MainWindow", "\320\233\320\265\320\262\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem106 = tableBordersAndInitialConditions_EVAP_1->horizontalHeaderItem(1);
        ___qtablewidgetitem106->setText(QApplication::translate("MainWindow", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem107 = tableBordersAndInitialConditions_EVAP_1->horizontalHeaderItem(2);
        ___qtablewidgetitem107->setText(QApplication::translate("MainWindow", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem108 = tableBordersAndInitialConditions_EVAP_1->horizontalHeaderItem(3);
        ___qtablewidgetitem108->setText(QApplication::translate("MainWindow", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem109 = tableBordersAndInitialConditions_EVAP_1->horizontalHeaderItem(4);
        ___qtablewidgetitem109->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\260\320\262\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem110 = tableBordersAndInitialConditions_EVAP_1->verticalHeaderItem(0);
        ___qtablewidgetitem110->setText(QApplication::translate("MainWindow", " 0-\321\213\320\271 \320\274\320\276\320\274\320\265\320\275\321\202 \320\262\321\200\320\265\320\274\320\265\320\275\320\270", nullptr));
        QTableWidgetItem *___qtablewidgetitem111 = tableBordersAndInitialConditions_EVAP_1->verticalHeaderItem(1);
        ___qtablewidgetitem111->setText(QApplication::translate("MainWindow", " i-\321\213\320\271 \320\274\320\276\320\274\320\265\320\275\321\202 \320\262\321\200\320\265\320\274\320\265\320\275\320\270", nullptr));

        const bool __sortingEnabled3 = tableBordersAndInitialConditions_EVAP_1->isSortingEnabled();
        tableBordersAndInitialConditions_EVAP_1->setSortingEnabled(false);
        tableBordersAndInitialConditions_EVAP_1->setSortingEnabled(__sortingEnabled3);

        tabGraph->setTabText(tabGraph->indexOf(tabCustomize4), QApplication::translate("MainWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\260 \320\275.\321\203. \320\270 \320\263\321\200\320\260\320\275\320\270\321\206 \320\230\321\201\320\277\320\260\321\200\320\270\321\202\320\265\320\273\321\217", nullptr));
        menu->setTitle(QApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", nullptr));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
