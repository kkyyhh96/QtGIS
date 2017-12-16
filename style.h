#ifndef STYLE_H
#define STYLE_H
#include <QTextStream>
#include <QString>
#include "color.h"

class Style
{
public:
    Style();
    int lineExist,polyExist;
    double lineWidth;
    Color lineColor,polyColor;
    void LoadStyle(QTextStream *textStream);
};

#endif // STYLE_H
