#include <GL/gl.h>
#include <GL/glut.h>
#include<math.h>

float ps=-100.0,ss=200.0,ks=450.0,t=50.0,st=200;

void *currentfont;


void setFont(void *font)
{
	currentfont=font;
}

void drawstring(float x,float y,float z,char *string)
{
	char *ct;
	//displaying test
	glRasterPos3f(x,y,z);

	for(ct=string;*ct!='\0';ct++)
	{
	    glColor3f(0.0,0.0,0.0);
	    //renders a bitmap character using OpenGL.
		glutBitmapCharacter(currentfont,*ct);
	}
}

void text()
{
    setFont(GLUT_BITMAP_HELVETICA_18);
    glColor3f(1,1,1);
    drawstring(-960,430,0.0,"GOAL!!!");
    glColor3f(1,1,1);
}

void fb(int x,int y)
{
   float th;
   glBegin(GL_POLYGON);
   glColor3f(1,1,1);
   //circle is 360 degree
   for(int i=0;i<360;i++)
   {
       //theta in radian
       th=i*(3.1416/180);
       //drawing circle with coordinates rcosth and rsinth
       //x and y is for shifting to correct position
       glVertex2f(x+20*cos(th),y+20*sin(th));
   }

   glEnd();

}

void ohead(int x,int y)
{
   float th;
   glBegin(GL_POLYGON);
   glColor3f(1,0,0);
   //circle is 360 degree
   for(int i=0;i<360;i++)
   {
       //theta in radian
       th=i*(3.1416/180);
       //drawing circle with coordinates rcosth and rsinth
       //x and y is for shifting to correct position
       glVertex2f(x+20*cos(th),y+20*sin(th));
   }

   glEnd();

}

void flag2()
{
    glLoadIdentity();
    glBegin(GL_LINES);
    glColor3f(0,0,0);
        glVertex2f(910,880);
        glVertex2f(910,940);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1,1,1);
        glVertex2f(950,840);
        glVertex2f(850,950);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1,1,0);
    glVertex2f(910,920);
    glVertex2f(910,940);
    glVertex2f(940,940);
    glVertex2f(940,920);
    glEnd();
}


void flag1()
{
    glLoadIdentity();
    glBegin(GL_LINES);
        glVertex2f(10,880);
        glVertex2f(10,940);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1,1,1);
        glVertex2f(0,840);
        glVertex2f(70,950);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1,1,0);
    glVertex2f(10,920);
    glVertex2f(10,940);
    glVertex2f(40,940);
    glVertex2f(40,920);
    glEnd();
}


void head(int x,int y)
{
   float th;
   glBegin(GL_POLYGON);
   glColor3f(0,0,0);
   //circle is 360 degree
   for(int i=0;i<360;i++)
   {
       //theta in radian
       th=i*(3.1416/180);
       //drawing circle with coordinates rcosth and rsinth
       //x and y is for shifting to correct position
       glVertex2f(x+20*cos(th),y+20*sin(th));
   }

   glEnd();

}


void circle(int x,int y)
{
   float theta;
    glLoadIdentity();
   glBegin(GL_LINE_LOOP);
   glColor3f(1.0,1.0,1.0);
   for(int i=0;i<360;i++)
   {
       theta=i*(3.1416/180);
       glVertex2f(x+150*cos(theta),y+150*sin(theta));
   }

   glEnd();

}
void penalty_mark_left(int x,int y)
{
   float theta;
   glBegin(GL_POLYGON);
    glLoadIdentity();
   glColor3f(1.0,1.0,1.0);
   for(int i=0;i<360;i++)
   {
       theta=i*(3.1416/180);
       glVertex2f(x+5*cos(theta),y+5*sin(theta));
   }

   glEnd();

}

void penalty_mark_right(int x,int y)
{
   float theta;
    glLoadIdentity();
   glBegin(GL_POLYGON);
   glColor3f(1.0,1.0,1.0);
   for(int i=0;i<360;i++)
   {
       theta=i*(3.1416/180);
       glVertex2f(x+5*cos(theta),y+5*sin(theta));
   }

   glEnd();

}

