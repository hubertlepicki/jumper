#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QString x = argv[1];
    QString y = argv[2];
    QCursor::setPos(x.toInt(), y.toInt());
}
