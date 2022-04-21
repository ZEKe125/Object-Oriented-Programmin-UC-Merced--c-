#include <QApplication>
#include <QPushButton>

int main(int argc, char **argv)
{
 QApplication app (argc, argv);
 QIcon icon ("/Users/Zeke Cuevas/Documents/helloWorld/pngwing.com.png");

 QPushButton button;
 button.setText("My Pretty Button");
 button.setIcon(icon);
 button.setToolTip("A tooltip");
 button.show();

 return app.exec();
}
