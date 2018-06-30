#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>
#include <math.h>

GLint keyl,keyr,flag=0;
float  counter=600.0, cnt=-150.0,r1=0.0,g1=1.0,b1=0.0,bc=-260.0;
float r2=0.0,g2=1.0,b2=1.0,r=1.0,g=0.0,b=0.0;
int c=1,d=1;

void  road();
void  grass();
void  grass2();
void  line1();
void  line2();
void  line3();
void  line4();
void  car();
void  truck();
void  bus();
void  sq();
void  text();
void  tc();
void  light();
void  light2();


void *currentfont;


void setFont(void *font)
{
	currentfont=font;
}

void drawstring(float x,float y,float z,char *string)
{
	char *ct;
	glRasterPos3f(x,y,z);

	for(ct=string;*ct!='\0';ct++)
	{	glColor3f(0.0,0.0,0.0);
		glutBitmapCharacter(currentfont,*ct);
	}
}

void initOpenGl()
{
    glClearColor(0.2,0.6,0.99,0); //Background Color
    //glClearColor(0.0,0.0,0.0,0); //Background Color
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0,700,0,500);
    glMatrixMode(GL_MODELVIEW);
}

void text()
{
    setFont(GLUT_BITMAP_HELVETICA_18);
    glColor3f(1,1,1);
    drawstring(160,130,0.0,"RUET BUS");
    glColor3f(1,1,1);
}

void credit()
{
    setFont(GLUT_BITMAP_HELVETICA_18);
    glColor3f(1,1,1);
    drawstring(5,55,0.0,"Developed By: Ashadullah Shawon");
    glColor3f(1,1,1);
    drawstring(5,30,0.0,"Roll: 133009");
    glColor3f(1,1,1);
    drawstring(5,5,0.0,"CSE, RUET");
}

void tc()
{
    glLoadIdentity();
    glColor3f(0.0,0.0,1.0);
    glBegin(GL_POLYGON);
    glVertex2f(310,190);
    glVertex2f(310,390);
    glVertex2f(340,390);
    glVertex2f(340,190);
    glEnd();

}

void light()
{
    glLoadIdentity();
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(315,330);
    glVertex2f(315,370);
    glVertex2f(335,370);
    glVertex2f(335,330);
    glEnd();
}

