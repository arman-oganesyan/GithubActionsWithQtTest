#include "GithubActionsWithQtTest.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    GithubActionsWithQtTest w;
    w.show();
    return a.exec();
}