void Bottom_corner(int x,int y)
{
   float th;
    glLoadIdentity();
   glBegin(GL_LINES);
   glColor3f(1,1,1);
   for(int i=0;i<90;i++)
   {
       th=i*(3.1416/180);
       glVertex2f(x+45*cos(th),y+45*sin(th));
   }

   glEnd();

}
void D_Box_Arc_left(int x,int y)
{
   float th;
    glLoadIdentity();
   glBegin(GL_LINE_LOOP);
   glColor3f(1,1,1);
   for(int i=0;i<360;i++)
   {
       if(i<49 ){
           th=i*(3.1416/180);
       glVertex2f(x+75*cos(th),y+75*sin(th));}
        if(i>311 ){
           th=i*(3.1416/180);
       glVertex2f(x+75*cos(th),y+75*sin(th));}
   }

   glEnd();

}
void D_Box_Arc_right(int x,int y)
{
   float th;
    glLoadIdentity();
   glBegin(GL_LINE_LOOP);
   glColor3f(1,1,1);
   for(int i=0;i<360;i++)
   {
       if(i>131 )
        {
           th=i*(3.1416/180);
           glVertex2f(x+75*cos(th),y+75*sin(th));
           if(i>227){
            break;
           }
          }

   }

   glEnd();

}

void Player_head(int x,int y)
{
   float theta;
   glBegin(GL_POLYGON);
   glColor3f(0.0,0.0,0.0);
   for(int i=0;i<360;i++)
   {
       theta=i*(3.1416/180);
       glVertex2f(x+20*cos(theta),y+20*sin(theta));
   }

   glEnd();

}
void football(int x,int y)
{
   float theta;
   glBegin(GL_POLYGON);
   glColor3f(1.0,1.0,1.0);
   for(int i=0;i<360;i++)
   {
       theta=i*(3.1416/180);
       glVertex2f(x+20*cos(theta),y+20*sin(theta));
   }

   glEnd();

}

void ball()
{
    glLoadIdentity();
    glColor3f(0.0, 0.0, 0.0);
    glScaled(0.7,0.7,0.7);
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
     ps=ps+0.2;
     glTranslated(ps,20.0,0.0);

    fb(220,200);

}

void ball2()
{
    glLoadIdentity();
    glColor3f(0.0, 0.0, 0.0);
    glScaled(0.7,0.7,0.7);
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
    ss=ss+0.2;
    glTranslated(430,ss,0.0);

    fb(220,200);

}

void ball3()
{
    glLoadIdentity();
    glColor3f(0.0, 0.0, 0.0);
    glScaled(0.7,0.7,0.7);
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
    ks=ks+0.2;
    glTranslated(ks,420.0,0.0);

    fb(220,200);

}