void light2()
{
    glLoadIdentity();
    glColor3f(0.0,1.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(315,330);
    glVertex2f(315,370);
    glVertex2f(335,370);
    glVertex2f(335,330);
    glEnd();
}

void light3()
{
    glLoadIdentity();
    glColor3f(1.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(315,280);
    glVertex2f(315,320);
    glVertex2f(335,320);
    glVertex2f(335,280);
    glEnd();
}

void light4()
{
    glLoadIdentity();
    glColor3f(0.0,1.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(315,280);
    glVertex2f(315,320);
    glVertex2f(335,320);
    glVertex2f(335,280);
    glEnd();
}

void window(int w1,int w2)
{
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(w1,160);
    glVertex2f(w1,185);
    glVertex2f(w2,185);
    glVertex2f(w2,160);
    glEnd();
}

void buswindow(int w1,int w2)
{
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(w1,180);
    glVertex2f(w1,205);
    glVertex2f(w2,205);
    glVertex2f(w2,180);
    glEnd();
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

void road()
{
    glLoadIdentity();
    glColor3f(0.5,0.5,0.5);
    glBegin(GL_POLYGON);
    glVertex2f(0,95);
    glVertex2f(0,260);
    glVertex2f(800,260);
    glVertex2f(800,95);
    glEnd();
}

void grass()
{
    glLoadIdentity();
    glColor3f(0.0,0.5,0.1);
    glBegin(GL_POLYGON);
    glVertex2f(0,0);
    glVertex2f(0,95);
    glVertex2f(800,95);
    glVertex2f(800,0);
    glEnd();
}

void grass2()
{
    glLoadIdentity();
    glColor3f(0.0,0.5,0.1);
    glBegin(GL_POLYGON);
    glVertex2f(0,260);
    glVertex2f(0,300);
    glVertex2f(800,300);
    glVertex2f(800,260);
    glEnd();
}

void line1()
{
    glLoadIdentity();
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(0,190);
    glVertex2f(150,190);
    glEnd();

}

void line2()
{
    glLoadIdentity();
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(200,190);
    glVertex2f(300,190);
    glEnd();

}

void line3()
{
    glLoadIdentity();
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(350,190);
    glVertex2f(500,190);
    glEnd();

}

void line4()
{
    glLoadIdentity();
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(550,190);
    glVertex2f(700,190);
    glEnd();

}

void car()
{

   //Bottom Part
   glLoadIdentity();
   counter=counter-0.05;
   glColor3f(r1,g1,b1);
   glTranslated(counter,80,0.0);
   if(counter<-1000.00)
   {

       c++;
       counter=700.0;
       if(c%2==0)
       {
           r1=1.0;
           g1=0.0;
           b1=0.0;

       }
       else if(c%3==0)
       {
           r1=0.0;
           g1=2.0+c;
           b1=1.0+c;
       }
       else if(c%5==0)
       {
           r1=1.0;
           g1=1.0;
           b1=0.0;
       }
       else
       {
           r1=0.0;
           g1=1.0;
           b1=0.0;
       }

   }
   glScaled(0.5,0.5,0.0);
   glBegin(GL_POLYGON);
   glVertex2f(100,100);
   glVertex2f(100,160);
   glVertex2f(450,160);
   glVertex2f(450,100);
   glEnd();

   //Top Part
   glBegin(GL_POLYGON);
   glVertex2f(150,160);
   glVertex2f(200,200);
   glVertex2f(400,200);
   glVertex2f(450,160);

   glEnd();


   window(200,270);
   window(280,330);
   window(340,390);
   wheel(200,100);
   wheel(380,100);


}

void truck()
{

   //Bottom Part

   glLoadIdentity();
   glColor3f(r2,g2,b2);
   cnt=cnt+0.04;
   if(cnt>1300.00)
   {
       cnt=-250.0;
       d++;
       if(d%2==0)
       {
           r2=r2+d;
           g2=0.0;
           b2=1.0;

       }
       else if(d%3==0)
       {
           r2=0.0;
           g2=3.0+d;
           b2=5.0+d;
       }
       else if(d%5==0)
       {
           r2=5.0;
           g2=0.0;
           b2=1.0;
       }
       else
       {
           r2=0.0;
           g2=1.0;
           b2=0.0;
       }

   }
   glTranslated(cnt,200,0.0);
   glScaled(0.4,0.4,0.0);
   glBegin(GL_POLYGON);
   glVertex2f(100,100);
   glVertex2f(100,160);
   glVertex2f(450,160);
   glVertex2f(450,100);
   glEnd();

   //Top Part
   glBegin(GL_POLYGON);
   glVertex2f(350,160);
   glVertex2f(350,200);
   glVertex2f(400,200);
   glVertex2f(450,160);

   glEnd();

   window(365,400);
   wheel(200,100);
   wheel(380,100);

}

void sq()
{
   glBegin(GL_POLYGON);
   glColor3f(0.9,0.2,0.1);
   glVertex2f(100,120);
   glVertex2f(100,170);
   glVertex2f(470,170);
   glVertex2f(470,120);
   glEnd();

}

void bus()
{

   glLoadIdentity();
   bc=bc+0.05;
   glColor3f(1.0,1.0,1.0);
   glTranslated(bc,180,0.0);
   if(bc>1300.00)
   {
       bc=-260.0;

   }
   glScaled(0.4,0.4,0.0);
   glBegin(GL_POLYGON);
   glVertex2f(100,100);
   glVertex2f(100,220);
   glVertex2f(470,220);
   glVertex2f(470,100);
   glEnd();

   buswindow(110,160);
   buswindow(170,220);
   buswindow(230,270);
   buswindow(280,330);
   buswindow(340,390);
   buswindow(400,450);
   wheel(200,100);
   wheel(380,100);

}

void display()
{

  glClear(GL_COLOR_BUFFER_BIT);
  //Push and pop matrix for separating circle object from Background
  road();
  grass();
  grass2();
  line1();
  line2();
  line3();
  line4();
  car();
  truck();
  bus();
  sq();
  text();
  tc();
  light();
  light3();
  if(counter<-250)
  {
     light4();
  }
  if(bc>650 && cnt>650)
  {
      light2();
  }
  credit();


  glutSwapBuffers();
  glFlush();


}

int main(int argc, char **argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGBA|GLUT_DEPTH);
    glutInitWindowSize(700,500);
    glutInitWindowPosition(0,0);
    glutCreateWindow("Animated Road Crossing Alert System");
    initOpenGl();
    glutDisplayFunc(display);
    glutIdleFunc(display);
    glutMainLoop();
    return 0;
}
