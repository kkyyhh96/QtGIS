#include "point.h"

Point::Point()
{

}

bool Point::LoadPoint(QTextStream *textStream,Point *pt){
    QString line=textStream->readLine() ;
    double x,y;
    x=line.split(',')[0].toDouble();
    y=line.split(',')[1].toDouble();
    pt->x=x;
    pt->y=y;
    if(x==-99999&&y==-99999){
        return false;
    }
    return true;
}
