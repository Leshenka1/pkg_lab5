/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *centralwidget_2;
    QRadioButton *segments;
    QRadioButton *poly;
    QLabel *clippingText;
    QMenuBar *menubar_2;
    QStatusBar *statusbar_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget_2 = new QWidget(centralwidget);
        centralwidget_2->setObjectName(QString::fromUtf8("centralwidget_2"));
        centralwidget_2->setGeometry(QRect(0, 90, 1283, 137));
        segments = new QRadioButton(centralwidget_2);
        segments->setObjectName(QString::fromUtf8("segments"));
        segments->setGeometry(QRect(580, 60, 133, 27));
        segments->setStyleSheet(QString::fromUtf8("color: black;"));
        poly = new QRadioButton(centralwidget_2);
        poly->setObjectName(QString::fromUtf8("poly"));
        poly->setGeometry(QRect(580, 100, 133, 27));
        poly->setStyleSheet(QString::fromUtf8("color: black;"));
        clippingText = new QLabel(centralwidget_2);
        clippingText->setObjectName(QString::fromUtf8("clippingText"));
        clippingText->setGeometry(QRect(580, 30, 80, 21));
        clippingText->setStyleSheet(QString::fromUtf8("color: black;"));
        menubar_2 = new QMenuBar(centralwidget);
        menubar_2->setObjectName(QString::fromUtf8("menubar_2"));
        menubar_2->setGeometry(QRect(0, 90, 800, 26));
        statusbar_2 = new QStatusBar(centralwidget);
        statusbar_2->setObjectName(QString::fromUtf8("statusbar_2"));
        statusbar_2->setGeometry(QRect(0, 90, 3, 25));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        segments->setText(QCoreApplication::translate("MainWindow", "\320\276\321\202\321\200\320\265\320\267\320\272\320\276\320\262", nullptr));
        poly->setText(QCoreApplication::translate("MainWindow", "\320\262\321\213\320\277\321\203\320\272\320\273\320\276\320\263\320\276 \320\274\320\275\320\276\320\263\320\276\321\203\320\273\321\214\320\275\320\270\320\272\320\260", nullptr));
        clippingText->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\321\201\320\265\321\207\320\265\320\275\320\270\321\217:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
