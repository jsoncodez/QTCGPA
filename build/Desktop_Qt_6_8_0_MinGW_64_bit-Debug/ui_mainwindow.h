/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *addClassButton;
    QLabel *label;
    QLineEdit *txtName;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *txtGrade;
    QLineEdit *txtCredit;
    QLineEdit *txtGPA;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *txtDegGPA;
    QMenuBar *menubar;
    QMenu *menuCGPA;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(716, 849);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        addClassButton = new QPushButton(centralwidget);
        addClassButton->setObjectName("addClassButton");
        addClassButton->setGeometry(QRect(230, 280, 80, 24));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(150, 75, 111, 41));
        txtName = new QLineEdit(centralwidget);
        txtName->setObjectName("txtName");
        txtName->setGeometry(QRect(260, 80, 113, 24));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(140, 120, 111, 41));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(150, 190, 111, 41));
        txtGrade = new QLineEdit(centralwidget);
        txtGrade->setObjectName("txtGrade");
        txtGrade->setGeometry(QRect(260, 130, 113, 24));
        txtCredit = new QLineEdit(centralwidget);
        txtCredit->setObjectName("txtCredit");
        txtCredit->setGeometry(QRect(270, 200, 113, 24));
        txtGPA = new QLineEdit(centralwidget);
        txtGPA->setObjectName("txtGPA");
        txtGPA->setGeometry(QRect(100, 50, 113, 24));
        txtGPA->setReadOnly(true);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(110, 10, 111, 41));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(310, 10, 111, 41));
        txtDegGPA = new QLineEdit(centralwidget);
        txtDegGPA->setObjectName("txtDegGPA");
        txtDegGPA->setGeometry(QRect(290, 50, 113, 24));
        txtDegGPA->setReadOnly(true);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 716, 21));
        menuCGPA = new QMenu(menubar);
        menuCGPA->setObjectName("menuCGPA");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuCGPA->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        addClassButton->setText(QCoreApplication::translate("MainWindow", "Add Class", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Enter Class Name", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Enter Class Grade", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Enter Class Credits", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "GPA", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Degree GPA", nullptr));
        menuCGPA->setTitle(QCoreApplication::translate("MainWindow", "CGPA", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
