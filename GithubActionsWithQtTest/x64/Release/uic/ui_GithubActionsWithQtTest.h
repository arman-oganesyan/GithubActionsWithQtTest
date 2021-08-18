/********************************************************************************
** Form generated from reading UI file 'GithubActionsWithQtTest.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GITHUBACTIONSWITHQTTEST_H
#define UI_GITHUBACTIONSWITHQTTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GithubActionsWithQtTestClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *GithubActionsWithQtTestClass)
    {
        if (GithubActionsWithQtTestClass->objectName().isEmpty())
            GithubActionsWithQtTestClass->setObjectName(QString::fromUtf8("GithubActionsWithQtTestClass"));
        GithubActionsWithQtTestClass->resize(600, 400);
        menuBar = new QMenuBar(GithubActionsWithQtTestClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        GithubActionsWithQtTestClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(GithubActionsWithQtTestClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        GithubActionsWithQtTestClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(GithubActionsWithQtTestClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        GithubActionsWithQtTestClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(GithubActionsWithQtTestClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        GithubActionsWithQtTestClass->setStatusBar(statusBar);

        retranslateUi(GithubActionsWithQtTestClass);

        QMetaObject::connectSlotsByName(GithubActionsWithQtTestClass);
    } // setupUi

    void retranslateUi(QMainWindow *GithubActionsWithQtTestClass)
    {
        GithubActionsWithQtTestClass->setWindowTitle(QCoreApplication::translate("GithubActionsWithQtTestClass", "GithubActionsWithQtTest", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GithubActionsWithQtTestClass: public Ui_GithubActionsWithQtTestClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GITHUBACTIONSWITHQTTEST_H
