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
    // draw data
    for(auto layer:map->LAYERS){
        Style gl_style;
        gl_style=layer.layer_style;
        for(auto feature:layer.features){
            if(feature.feature_type==1){
                // draw line
                glLineWidth(gl_style.lineWidth);
                glBegin(GL_LINE_STRIP);
                int red =gl_style.lineColor.Red;
                int green=gl_style.lineColor.Green;
                int blue=gl_style.lineColor.Blue;
                glColor3d(1.0*red/255,1.0*green/255,1.0*blue/255);
                for(auto pt:feature.pts){
                    glVertex2f(xy2screen(pt).x,xy2screen(pt).y);
                }
                glEnd();
            }
            if(feature.feature_type==2){
                // draw polygon
                glPolygonMode(GL_FRONT,GL_FILL);
                glBegin(GL_POLYGON);
                int red =gl_style.polyColor.Red;
                int green=gl_style.polyColor.Green;
                int blue=gl_style.polyColor.Blue;
                glColor3d(1.0*red/255,1.0*green/255,1.0*blue/255);
                for(auto pt:feature.pts){
                    glVertex2f(xy2screen(pt).x,xy2screen(pt).y);
                }
                glEnd();
            }
        }
    }
    glFlush();
}
Point MyWidget::xy2screen(Point pt){
    // transfer point to screen coordinate
    double width=this->map->right-this->map->left;
    double height=this->map->top-this->map->bottom;
    Point screen;
    screen.x=(pt.x-this->map->left)/width*2-1;
    screen.y=(pt.y-this->map->bottom)/height*2-1;
    return screen;
}
void MyWidget::mousePressEvent(QMouseEvent *event){
    // mouse click
    double x,y;
    x=event->x();
    y=event->y();
    double width=this->map->right-this->map->left;
    double height=this->map->top-this->map->bottom;
    double window_width=this->width();
    double window_height=this->height();
    double real_x,real_y;
    real_x=x/window_width*width+this->map->left;
    real_y=y/window_height*height+this->map->bottom;
}
