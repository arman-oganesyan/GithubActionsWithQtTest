#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_GithubActionsWithQtTest.h"

class GithubActionsWithQtTest : public QMainWindow
{
    Q_OBJECT

public:
    GithubActionsWithQtTest(QWidget *parent = Q_NULLPTR);

private:
    Ui::GithubActionsWithQtTestClass ui;
};
