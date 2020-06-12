/********************************************************************************
** Form generated from reading UI file 'checkwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECKWINDOW_H
#define UI_CHECKWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CheckWindow
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QDoubleSpinBox *passErrorSpinBox;
    QPushButton *toCheckButton;
    QPushButton *toCancelButton;

    void setupUi(QDialog *CheckWindow)
    {
        if (CheckWindow->objectName().isEmpty())
            CheckWindow->setObjectName(QString::fromUtf8("CheckWindow"));
        CheckWindow->resize(278, 110);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CheckWindow->sizePolicy().hasHeightForWidth());
        CheckWindow->setSizePolicy(sizePolicy);
        verticalLayoutWidget = new QWidget(CheckWindow);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 10, 241, 80));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        passErrorSpinBox = new QDoubleSpinBox(verticalLayoutWidget);
        passErrorSpinBox->setObjectName(QString::fromUtf8("passErrorSpinBox"));

        horizontalLayout->addWidget(passErrorSpinBox);

        toCheckButton = new QPushButton(verticalLayoutWidget);
        toCheckButton->setObjectName(QString::fromUtf8("toCheckButton"));

        horizontalLayout->addWidget(toCheckButton);

        toCancelButton = new QPushButton(verticalLayoutWidget);
        toCancelButton->setObjectName(QString::fromUtf8("toCancelButton"));

        horizontalLayout->addWidget(toCancelButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(CheckWindow);

        QMetaObject::connectSlotsByName(CheckWindow);
    } // setupUi

    void retranslateUi(QDialog *CheckWindow)
    {
        CheckWindow->setWindowTitle(QApplication::translate("CheckWindow", "Are you strict?!", nullptr));
        label->setText(QApplication::translate("CheckWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt; font-style:italic;\">What error value do you make?</span></p></body></html>", nullptr));
        toCheckButton->setText(QApplication::translate("CheckWindow", "Go!", nullptr));
        toCancelButton->setText(QApplication::translate("CheckWindow", "Give up!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CheckWindow: public Ui_CheckWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECKWINDOW_H
