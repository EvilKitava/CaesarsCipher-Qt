/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTextEdit *TextResult;
    QTextEdit *TextInput;
    QPushButton *pushButton;
    QLabel *label;
    QSpinBox *spinBox;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(770, 325);
        MainWindow->setMinimumSize(QSize(770, 325));
        MainWindow->setMaximumSize(QSize(770, 325));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        TextResult = new QTextEdit(centralwidget);
        TextResult->setObjectName(QString::fromUtf8("TextResult"));
        TextResult->setEnabled(true);
        TextResult->setGeometry(QRect(400, 20, 351, 221));
        TextResult->setStyleSheet(QString::fromUtf8("font: 14pt \"MS Shell Dlg 2\";"));
        TextResult->setReadOnly(true);
        TextInput = new QTextEdit(centralwidget);
        TextInput->setObjectName(QString::fromUtf8("TextInput"));
        TextInput->setGeometry(QRect(20, 20, 351, 221));
        TextInput->setStyleSheet(QString::fromUtf8("font: 14pt \"MS Shell Dlg 2\";"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(60, 250, 111, 31));
        pushButton->setStyleSheet(QString::fromUtf8("font: 14pt \"MS Shell Dlg 2\";"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(490, 240, 61, 51));
        label->setStyleSheet(QString::fromUtf8("font: 14pt \"MS Shell Dlg 2\";"));
        spinBox = new QSpinBox(centralwidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(530, 250, 101, 31));
        spinBox->setStyleSheet(QString::fromUtf8("font: 14pt \"MS Shell Dlg 2\";"));
        spinBox->setMinimum(0);
        spinBox->setMaximum(25);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(210, 250, 111, 31));
        pushButton_2->setStyleSheet(QString::fromUtf8("font: 14pt \"MS Shell Dlg 2\";"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 770, 21));
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
        pushButton->setText(QCoreApplication::translate("MainWindow", "Encrypt", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Key", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Decipher", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
