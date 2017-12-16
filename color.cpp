#include "color.h"

Color::Color()
{
    Red=0;
    Green=0;
    Blue=0;
}

void Color::LoadColor(QString colStr){
    int r,g,b;
    r= colStr.split(',')[0].toInt();
    g= colStr.split(',')[1].toInt();
    b= colStr.split(',')[2].toInt();
    Green=g;Red=r;Blue=b;
}
