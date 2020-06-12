/********************************************************************************
** Form generated from reading UI file 'choicetrend.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOICETREND_H
#define UI_CHOICETREND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_choiceTrend
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *doneButton;
    QPushButton *cancelButton;
    QListWidget *widgetListTrends;
    QLabel *label;
    QLabel *label_5;
    QLineEdit *inputLeftYOfTrend;
    QLineEdit *inputRightYOfTrend;
    QLabel *label_2;
    QLineEdit *inputLeftXOfTrend;
    QLineEdit *inputRightXOfTrend;

    void setupUi(QDialog *choiceTrend)
    {
        if (choiceTrend->objectName().isEmpty())
            choiceTrend->setObjectName(QString::fromUtf8("choiceTrend"));
        choiceTrend->resize(253, 312);
        layoutWidget = new QWidget(choiceTrend);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 270, 158, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        doneButton = new QPushButton(layoutWidget);
        doneButton->setObjectName(QString::fromUtf8("doneButton"));

        horizontalLayout->addWidget(doneButton);

        cancelButton = new QPushButton(layoutWidget);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        horizontalLayout->addWidget(cancelButton);

        widgetListTrends = new QListWidget(choiceTrend);
        widgetListTrends->setObjectName(QString::fromUtf8("widgetListTrends"));
        widgetListTrends->setGeometry(QRect(20, 50, 121, 201));
        label = new QLabel(choiceTrend);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 10, 111, 31));
        label_5 = new QLabel(choiceTrend);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(150, 70, 101, 22));
        inputLeftYOfTrend = new QLineEdit(choiceTrend);
        inputLeftYOfTrend->setObjectName(QString::fromUtf8("inputLeftYOfTrend"));
        inputLeftYOfTrend->setEnabled(true);
        inputLeftYOfTrend->setGeometry(QRect(150, 130, 50, 20));
        inputLeftYOfTrend->setMaximumSize(QSize(50, 16777215));
        inputLeftYOfTrend->setReadOnly(false);
        inputRightYOfTrend = new QLineEdit(choiceTrend);
        inputRightYOfTrend->setObjectName(QString::fromUtf8("inputRightYOfTrend"));
        inputRightYOfTrend->setGeometry(QRect(150, 100, 50, 20));
        inputRightYOfTrend->setMaximumSize(QSize(50, 16777215));
        label_2 = new QLabel(choiceTrend);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(150, 160, 91, 41));
        inputLeftXOfTrend = new QLineEdit(choiceTrend);
        inputLeftXOfTrend->setObjectName(QString::fromUtf8("inputLeftXOfTrend"));
        inputLeftXOfTrend->setGeometry(QRect(150, 210, 15, 20));
        inputLeftXOfTrend->setMaximumSize(QSize(15, 16777215));
        inputLeftXOfTrend->setReadOnly(true);
        inputRightXOfTrend = new QLineEdit(choiceTrend);
        inputRightXOfTrend->setObjectName(QString::fromUtf8("inputRightXOfTrend"));
        inputRightXOfTrend->setGeometry(QRect(180, 210, 50, 20));
        inputRightXOfTrend->setMaximumSize(QSize(50, 16777215));

        retranslateUi(choiceTrend);

        QMetaObject::connectSlotsByName(choiceTrend);
    } // setupUi

    void retranslateUi(QDialog *choiceTrend)
    {
        choiceTrend->setWindowTitle(QApplication::translate("choiceTrend", "Dialog", nullptr));
        doneButton->setText(QApplication::translate("choiceTrend", "Done", nullptr));
        cancelButton->setText(QApplication::translate("choiceTrend", "Cancel", nullptr));
        label->setText(QApplication::translate("choiceTrend", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">List of Trends</span></p></body></html>", nullptr));
        label_5->setText(QApplication::translate("choiceTrend", "<html><head/><body><p><span style=\" font-size:10pt;\">T, 'C \320\270\320\273\320\270 \320\241, % :</span></p></body></html>", nullptr));
        inputLeftYOfTrend->setText(QApplication::translate("choiceTrend", "0", nullptr));
        inputRightYOfTrend->setText(QApplication::translate("choiceTrend", "180", nullptr));
        label_2->setText(QApplication::translate("choiceTrend", "<html><head/><body><p><span style=\" font-size:10pt;\">\320\222\321\200\320\265\320\274\320\265\320\275\320\275\320\260\321\217 \320\276\320\261\320\273.</span></p><p><span style=\" font-size:10pt;\">\320\262 \321\201\320\265\320\272.: t :</span></p></body></html>", nullptr));
        inputLeftXOfTrend->setText(QApplication::translate("choiceTrend", "0", nullptr));
        inputRightXOfTrend->setText(QApplication::translate("choiceTrend", "1000", nullptr));
    } // retranslateUi

};

namespace Ui {
    class choiceTrend: public Ui_choiceTrend {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOICETREND_H
