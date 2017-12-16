#ifndef MYWIDGET_H
#define MYWIDGET_H
#include "QGLWidget"
#include "qgl.h"
#include "map.h"
#include "layer.h"
#include "style.h"
#include <QMouseEvent>

class MyWidget : public QGLWidget
{
public:
    MyWidget();
    Map *map;
    void initializeGL();
    void paintGL();
    void resizeGL(int width,int height);
    Point xy2screen(Point pt);
    void mousePressEvent(QMouseEvent *event);
};

#endif // MYWIDGET_H
