#include "mywidget.h"

MyWidget::MyWidget()
{

}
void MyWidget::initializeGL(){
    glClearColor(1.0,1.0,1.0,1.0);
}
void MyWidget::resizeGL(int width,int height){
   glViewport(0,0,width,height);

   glMatrixMode(GL_PROJECTION);
}
void MyWidget::paintGL(){
    glClear(GL_COLOR_BUFFER_BIT);
    glPolygonMode(GL_FRONT,GL_FILL);
    // draw polygon
    glPolygonMode(GL_FRONT,GL_FILL);
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,0.0);
    for(auto p : map.LAYER.features[3].pts){
       glVertex2f(xy2screen(p).x,xy2screen(p).y);
    }
    glEnd();
    glPolygonMode(GL_FRONT,GL_LINE);
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    for(auto p : map.LAYER.features[3].pts){
       glVertex2f(xy2screen(p).x,xy2screen(p).y);
    }
    glEnd();
    glFlush();
}
Point MyWidget::xy2screen(Point pt){
    double width=this->map.right-this->map.left;
    double height=this->map.top-this->map.bottom;
    Point screen;
    screen.x=(pt.x-this->map.left)/width*2-1;
    screen.y=(pt.y-this->map.bottom)/height*2-1;
    return screen;
}
