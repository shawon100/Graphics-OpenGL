#include <GL/gl.h>
#include <GL/glut.h>
#include<math.h>

float cnt=100.0,sp=-250.0,ps=-100.0,ss=400.0;

void init (void)
{
/*  select clearing (background) color       */
     glClearColor(0.2,0.6,0.99,0);

/*  initialize viewing values  */
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0,900,0,900);
    glMatrixMode(GL_MODELVIEW);
}



void circle(int x,int y)
{
   float th;
   glBegin(GL_POLYGON);
   glColor3f(1,1,1);
   for(int i=0;i<360;i++)
   {
       th=i*(3.1416/180);
       glVertex2f(x+20*cos(th),y+20*sin(th));
   }

   glEnd();

}

void boat()
{
    glLoadIdentity();
    glColor3f(0.0,0.0,0.0);
    cnt=cnt+0.03;
    if(cnt>950)
    {
        cnt=-250.0;
    }
    glTranslated(cnt,30.0,0.0);
    glBegin(GL_POLYGON);//The field
    glVertex2f (65,710);
    glVertex2f (190, 710);
    glVertex2f (200, 740);
    glVertex2f (50, 740);

    glEnd();

}

void boat2()
{
    glLoadIdentity();
    glColor3f(0.0,0.0,0.0);
    if(sp>=480)
    {
        sp=480;
        sp=sp+0.0000000001;
        glTranslated(sp,30.0,0.0);
    }
    else
    {
        sp=sp+0.03;
        glTranslated(sp,30.0,0.0);
    }
    glBegin(GL_POLYGON);//The field
    glVertex2f (65,600);
    glVertex2f (190, 600);
    glVertex2f (200, 630);
    glVertex2f (50, 630);

    glEnd();

}

void player()
{
    glLoadIdentity();
    glColor3f(1.0,1.0,1.0);
    glScaled(0.7,0.7,0.7);
    //ps=ps+0.001;
    //glTranslated(ps,20.0,0.0);
    circle(60,430);
    glBegin(GL_POLYGON);
    glVertex2f(40,290);
    glVertex2f(40,410);
    glVertex2f(80,410);
    glVertex2f(80,290);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glVertex2f(50,260);
    glVertex2f(50,290);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glVertex2f(70,260);
    glVertex2f(70,290);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(10,380);
    glVertex2f(10,390);
    glVertex2f(110,390);
    glVertex2f(110,380);
    glEnd();

}

void player1()
{
    glLoadIdentity();
    glColor3f(1.0,1.0,1.0);
    glScaled(0.7,0.7,0.7);
    //ps=ps+0.001;
    //glTranslated(ps,20.0,0.0);
    circle(960,430);
    glBegin(GL_POLYGON);
    glVertex2f(940,290);
    glVertex2f(940,410);
    glVertex2f(980,410);
    glVertex2f(980,290);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glVertex2f(950,260);
    glVertex2f(950,290);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glVertex2f(970,260);
    glVertex2f(970,290);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(910,380);
    glVertex2f(910,390);
    glVertex2f(1010,390);
    glVertex2f(1010,380);
    glEnd();

}

void soil()
{
        glLoadIdentity();
        glColor3f(0.9,0.4,0.0);
        glBegin(GL_POLYGON);//The field
        glVertex2f (0,500);
        glVertex2f (900, 500);
        glVertex2f (900, 700);
        glVertex2f (200, 500);

        glEnd();

}


void ball()
{
    glLoadIdentity();
    glColor3f(1.0, 1.0, 1.0);
    /*if(ps>415)
    {
        ps=10000.0;
        ps=ps+0.0000000001;
        glTranslated(ps,20.0,0.0);


    }
    else
    {
        ps=ps+0.02;
        glTranslated(ps,20.0,0.0);
    }*/
     ps=ps+0.02;
     glTranslated(ps,20.0,0.0);

    circle(220,200);

}

void ball2()
{
    glLoadIdentity();
    glColor3f(1.0, 1.0, 1.0);
    /*if(ss<200)
    {
        ss=10000.0;
        ss=ss+0.0000000001;
        glTranslated(ss,20.0,0.0);


    }
    else
    {
        ss=ss-0.02;
        glTranslated(ss,20.0,0.0);
    }*/
    ss=ss-0.02;
    glTranslated(ss,20.0,0.0);

    circle(220,200);

}

void field()
{
    glLoadIdentity();
    glColor3f (.02, 0.6, 0.2);

    glBegin(GL_POLYGON);//The field
        glVertex2f (0,0);
        glVertex2f (900, 0);
        glVertex2f (900, 500);
        glVertex2f (0, 500);

    glEnd();
}

void display(void)
{
/*  clear all pixels  */
    glClear (GL_COLOR_BUFFER_BIT);

/*  draw white polygon (rectangle) with corners at
 *  (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
 */
    field();
    soil();

    boat();
    boat2();
    player();
    player1();
    if(ps>415)
    {
        ball2();
    }
    else if(ps<415)
    {
        ball();
    }



/*  don't wait!
 *  start processing buffered OpenGL routines
 */

    glutSwapBuffers();
    glFlush();
}


/*
 *  Declare initial window size, position, and display mode
 *  (single buffer and RGBA).  Open window with "hello"
 *  in its title bar.  Call initialization routines.
 *  Register callback function to display graphics.
 *  Enter main loop and process events.
 */
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (900, 600);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("Project");
    init ();
    glutDisplayFunc(display);
    glutIdleFunc(display);
    glutMainLoop();
    return 0;   /* ISO C requires main to return int. */
}
