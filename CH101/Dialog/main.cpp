#include "dialog.h"
#include <QApplication>
#include <QLabel>
#include <QPointer>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //Dialog w;
    //w.show();

//    QLabel label("Hello Qt!");
//    label.show();
//    label.setAttribute(Qt::WA_DeleteOnClose);    // 这个不能使用，因为这个label是分配到栈上的////

    QWidget w;
    QLabel label("Hello Qt!");
    label.setParent(&w);
    w.show();

    return a.exec();
}
