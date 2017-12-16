#ifndef COLOR_H
#define COLOR_H
#include <QString>
#include <iostream>
#include <QTextStream>

class Color
{
public:
    Color();
    void LoadColor(QString colStr);
    int Red,Green,Blue;
};

#endif // COLOR_H
