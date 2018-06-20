/********************************************************************************
** Form generated from reading UI file 'DialogButtonRight.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGBUTTONRIGHT_H
#define UI_DIALOGBUTTONRIGHT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *vboxLayout;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QSpacerItem *spacerItem;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(484, 547);
        layoutWidget = new QWidget(Dialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(300, 190, 95, 106));
        vboxLayout = new QVBoxLayout(layoutWidget);
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        okButton = new QPushButton(layoutWidget);
        okButton->setObjectName(QStringLiteral("okButton"));

        vboxLayout->addWidget(okButton);

        cancelButton = new QPushButton(layoutWidget);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        vboxLayout->addWidget(cancelButton);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);

        label = new QLabel(Dialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(111, 100, 151, 20));
        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(100, 180, 93, 28));
        pushButton_2 = new QPushButton(Dialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(100, 230, 93, 28));
        pushButton_3 = new QPushButton(Dialog);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(100, 280, 93, 28));
        pushButton_4 = new QPushButton(Dialog);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(100, 320, 93, 28));

        retranslateUi(Dialog);
        QObject::connect(okButton, SIGNAL(clicked()), Dialog, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), Dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", nullptr));
        okButton->setText(QApplication::translate("Dialog", "OK", nullptr));
        cancelButton->setText(QApplication::translate("Dialog", "Cancel", nullptr));
        label->setText(QApplication::translate("Dialog", "\350\257\267\351\200\211\346\213\251\351\234\200\350\246\201\347\232\204\345\212\237\350\203\275", nullptr));
        pushButton->setText(QApplication::translate("Dialog", "\346\237\245\350\257\242\346\210\220\347\273\251", nullptr));
        pushButton_2->setText(QApplication::translate("Dialog", "\351\200\211\350\257\276", nullptr));
        pushButton_3->setText(QApplication::translate("Dialog", "\350\257\204\344\273\267\350\200\201\345\270\210", nullptr));
        pushButton_4->setText(QApplication::translate("Dialog", "\350\257\276\350\241\250\346\237\245\350\257\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGBUTTONRIGHT_H
