#include "widget.h"
#include "mywidget.h"
#include <QApplication>
#include "geofile.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //Widget w;
    //w.show();

    // Load data
    GeoFile geoFile;
    geoFile.LoadFile("/home/kyh/Documents/Qt/practise_3/utf8/china.dat");


    // Map Show
    MyWidget myWidget;
    myWidget.map=geoFile.map;

    myWidget.resize(1000,1000);
    myWidget.paintGL();
    myWidget.show();

    return a.exec();
}
