#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QString num = argv[1];
    int x = num.toInt();
    num = argv[2];
    int y = num.toInt();

    QCursor::setPos(x, y);

//    return a.exec();
}
