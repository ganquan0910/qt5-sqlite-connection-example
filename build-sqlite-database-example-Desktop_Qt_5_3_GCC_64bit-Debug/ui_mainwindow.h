/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLineEdit *lineEditName;
    QLineEdit *lineEditSurname;
    QLineEdit *lineEditAge;
    QLineEdit *lineEditClass;
    QPushButton *pushButtonInsertUser;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QTableWidget *tableWidgetUsers;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 600);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        lineEditName = new QLineEdit(centralWidget);
        lineEditName->setObjectName(QStringLiteral("lineEditName"));
        lineEditName->setGeometry(QRect(30, 40, 113, 27));
        lineEditSurname = new QLineEdit(centralWidget);
        lineEditSurname->setObjectName(QStringLiteral("lineEditSurname"));
        lineEditSurname->setGeometry(QRect(170, 40, 113, 27));
        lineEditAge = new QLineEdit(centralWidget);
        lineEditAge->setObjectName(QStringLiteral("lineEditAge"));
        lineEditAge->setGeometry(QRect(310, 40, 113, 27));
        lineEditClass = new QLineEdit(centralWidget);
        lineEditClass->setObjectName(QStringLiteral("lineEditClass"));
        lineEditClass->setGeometry(QRect(450, 40, 113, 27));
        pushButtonInsertUser = new QPushButton(centralWidget);
        pushButtonInsertUser->setObjectName(QStringLiteral("pushButtonInsertUser"));
        pushButtonInsertUser->setGeometry(QRect(520, 90, 99, 27));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 20, 67, 17));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(170, 20, 67, 17));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(310, 20, 67, 17));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(450, 20, 67, 17));
        tableWidgetUsers = new QTableWidget(centralWidget);
        if (tableWidgetUsers->columnCount() < 4)
            tableWidgetUsers->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetUsers->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetUsers->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidgetUsers->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidgetUsers->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidgetUsers->setObjectName(QStringLiteral("tableWidgetUsers"));
        tableWidgetUsers->setGeometry(QRect(40, 140, 501, 301));
        tableWidgetUsers->setStyleSheet(QStringLiteral(""));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        pushButtonInsertUser->setText(QApplication::translate("MainWindow", "Insert User", 0));
        label->setText(QApplication::translate("MainWindow", "Name:", 0));
        label_2->setText(QApplication::translate("MainWindow", "Surname:", 0));
        label_3->setText(QApplication::translate("MainWindow", "Age:", 0));
        label_4->setText(QApplication::translate("MainWindow", "Class:", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetUsers->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Name", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetUsers->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Surname", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetUsers->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Age", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetUsers->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "Class", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
