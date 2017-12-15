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


    /* Map Show
    MyWidget myWidget;
    myWidget.resize(600,600);

    myWidget.paintGL();
    myWidget.show();
    */
    return a.exec();
}
