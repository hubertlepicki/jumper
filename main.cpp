#include <QApplication>

int move(int pos, QString command) {
  if (command != QString("")) {
    if (command[0] == '+' || command[0] == '-')
      pos += command.toInt();
    else
      pos = command.toInt();
  }

  return pos;
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QPoint current_pos = QCursor::pos();

    int x = current_pos.x();
    int y = current_pos.y();

    if (argc > 1)
      x = move(x, argv[1]);

    if (argc > 2)
      y = move(y, argv[2]);

    QCursor::setPos(x, y);
}

