#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>
#include <math.h>

GLint b=300;
float  counter=600.0;
void initOpenGl()
{
    glClearColor(0.5,0.5,0.5,1); //Background Color
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0,700,0,500);
    glMatrixMode(GL_MODELVIEW);
}

void wheel(int x,int y)
{
   float th;
   glBegin(GL_POLYGON);
   glColor3f(0,0,0);
   for(int i=0;i<360;i++)
   {
       th=i*(3.1416/180);
       glVertex2f(x+20*cos(th),y+20*sin(th));
   }

   glEnd();

}

void car()
{


   //Bottom Part
   glLoadIdentity();
   counter=counter-0.03;
   glTranslated(counter,100,0.0);
   //glScaled(0.1,0.1,0.0);
   glBegin(GL_POLYGON);
   glVertex2f(100,100);
   glVertex2f(100,160);
   glVertex2f(450,160);
   glVertex2f(450,100);

   //Top Part
   glBegin(GL_POLYGON);
   glVertex2f(150,160);
   glVertex2f(200,200);
   glVertex2f(400,200);
   glVertex2f(450,160);

   glEnd();

   wheel(200,100);
   wheel(380,100);

}

void display()
{

  glClear(GL_COLOR_BUFFER_BIT);
  //Push and pop matrix for separating circle object from Background
  glColor3f(0.0,1.0,0.0);
  car();
  glutSwapBuffers();
  glFlush();


}

int main(int argc, char **argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGBA|GLUT_DEPTH);
    glutInitWindowSize(700,500);
    glutInitWindowPosition(0,0);
    glutCreateWindow("Car Moving");
    initOpenGl();
    glutDisplayFunc(display);
    glutIdleFunc(display);
    glutMainLoop();
    return 0;
}
