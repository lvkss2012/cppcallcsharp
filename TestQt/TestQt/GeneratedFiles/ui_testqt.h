/********************************************************************************
** Form generated from reading UI file 'testqt.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTQT_H
#define UI_TESTQT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestQtClass
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TestQtClass)
    {
        if (TestQtClass->objectName().isEmpty())
            TestQtClass->setObjectName(QStringLiteral("TestQtClass"));
        TestQtClass->resize(600, 400);
        centralWidget = new QWidget(TestQtClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(40, 40, 75, 23));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(200, 50, 75, 23));
        TestQtClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TestQtClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        TestQtClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TestQtClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        TestQtClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TestQtClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        TestQtClass->setStatusBar(statusBar);

        retranslateUi(TestQtClass);

        QMetaObject::connectSlotsByName(TestQtClass);
    } // setupUi

    void retranslateUi(QMainWindow *TestQtClass)
    {
        TestQtClass->setWindowTitle(QApplication::translate("TestQtClass", "TestQt", 0));
        pushButton->setText(QApplication::translate("TestQtClass", "PushButton", 0));
        pushButton_2->setText(QApplication::translate("TestQtClass", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class TestQtClass: public Ui_TestQtClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTQT_H
