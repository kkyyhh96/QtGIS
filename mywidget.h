#ifndef MYWIDGET_H
#define MYWIDGET_H
#include "QGLWidget"
#include "qgl.h"
#include "map.h"
#include "layer.h"

class MyWidget : public QGLWidget
{
public:
    MyWidget();
    Map map;
    void initializeGL();
    void paintGL();
    void resizeGL(int width,int height);
    Point xy2screen(Point pt);
};

#endif // MYWIDGET_H
