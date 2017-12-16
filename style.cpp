#include "style.h"

Style::Style()
{
    lineExist=0;polyExist=0;lineWidth=0;
}

void Style::LoadStyle(QTextStream *textStream){
    lineExist= textStream->readLine().toInt();
    if(lineExist==1){
        lineWidth=textStream->readLine().toDouble();
        QString color=textStream->readLine();
        lineColor.LoadColor(color);
    }
    polyExist=textStream->readLine().toInt();
    if(polyExist==1){
        QString color=textStream->readLine();
        polyColor.LoadColor(color);
    }
}
