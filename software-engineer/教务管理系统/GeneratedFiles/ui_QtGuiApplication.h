/********************************************************************************
** Form generated from reading UI file 'QtGuiApplication.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTGUIAPPLICATION_H
#define UI_QTGUIAPPLICATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtGuiApplicationClass
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QMenuBar *menuBar;
    QMenu *menu000000000000000000000000;
    QMenu *menu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtGuiApplicationClass)
    {
        if (QtGuiApplicationClass->objectName().isEmpty())
            QtGuiApplicationClass->setObjectName(QStringLiteral("QtGuiApplicationClass"));
        QtGuiApplicationClass->resize(632, 455);
        centralWidget = new QWidget(QtGuiApplicationClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(170, 230, 93, 28));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(300, 230, 93, 28));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(210, 160, 113, 21));
        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(210, 190, 113, 21));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 170, 72, 15));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(100, 190, 72, 15));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(210, 70, 191, 16));
        QtGuiApplicationClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QtGuiApplicationClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 632, 26));
        menu000000000000000000000000 = new QMenu(menuBar);
        menu000000000000000000000000->setObjectName(QStringLiteral("menu000000000000000000000000"));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        QtGuiApplicationClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtGuiApplicationClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QtGuiApplicationClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QtGuiApplicationClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QtGuiApplicationClass->setStatusBar(statusBar);

        menuBar->addAction(menu000000000000000000000000->menuAction());
        menuBar->addAction(menu->menuAction());

        retranslateUi(QtGuiApplicationClass);

        QMetaObject::connectSlotsByName(QtGuiApplicationClass);
    } // setupUi

    void retranslateUi(QMainWindow *QtGuiApplicationClass)
    {
        QtGuiApplicationClass->setWindowTitle(QApplication::translate("QtGuiApplicationClass", "QtGuiApplication", nullptr));
        pushButton->setText(QApplication::translate("QtGuiApplicationClass", "\347\231\273\345\275\225", nullptr));
        pushButton_2->setText(QApplication::translate("QtGuiApplicationClass", "\351\200\200\345\207\272", nullptr));
        label->setText(QApplication::translate("QtGuiApplicationClass", "\347\224\250\346\210\267\345\220\215", nullptr));
        label_2->setText(QApplication::translate("QtGuiApplicationClass", "\345\257\206\347\240\201", nullptr));
        label_3->setText(QApplication::translate("QtGuiApplicationClass", "\346\254\242\350\277\216\344\275\277\347\224\250\346\225\231\345\212\241\347\263\273\347\273\237", nullptr));
        menu000000000000000000000000->setTitle(QApplication::translate("QtGuiApplicationClass", "\351\200\211\351\241\271", nullptr));
        menu->setTitle(QApplication::translate("QtGuiApplicationClass", "\345\270\256\345\212\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtGuiApplicationClass: public Ui_QtGuiApplicationClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTGUIAPPLICATION_H
