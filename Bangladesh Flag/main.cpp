#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>



void circle()
{

    glScalef(0.5,1,0); //Scaling Circle to x-axis and y-axis
    glColor3f(0.6000,0.0000,0.0000);
    glutSolidSphere(0.6,100,10); //setting radius, slices

}

void display()
{

  glClear(GL_COLOR_BUFFER_BIT);
  //Push and pop matrix for separating circle object from Background
  glPushMatrix();
  circle();
  glPopMatrix();
  glutSwapBuffers();
  glFlush();


}

void initOpenGl()
{
    glClearColor(0.0,0.4,0.0,0.0); //Background Color
}


int main(int argc, char **argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGBA|GLUT_DEPTH);
    glutInitWindowSize(600,300);
    glutInitWindowPosition(100,100);
    glutCreateWindow("Bangladesh Flag");
    initOpenGl();
    glutDisplayFunc(display);
    glutIdleFunc(display);
    glutMainLoop();
    return 0;
}