void player()
{
     //head
    glLoadIdentity();
    glScaled(0.5,0.5,0.5);
    head(60,430);

    //body

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
    glScaled(0.5,0.5,0.5);
    //ps=ps+0.001;
    //glTranslated(ps,20.0,0.0);
    head(960,430);
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

void player2()
{
    glLoadIdentity();
    glColor3f(1.0,1.0,1.0);
    glScaled(0.5,0.5,0.5);
    //ps=ps+0.001;
    //glTranslated(ps,20.0,0.0);
    head(960,1030);
    glBegin(GL_POLYGON);
    glVertex2f(940,890);
    glVertex2f(940,1010);
    glVertex2f(980,1010);
    glVertex2f(980,890);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glVertex2f(950,860);
    glVertex2f(950,890);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glVertex2f(970,860);
    glVertex2f(970,890);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(910,980);
    glVertex2f(910,990);
    glVertex2f(1010,990);
    glVertex2f(1010,980);
    glEnd();

}

void player3()
{
    glLoadIdentity();
    glColor3f(1.0,1.0,1.0);
    glScaled(0.5,0.5,0.5);
    //ps=ps+0.001;
    //glTranslated(ps,20.0,0.0);
    ohead(960,1230);
    glBegin(GL_POLYGON);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(940,1090);
    glVertex2f(940,1210);
    glVertex2f(980,1210);
    glVertex2f(980,1090);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glVertex2f(950,1060);
    glVertex2f(950,1090);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glVertex2f(970,1060);
    glVertex2f(970,1090);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(910,1180);
    glVertex2f(910,1190);
    glVertex2f(1010,1190);
    glVertex2f(1010,1180);
    glEnd();

}

void goalkeeper()
{
    glLoadIdentity();
    glColor3f(1.0,1.0,1.0);
    glScaled(0.5,0.5,0.5);
    //t=t+0.2;
    //glTranslatef(1540,t,0.0);
    //ps=ps+0.001;
    //glTranslated(ps,20.0,0.0);
    ohead(1560,1230);
    glBegin(GL_POLYGON);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(1540,1090);
    glVertex2f(1540,1210);
    glVertex2f(1580,1210);
    glVertex2f(1580,1090);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glVertex2f(1550,1060);
    glVertex2f(1550,1090);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glVertex2f(1570,1060);
    glVertex2f(1570,1090);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(1510,1180);
    glVertex2f(1510,1190);
    glVertex2f(1610,1190);
    glVertex2f(1610,1180);
    glEnd();

}

void player4()
{
    glLoadIdentity();
    glColor3f(1.0,1.0,1.0);
    glScaled(0.5,0.5,0.5);
    //t=t+0.2;
    //glTranslatef(1540,t,0.0);
    //ps=ps+0.001;
    //glTranslated(ps,20.0,0.0);
    ohead(1560,430);
    glBegin(GL_POLYGON);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(1540,290);
    glVertex2f(1540,410);
    glVertex2f(1580,410);
    glVertex2f(1580,290);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glVertex2f(1550,260);
    glVertex2f(1550,290);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glVertex2f(1570,260);
    glVertex2f(1570,290);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(1510,380);
    glVertex2f(1510,390);
    glVertex2f(1610,390);
    glVertex2f(1610,380);
    glEnd();

}

void player5()
{
    glLoadIdentity();
    glColor3f(1.0,1.0,1.0);
    glScaled(0.5,0.5,0.5);
    //t=t+0.2;
    //glTranslatef(1540,t,0.0);
    //ps=ps+0.001;
    //glTranslated(ps,20.0,0.0);
    ohead(1760,430);
    glBegin(GL_POLYGON);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(1740,290);
    glVertex2f(1740,410);
    glVertex2f(1780,410);
    glVertex2f(1780,290);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glVertex2f(1750,260);
    glVertex2f(1750,290);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glVertex2f(1770,260);
    glVertex2f(1770,290);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(1710,380);
    glVertex2f(1710,390);
    glVertex2f(1810,390);
    glVertex2f(1810,380);
    glEnd();

}



void goalkeeper2()
{
    glLoadIdentity();
    glColor3f(1.0,1.0,1.0);
    glScaled(0.5,0.5,0.5);

    //glTranslated(100,t,0.0);
    //ps=ps+0.001;
    //glTranslated(ps,20.0,0.0);
    head(460,1230);
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(440,1090);
    glVertex2f(440,1210);
    glVertex2f(480,1210);
    glVertex2f(480,1090);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glVertex2f(450,1060);
    glVertex2f(450,1090);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glVertex2f(470,1060);
    glVertex2f(470,1090);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(410,1180);
    glVertex2f(410,1190);
    glVertex2f(510,1190);
    glVertex2f(510,1180);
    glEnd();

}

void player6()
{
    glLoadIdentity();
    glColor3f(1.0,1.0,1.0);
    glScaled(0.5,0.5,0.5);

    //glTranslated(100,t,0.0);
    //ps=ps+0.001;
    //glTranslated(ps,20.0,0.0);
    head(460,1530);
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(440,1390);
    glVertex2f(440,1510);
    glVertex2f(480,1510);
    glVertex2f(480,1390);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glVertex2f(450,1360);
    glVertex2f(450,1390);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glVertex2f(470,1360);
    glVertex2f(470,1390);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(410,1480);
    glVertex2f(410,1490);
    glVertex2f(510,1490);
    glVertex2f(510,1480);
    glEnd();

}

void player7()
{
    glLoadIdentity();
    glColor3f(1.0,1.0,1.0);
    glScaled(0.5,0.5,0.5);
    //t=t+0.2;
    //glTranslatef(1540,t,0.0);
    //ps=ps+0.001;
    //glTranslated(ps,20.0,0.0);
    ohead(1560,1530);
    glBegin(GL_POLYGON);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(1540,1390);
    glVertex2f(1540,1510);
    glVertex2f(1580,1510);
    glVertex2f(1580,1390);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glVertex2f(1550,1360);
    glVertex2f(1550,1390);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glVertex2f(1570,1360);
    glVertex2f(1570,1390);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(1510,1480);
    glVertex2f(1510,1490);
    glVertex2f(1610,1490);
    glVertex2f(1610,1480);
    glEnd();

}

void player8()
{
     //head
    glLoadIdentity();
    glScaled(0.5,0.5,0.5);
    head(360,630);

    //body

    glBegin(GL_POLYGON);
    glVertex2f(340,490);
    glVertex2f(340,610);
    glVertex2f(380,610);
    glVertex2f(380,490);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glVertex2f(350,460);
    glVertex2f(350,490);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glVertex2f(370,460);
    glVertex2f(370,490);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(310,580);
    glVertex2f(310,590);
    glVertex2f(410,590);
    glVertex2f(410,580);
    glEnd();

}


void goalkeeper3()
{
    glLoadIdentity();
    glColor3f(1.0,1.0,1.0);
    st=st-0.09;
    glTranslated(100,st,0.0);
    glScaled(0.5,0.5,0.5);
    //ps=ps+0.001;
    //glTranslated(ps,20.0,0.0);
    head(460,1230);
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(440,1090);
    glVertex2f(440,1210);
    glVertex2f(480,1210);
    glVertex2f(480,1090);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glVertex2f(450,1060);
    glVertex2f(450,1090);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glVertex2f(470,1060);
    glVertex2f(470,1090);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(410,1180);
    glVertex2f(410,1190);
    glVertex2f(510,1190);
    glVertex2f(510,1180);
    glEnd();

}

void player9()
{
    glLoadIdentity();
    glColor3f(1.0,1.0,1.0);
    glScaled(0.5,0.5,0.5);
    //t=t+0.2;
    //glTranslatef(1540,t,0.0);
    //ps=ps+0.001;
    //glTranslated(ps,20.0,0.0);
    ohead(1260,730);
    glBegin(GL_POLYGON);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(1240,590);
    glVertex2f(1240,710);
    glVertex2f(1280,710);
    glVertex2f(1280,590);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glVertex2f(1250,560);
    glVertex2f(1250,590);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glVertex2f(1270,560);
    glVertex2f(1270,590);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(1210,680);
    glVertex2f(1210,690);
    glVertex2f(1310,690);
    glVertex2f(1310,680);
    glEnd();

}



void display(void)
{
/*  clear all pixels  */
    glClear (GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    glColor3f (.2, 0.8, 0.5);//The field
    glBegin(GL_POLYGON);
        glVertex2f (0,0);
        glVertex2f (950, 0);
        glVertex2f (950, 950);
        glVertex2f (0, 950);

    glEnd();

    glColor3f(1.0,1.0,1.0);/*half line*/
    glBegin(GL_LINE_LOOP);
        glVertex2f (500, 0);
        glVertex2f (500, 950);
    glEnd();

    glColor3f(1.0,1.0,1.0);/*left D-Box lower horizontal line*/
    glBegin(GL_LINE_LOOP);
        glVertex2f (0, 250);
        glVertex2f (250, 250);
    glEnd();

    glColor3f(1.0,1.0,1.0);/*Left D-Box vertical line*/
    glBegin(GL_LINE_LOOP);
        glVertex2f (250, 250);
        glVertex2f (250, 750);
    glEnd();

    glColor3f(1.0,1.0,1.0);/*Left D-Box upper horizontal line */
    glBegin(GL_LINE_LOOP);
        glVertex2f (0, 750);
        glVertex2f (250, 750);
    glEnd();

    glColor3f(1.0,1.0,1.0);/*Right D-Box lower horizontal line*/
    glBegin(GL_LINE_LOOP);
        glVertex2f (750, 250);
        glVertex2f (950, 250);
    glEnd();

    glColor3f(1.0,1.0,1.0);/*Right D-Box upper horizontal line*/
    glBegin(GL_LINE_LOOP);
        glVertex2f (750, 750);
        glVertex2f (950, 750);
    glEnd();

    glColor3f(1.0,1.0,1.0);/*Right D-Box vertical line*/
    glBegin(GL_LINE_LOOP);
        glVertex2f (750, 250);
        glVertex2f (750, 750);
    glEnd();

    glColor3f(1.0,1.0,1.0);/*Left penalty box lower horizontal line*/
    glBegin(GL_LINE_LOOP);
        glVertex2f (0, 340);
        glVertex2f (150, 340);
    glEnd();

    glColor3f(1.0,1.0,1.0);/*Left penalty box upper horizontal line*/
    glBegin(GL_LINE_LOOP);
        glVertex2f (0, 660);
        glVertex2f (150, 660);
    glEnd();

    glColor3f(1.0,1.0,1.0);/*Left penalty box vertical line*/
    glBegin(GL_LINE_LOOP);
        glVertex2f (150, 340);
        glVertex2f (150, 660);
    glEnd();

    glColor3f(1.0,1.0,1.0);/*Right penalty box lower horizontal line*/
    glBegin(GL_LINE_LOOP);
        glVertex2f (850, 340);
        glVertex2f (950, 340);
    glEnd();

    glColor3f(1.0,1.0,1.0);/*Right penalty box upper horizontal line*/
    glBegin(GL_LINE_LOOP);
        glVertex2f (850, 660);
        glVertex2f (950, 660);
    glEnd();

    glColor3f(1.0,1.0,1.0);/*Right penalty box vertical line*/
    glBegin(GL_LINE_LOOP);
        glVertex2f (850, 340);
        glVertex2f (850, 660);
    glEnd();

    glRotatef(1.0, 0, 1.0, 0);
    glColor3f(0.95, 0.75, 0.0);//Player body
    glBegin(GL_POLYGON);
        glVertex2f(650,500);
        glVertex2f(700,500);
        glVertex2f(700,550);
        glVertex2f(650,550);
    glEnd();

    glColor3f(0.0, 0.35, 0.75);//Player left leg
    glBegin(GL_POLYGON);
        glVertex2f(650,500);
        glVertex2f(670,500);
        glVertex2f(670,460);
        glVertex2f(650,460);
    glEnd();

    glColor3f(0.0, 0.35, 0.75);//Player right leg
    glBegin(GL_POLYGON);
        glVertex2f(680,460);
        glVertex2f(700,460);
        glVertex2f(700,500);
        glVertex2f(680,500);
    glEnd();

    glColor3f(0.98, 0.75, 0.0);//Player right hand
    glBegin(GL_LINES);
        glVertex2f(700,550);
        glVertex2f(710,500);

    glEnd();

    glColor3f(0.98, 0.75, 0.0);//Player left hand
    glBegin(GL_LINES);
        glVertex2f(650,550);
        glVertex2f(640,500);

    glEnd();



    circle(500,500);
    penalty_mark_left(180,500);
    penalty_mark_right(820,500);
    //Bottom_corner(50,50);
    D_Box_Arc_left(200,500);
    D_Box_Arc_right(800,500);
    //Player_head(675,570);
    //football(630,470);
    player();
    player1();
    player2();
    player3();
    player4();
    player5();
    player6();
    player7();
    player8();
    player9();
    goalkeeper();
    goalkeeper2();
    flag1();
    flag2();
    //ball();

    if(ps>430 && ss<390)
    {
        ball2();
    }
    else if(ps<430)
    {
        ball();
    }
    else if(ss>390)
    {
        ball3();
    }

    if(ks>930)
    {
        text();
    }






/*  don't wait!
 *  start processing buffered OpenGL routines
 */
    glutSwapBuffers();
    glFlush();
}



void init ()
{
/*  select clearing (background) color       */
    glClearColor (0.5, 0.6, 0.7, 0.0);

/*  initialize viewing values  */
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0,950,0,950);
    glMatrixMode(GL_MODELVIEW);
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
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGBA|GLUT_DEPTH);
    //initializing window to 700*500
    glutInitWindowSize(950,950);
    //starting position of window
    glutInitWindowPosition(0,0);
    //Window title
    glutCreateWindow("Fifa World CUP");
    //initializing
    init();
    //initializing display
    glutDisplayFunc(display);
    //sets the global idle callback
    glutIdleFunc(display);
    //switching display after 3 seconds
    //glutTimerFunc(3000, MyTimerFunc, 0);
    //enters the GLUT event processing loop
    glutMainLoop();
    return 0;
}
