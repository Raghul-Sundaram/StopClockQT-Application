/********************************************************************************
** Form generated from reading UI file 'clock.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLOCK_H
#define UI_CLOCK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_clockClass
{
public:
    QAction *actionsettings;
    QWidget *centralWidget;
    QLineEdit *display;
    QPushButton *startbtn;
    QPushButton *stopbtn;
    QPushButton *pausebtn;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *clockClass)
    {
        if (clockClass->objectName().isEmpty())
            clockClass->setObjectName(QString::fromUtf8("clockClass"));
        clockClass->resize(600, 531);
        clockClass->setStyleSheet(QString::fromUtf8("background-color: rgb(153, 156, 101);"));
        actionsettings = new QAction(clockClass);
        actionsettings->setObjectName(QString::fromUtf8("actionsettings"));
        centralWidget = new QWidget(clockClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        display = new QLineEdit(centralWidget);
        display->setObjectName(QString::fromUtf8("display"));
        display->setGeometry(QRect(210, 70, 151, 131));
        display->setStyleSheet(QString::fromUtf8("font-size:40px;\n"
"color: rgb(85, 255, 255);\n"
"border-color: rgb(255, 255, 201);\n"
"background-color: rgb(85, 85, 0);\n"
"text-align:center;"));
        display->setReadOnly(true);
        startbtn = new QPushButton(centralWidget);
        startbtn->setObjectName(QString::fromUtf8("startbtn"));
        startbtn->setGeometry(QRect(90, 310, 91, 61));
        startbtn->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"border-color: rgb(255, 94, 14);\n"
"background-color: rgb(188, 183, 31);\n"
"color: rgb(11, 11, 11);"));
        stopbtn = new QPushButton(centralWidget);
        stopbtn->setObjectName(QString::fromUtf8("stopbtn"));
        stopbtn->setGeometry(QRect(410, 310, 91, 61));
        stopbtn->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"border-color: rgb(255, 94, 14);\n"
"background-color: rgb(188, 183, 31);\n"
"color: rgb(11, 11, 11);"));
        pausebtn = new QPushButton(centralWidget);
        pausebtn->setObjectName(QString::fromUtf8("pausebtn"));
        pausebtn->setGeometry(QRect(240, 310, 91, 61));
        pausebtn->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"border-color: rgb(255, 94, 14);\n"
"background-color: rgb(188, 183, 31);\n"
"color: rgb(11, 11, 11);"));
        clockClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(clockClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        clockClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(clockClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        clockClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(clockClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        clockClass->setStatusBar(statusBar);

        retranslateUi(clockClass);

        QMetaObject::connectSlotsByName(clockClass);
    } // setupUi

    void retranslateUi(QMainWindow *clockClass)
    {
        clockClass->setWindowTitle(QApplication::translate("clockClass", "clock", nullptr));
        actionsettings->setText(QApplication::translate("clockClass", "settings", nullptr));
        startbtn->setText(QApplication::translate("clockClass", "START", nullptr));
        stopbtn->setText(QApplication::translate("clockClass", "STOP", nullptr));
        pausebtn->setText(QApplication::translate("clockClass", "PAUSE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class clockClass: public Ui_clockClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLOCK_H
