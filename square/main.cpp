/*
 * GLUT Shapes Demo
 *
 * Written by Nigel Stewart November 2003
 *
 * This program is test harness for the sphere, cone
 * and torus shapes in GLUT.
 *
 * Spinning wireframe and smooth shaded shapes are
 * displayed until the ESC or q key is pressed.  The
 * number of geometry stacks and slices can be adjusted
 * using the + and - keys.
 */

#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>


/* GLUT callback Handlers */
void init2D(float r, float g, float b)
{
	glClearColor(r,g,b,0.0);
	glMatrixMode (GL_PROJECTION);
	gluOrtho2D (50.0, 200.0, 50.0, 150.0);
}

void display()
{

    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0,0.0,0.0);
    glLineWidth(30);

    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);

    glBegin(GL_POLYGON);
        glVertex2f(50,90);
        glVertex2f(100,90);
        glVertex2f(100,150);
        glVertex2f(50,150);
    glEnd();

    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

    glFlush();
}



/* Program entry point */

int main(int argc, char *argv[])
{

    glutInit(&argc,argv);
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize (500, 500);
	glutInitWindowPosition (100, 100);
	glutCreateWindow ("Square");
	init2D(0.0,0.0,0.0);
	glutDisplayFunc(display);
	glutMainLoop();



    return EXIT_SUCCESS;
}

