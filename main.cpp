#include "widget.h"
#include "mywidget.h"
#include <QApplication>
#include "geofile.h"
#include "stylefile.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //Widget w;
    //w.show();

    // Load data
    Map map;
    GeoFile geoFile;
    geoFile.map=&map;
    geoFile.LoadFile("/home/kyh/Documents/Qt/practise_3/utf8/china.dat");

    // Load style
    StyleFile styleFile;
    styleFile.map=&map;
    styleFile.LoadStyle("/home/kyh/Documents/Qt/practise_3/utf8/china.opt");

    // Map show
    MyWidget myWidget;
    myWidget.map=&map;


    myWidget.resize(800,600);
    myWidget.paintGL();
    myWidget.show();

    return a.exec();
}
