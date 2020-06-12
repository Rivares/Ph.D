/********************************************************************************
** Form generated from reading UI file 'choicetrendswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOICETRENDSWINDOW_H
#define UI_CHOICETRENDSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_choiceTrendsWindow
{
public:
    QListWidget *TP_ACU;
    QLabel *label;
    QListWidget *BP_EVAP;
    QListWidget *TP_BP;
    QListWidget *FULL_RC;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *doneButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *choiceTrendsWindow)
    {
        if (choiceTrendsWindow->objectName().isEmpty())
            choiceTrendsWindow->setObjectName(QString::fromUtf8("choiceTrendsWindow"));
        choiceTrendsWindow->resize(385, 236);
        TP_ACU = new QListWidget(choiceTrendsWindow);
        TP_ACU->setObjectName(QString::fromUtf8("TP_ACU"));
        TP_ACU->setGeometry(QRect(20, 60, 71, 131));
        label = new QLabel(choiceTrendsWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 0, 111, 31));
        BP_EVAP = new QListWidget(choiceTrendsWindow);
        BP_EVAP->setObjectName(QString::fromUtf8("BP_EVAP"));
        BP_EVAP->setGeometry(QRect(110, 60, 71, 131));
        TP_BP = new QListWidget(choiceTrendsWindow);
        TP_BP->setObjectName(QString::fromUtf8("TP_BP"));
        TP_BP->setGeometry(QRect(200, 60, 71, 131));
        FULL_RC = new QListWidget(choiceTrendsWindow);
        FULL_RC->setObjectName(QString::fromUtf8("FULL_RC"));
        FULL_RC->setGeometry(QRect(290, 60, 71, 131));
        label_2 = new QLabel(choiceTrendsWindow);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 40, 47, 13));
        label_3 = new QLabel(choiceTrendsWindow);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(120, 40, 47, 13));
        label_4 = new QLabel(choiceTrendsWindow);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(210, 40, 47, 13));
        label_5 = new QLabel(choiceTrendsWindow);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(300, 40, 47, 13));
        widget = new QWidget(choiceTrendsWindow);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(110, 200, 158, 25));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        doneButton = new QPushButton(widget);
        doneButton->setObjectName(QString::fromUtf8("doneButton"));

        horizontalLayout->addWidget(doneButton);

        cancelButton = new QPushButton(widget);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        horizontalLayout->addWidget(cancelButton);


        retranslateUi(choiceTrendsWindow);

        QMetaObject::connectSlotsByName(choiceTrendsWindow);
    } // setupUi

    void retranslateUi(QDialog *choiceTrendsWindow)
    {
        choiceTrendsWindow->setWindowTitle(QApplication::translate("choiceTrendsWindow", "Dialog", nullptr));
        label->setText(QApplication::translate("choiceTrendsWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">List of Trends</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("choiceTrendsWindow", "TP_ACU", nullptr));
        label_3->setText(QApplication::translate("choiceTrendsWindow", "BP_EVAP", nullptr));
        label_4->setText(QApplication::translate("choiceTrendsWindow", "TP_BP", nullptr));
        label_5->setText(QApplication::translate("choiceTrendsWindow", "FULL_RC", nullptr));
        doneButton->setText(QApplication::translate("choiceTrendsWindow", "Done", nullptr));
        cancelButton->setText(QApplication::translate("choiceTrendsWindow", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class choiceTrendsWindow: public Ui_choiceTrendsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOICETRENDSWINDOW_H
