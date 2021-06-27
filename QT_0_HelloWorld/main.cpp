#include <QApplication>
#include <QLabel>
int main(int argc, char* argv[])
{
    QApplication app(argc, argv);
    //Add anything inside this, will give combination of
    QLabel *label = new QLabel("Hello World!");
    label->setWindowTitle("My First App");
    label->resize(400,400);
    label->show();

    return app.exec();
}
