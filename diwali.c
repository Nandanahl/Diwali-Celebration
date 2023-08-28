#include<stdio.h>
#include<GL/glut.h>
#include<math.h>
#define PI 3.1415
float r;
float rotate = 0;
float X=2000,X1 = 400,X2= 300,X3 = 300;
int snow=1000;
int whichScene = 0,whichInfo = 0;
int selected = 0,colorSelection = 0;
int i,i1,i2,m,m1,m2,m3,m4,m5,m6;

void print(char *string,float r,float g,float b,int x,int y)
{
    glPushMatrix();
    glColor3f(1, 1, 1);
    glRasterPos2f(x, y);
    while(*string)
        glutBitmapCharacter( GLUT_BITMAP_TIMES_ROMAN_24, *string++);
    glPopMatrix();
}
void circle(int x,int y,int r,float red,float green,float blue)
{
    glColor3f(red,green,blue);
    glBegin(GL_POLYGON);
    for(float i=0;i<360;i=i+5)
        glVertex2f(r*sin(i*PI/180)+x,r*cos(i*PI/180)+y);
    glEnd();
}
void background()
{
    int    yx=600,yy=200;
  glClear(GL_COLOR_BUFFER_BIT);
  glBegin(GL_POLYGON);
  glColor3f(0.4,0.2,0.1);
  glPointSize(5.0);
  glVertex2f(yx+450,200+yy);
  glVertex2f(yx+450,600+yy);
  glVertex2f(yx+450,200+yy);
  glVertex2f(yx+1050,200+yy);
  glVertex2f(yx+1050,200+yy);
  glVertex2f(yx+1050,600+yy);
  glVertex2f(yx+450,600+yy);
  glVertex2f(yx+450,600+yy);
  glVertex2f(yx+750,750+yy);
  glVertex2f(yx+750,750+yy);
  glVertex2f(yx+1050,600+yy);
  glEnd();
  }
  //diwali functions
void sparkles(int x,int y)
{
  glColor3f(0,1,0);
  glBegin(GL_LINES);
  glVertex2f(x+15*sin(22*PI/180)+250,y+15*cos(22*PI/180)+2750);
  glVertex2f(x+100*sin(22*PI/180)+250,y+100*cos(22*PI/180)+2750);
  glEnd();

  glColor3f(0,1,0);
  glBegin(GL_LINES);
  glVertex2f(x+10*sin(45*PI/180)+250,y+15*cos(45*PI/180)+2750);
  glVertex2f(x+135*sin(45*PI/180)+250,y+135*cos(45*PI/180)+2750);
  glEnd();

  glColor3f(1,0,0);
  glBegin(GL_LINES);
  glVertex2f(x+15*sin(75*PI/180)+250,y+15*cos(75*PI/180)+2750);
  glVertex2f(x+100*sin(75*PI/180)+250,y+100*cos(75*PI/180)+2750);
  glEnd();

  glColor3f(1,0,0);
  glBegin(GL_LINES);
  glVertex2f(x+15*sin(110*PI/180)+250,y+15*cos(110*PI/180)+2750);
  glVertex2f(x+100*sin(110*PI/180)+250,y+100*cos(110*PI/180)+2750);
  glEnd();

  glColor3f(0,0,1);
  glBegin(GL_LINES);
  glVertex2f(x+15*sin(135*PI/180)+250,y+15*cos(135*PI/180)+2750);
  glVertex2f(x+135*sin(135*PI/180)+250,y+135*cos(135*PI/180)+2750);
  glEnd();

  glColor3f(1,0,0);
  glBegin(GL_LINES);
  glVertex2f(x+15*sin(150*PI/180)+250,y+15*cos(150*PI/180)+2750);
  glVertex2f(x+65*sin(150*PI/180)+250,y+65*cos(150*PI/180)+2750);
  glEnd();

  glColor3f(1,0,0);
  glBegin(GL_LINES);
  glVertex2f(x+15*sin(200*PI/180)+250,y+15*cos(200*PI/180)+2750);
  glVertex2f(x+100*sin(200*PI/180)+250,y+100*cos(200*PI/180)+2750);
  glEnd();

  glColor3f(1,0,1);
  glBegin(GL_LINES);
  glVertex2f(x+15*sin(225*PI/180)+250,y+15*cos(225*PI/180)+2750);
  glVertex2f(x+135*sin(225*PI/180)+250,y+135*cos(225*PI/180)+2750);
  glEnd();

  glColor3f(1,0,0);
  glBegin(GL_LINES);
  glVertex2f(x+15*sin(250*PI/180)+250,y+15*cos(250*PI/180)+2750);
  glVertex2f(x+100*sin(250*PI/180)+250,y+100*cos(250*PI/180)+2750);
  glEnd();
}

void drawGirl(int x,int y)
{
      // shoes curve
  glColor3f(0,0,0);
  glBegin(GL_POINTS);
  for(i=0;i<180;i++)
      glVertex2f(x+5*sin(i*PI/180)+1060,y+15*cos(i*PI/180)+585);

  for(i=180;i<360;i++)
      glVertex2f(x+5*sin(i*PI/180)+930,y+15*cos(i*PI/180)+585);
  glEnd();
  //girl
  glColor3f(0,0,0);
  glBegin(GL_LINES);
  //right leg
  glVertex2f(x+1020,y+570);
  glVertex2f(x+1020,y+700);
  glVertex2f(x+1040,y+600);
  glVertex2f(x+1040,y+700);

  glVertex2f(x+1020,y+570);
  glVertex2f(x+1060,y+570);
  glVertex2f(x+1040,y+600);
  glVertex2f(x+1060,y+600);

  //left leg
  glVertex2f(x+970,y+570);
  glVertex2f(x+970,y+700);
  glVertex2f(x+950,y+600);
  glVertex2f(x+950,y+700);
  glVertex2f(x+970,y+570);
  glVertex2f(x+930,y+570);
  glVertex2f(x+950,y+600);
  glVertex2f(x+930,y+600);
  glEnd();

  glColor3f(1,0,0);
  glBegin(GL_POLYGON);

  glVertex2f(x+995,y+1020);
  glVertex2f(x+1010,y+1060);
  glVertex2f(x+1040,y+1060);
  glVertex2f(x+1010,y+1060);

  for(i=180;i<360;i++)
     glVertex2f(x+15*sin(i*PI/180)+1040,y+80*cos(i*PI/180)+980);
  glVertex2f(x+950,y+900);
  glVertex2f(x+1040,y+900);

  for(i=180;i>0;i--)
     glVertex2f(x+15*sin(i*PI/180)+950,y+80*cos(i*PI/180)+980);
  glVertex2f(x+950,y+1060);
  glVertex2f(x+980,y+1060);
  glVertex2f(x+980,y+1060);
  glVertex2f(x+995,y+1020);
  glEnd();
  glColor3f(0,0,0);
  //shoulder
  glBegin(GL_LINES);
    //hand left
  glVertex2f(x+950,y+1060);
  glVertex2f(x+935,y+1020);
  glVertex2f(x+935,y+1020);
  glVertex2f(x+910,y+1040);
  glVertex2f(x+960,y+1050);
  glVertex2f(x+935,y+1000);
  glVertex2f(x+935,y+1000);
  glVertex2f(x+910,y+1020);
  glVertex2f(x+910,y+1020);
  glVertex2f(x+910,y+1040);
  //hand right
  glVertex2f(x+1040,y+1060);
  glVertex2f(x+1050,y+850);
  glVertex2f(x+1030,y+1050);
  glVertex2f(x+1040,y+850);
  glVertex2f(x+1040,y+850);
  glVertex2f(x+1050,y+850);
 //neck
  glVertex2f(x+980,y+1060);
  glVertex2f(x+985,y+1100);
  glVertex2f(x+1010,y+1060);
  glVertex2f(x+1005,y+1100);
  glVertex2f(x+910,y+1040);
  glVertex2f(x+910,y+1060);
  glEnd();
  glLineWidth(3.0);
  glColor3f(0.7,0.7,0.7);
  glBegin(GL_LINES);
    //sursurbatti in left hand
  glVertex2f(x+910,y+1060);
  glVertex2f(x+910,y+1150);
  glEnd();
  glLineWidth(1.0);

  glColor3f(0,1,0);
  glBegin(GL_LINES);
  glVertex2f(x+15*sin(22*PI/180)+910,y+15*cos(22*PI/180)+1150);
  glVertex2f(x+35*sin(22*PI/180)+910,y+35*cos(22*PI/180)+1150);
  glEnd();

  glColor3f(0,1,0);
  glBegin(GL_LINES);
  glVertex2f(x+10*sin(45*PI/180)+910,y+15*cos(45*PI/180)+1150);
  glVertex2f(x+60*sin(45*PI/180)+910,y+60*cos(45*PI/180)+1150);
  glEnd();

  glColor3f(1,0,0);
  glBegin(GL_LINES);
  glVertex2f(x+15*sin(75*PI/180)+910,y+15*cos(75*PI/180)+1150);
  glVertex2f(x+35*sin(75*PI/180)+910,y+35*cos(75*PI/180)+1150);
  glEnd();

  glColor3f(0.5,0.25,1);
  glBegin(GL_LINES);
  glVertex2f(x+15*sin(325*PI/180)+910,y+15*cos(325*PI/180)+1150);
  glVertex2f(x+60*sin(325*PI/180)+910,y+60*cos(325*PI/180)+1150);
  glEnd();

  glColor3f(1,0,0);
  glBegin(GL_LINES);
  glVertex2f(x+15*sin(345*PI/180)+910,y+15*cos(345*PI/180)+1150);
  glVertex2f(x+35*sin(345*PI/180)+910,y+35*cos(345*PI/180)+1150);
  glEnd();
  //face
  glColor3f(0,0,0);
  glBegin(GL_POINTS);
  for(i=0;i<360;i++)
     glVertex2f(x+30*sin(i*PI/180)+995,y+50*cos(i*PI/180)+1140);
  glEnd();
  //eyes
  glBegin(GL_POLYGON);
  for(i=0;i<360;i++)
     glVertex2f(x+5*sin(i*PI/180)+980,y+5*cos(i*PI/180)+1150);
  glEnd();
  glBegin(GL_POLYGON);
  for(i=0;i<360;i++)
    glVertex2f(x+5*sin(i*PI/180)+1010,y+5*cos(i*PI/180)+1150);
  glEnd();
  //smile
  glBegin(GL_POINTS);
  for(i=90;i<270;i++)
    glVertex2f(x+15*sin(i*PI/180)+995,y+15*cos(i*PI/180)+1130);
  glEnd();
  //hair
  glPointSize(3.0);
  glBegin(GL_POINTS);
  for(i=270;i<360;i++)
     glVertex2f(x+35*sin(i*PI/180)+995,y+60*cos(i*PI/180)+1140);
  glEnd();
  glBegin(GL_POINTS);
  for(i=0;i<90;i++)
     glVertex2f(x+35*sin(i*PI/180)+995,y+60*cos(i*PI/180)+1140);
  glEnd();
  //pony
  glLineWidth(3.0);
  glBegin(GL_LINES);
  glVertex2f(x+1030,y+1140);
  glVertex2f(x+1030,y+1060);
  glVertex2f(x+960,y+1140);
  glVertex2f(x+960,y+1060);
  glEnd();
  glLineWidth(1.0);
  glPointSize(1.0);
  //skirt
 glColor3f(1.0,0.5,0);
  glBegin(GL_POLYGON);
  glVertex2f(x+1070,y+700);
  glVertex2f(x+920,y+700);
  glVertex2f(x+920,y+700);
  glVertex2f(x+950,y+900);
  glVertex2f(x+1070,y+700);
  glVertex2f(x+1040,y+900);
  glVertex2f(x+950,y+900);
  glVertex2f(x+1040,y+900);
  glEnd();
}
void chakkar()
{
    glTranslatef(1200,600,0);
    glRotatef(rotate,0,0,1);

  glColor3f(1,0.5,0.25);
  glBegin(GL_POLYGON);
  for(i=0;i<360;i++)
      glVertex2f(60*sin(i*PI/180)+0,60*cos(i*PI/180)+0);
  glEnd();
  glColor3f(1,0.5,1);
  glBegin(GL_POLYGON);
  for(i=0;i<360;i++)
      glVertex2f(40*sin(i*PI/180)+0,40*cos(i*PI/180)+0);
  glEnd();
  glColor3f(0,1,1);
  glBegin(GL_POLYGON);
  for(i=0;i<360;i++)
      glVertex2f(20*sin(i*PI/180)+0,20*cos(i*PI/180)+0);
  glEnd();
  glColor3f(1,0.5,0);
  glBegin(GL_POLYGON);
  glVertex2f(0,60);
  glVertex2f(100,60);
  glVertex2f(60,0);
  glVertex2f(100,0);
  glVertex2f(100,0);
  glVertex2f(100,60);
  glEnd();
  glBegin(GL_POINTS);
  for(i=0;i<30;i++)
      glVertex2f(100*sin(i*PI/180)+100,100*cos(i*PI/180)-100);
  glEnd();

  glColor3f(0,0.2,0);
  glBegin(GL_LINES);
  glVertex2f(105,20);
  glVertex2f(140,20);
  glEnd();

  glColor3f(0,0,1);
  glBegin(GL_LINES);
  glVertex2f(105,40);
  glVertex2f(160,40);
  glEnd();

  glColor3f(1,0.5,0.5);
  glBegin(GL_LINES);
  glVertex2f(105,50);
  glVertex2f(150,50);
  glEnd();

  glColor3f(1,0,0);
  glBegin(GL_LINES);
  glVertex2f(100,59);
  glVertex2f(150,59);
  glEnd();
}

void flowerpot()
{
      //flowerpot
  glColor3f(0.25,0.0,0.25);
  glBegin(GL_POLYGON);
  glVertex2f(2100,500);
  glVertex2f(2200,500);
  glVertex2f(2150,700);
  glEnd();

  glPointSize(2.0);

  if(rotate>180&&rotate<210){
    glColor3f(1,0,0);
    glBegin(GL_POINTS);
    for(i=30;i<90;i++)
      glVertex2f(200*sin(i*PI/180)+1930,250*cos(i*PI/180)+720);
    glEnd();
    glColor3f(1,0,0);
    glBegin(GL_POINTS);
    for(i=270;i<330;i++)
      glVertex2f(200*sin(i*PI/180)+2360,250*cos(i*PI/180)+720);
    glEnd();
    glColor3f(0,1,0);
    glBegin(GL_POINTS);
    for(i=20;i<90;i++)
      glVertex2f(200*sin(i*PI/180)+1935,250*cos(i*PI/180)+780);
    glEnd();
    glColor3f(0,1,0);
    glBegin(GL_POINTS);
    for(i=270;i<340;i++)
      glVertex2f(200*sin(i*PI/180)+2355,250*cos(i*PI/180)+780);
    glEnd();
    glColor3f(0,0,1);
    glBegin(GL_POINTS);
    for(i=10;i<90;i++)
      glVertex2f(200*sin(i*PI/180)+1940,250*cos(i*PI/180)+840);
    glEnd();
    glColor3f(0,0,1);
    glBegin(GL_POINTS);
    for(i=270;i<350;i++)
      glVertex2f(200*sin(i*PI/180)+2350,250*cos(i*PI/180)+840);
    glEnd();
  }
    glPointSize(1.0);
}

void diwali()
{
      glClear(GL_COLOR_BUFFER_BIT);
  //left part of house
  glColor3f(1,0.5,0.5);
  glBegin(GL_POLYGON);
  glVertex2f(500,1000);
  glVertex2f(1000,1000);
  glVertex2f(1000,2050);
  glVertex2f(500,2050);
  glEnd();
  //left house top
  glColor3f(0.5,0,0);
  glBegin(GL_POLYGON);
  glVertex2f(500,2050);
  glVertex2f(550,2300);
  glVertex2f(1000,2300);
  glVertex2f(1000,2050);
  glEnd();
  //right part of house
  glColor3f(1,0.5,0.5);
  glBegin(GL_POLYGON);
  glVertex2f(2500,1000);
  glVertex2f(2000,1000);
  glVertex2f(2000,2050);
  glVertex2f(2500,2050);
  glEnd();
  //right house top
  glColor3f(0.5,0,0);
  glBegin(GL_POLYGON);
  glVertex2f(2500,2050);
  glVertex2f(2450,2300);
  glVertex2f(2000,2300);
  glVertex2f(2000,2050);
  glEnd();
   //centre house top
  glColor3f(0.7,0,0);
  glBegin(GL_POLYGON);
  glVertex2f(900,2200);
  glVertex2f(1200,2700);
  glVertex2f(1800,2700);
  glVertex2f(2100,2200);
  glEnd();
  //centre house
  glColor3f(1,0.7,0.5);
  glBegin(GL_POLYGON);
  glVertex2f(1000,1000);
  glVertex2f(1000,2200);
  glVertex2f(2000,2200);
  glVertex2f(2000,1000);
  glEnd();

  //lines for house
  glColor3f(1.0,1.0,1.0);
  glBegin(GL_LINES);
  // left house
  glVertex2f(500,2000);
  glVertex2f(1000,2000);
  glVertex2f(500,2050);
  glVertex2f(1000,2050);
  //right house
  glVertex2f(2000,2000);
  glVertex2f(2500,2000);
  glVertex2f(2000,2050);
  glVertex2f(2500,2050);
  //centre house
  glVertex2f(1000,1000);
  glVertex2f(1000,2200);
  glVertex2f(2000,1000);
  glVertex2f(2000,2200);
  glEnd();
  //windows
  glColor3f(1.0,1.0,1.0);
  glBegin(GL_LINE_LOOP);
  glVertex2f(650,1400);
  glVertex2f(850,1400);
  glVertex2f(850,1600);
  glVertex2f(650,1600);
  glEnd();

  glColor3f(1.0,1.0,1.0);
  glBegin(GL_LINE_LOOP);
  glVertex2f(2150,1400);
  glVertex2f(2350,1400);
  glVertex2f(2350,1600);
  glVertex2f(2150,1600);
  glEnd();

  //door
  glColor3f(1.0,1.0,1.0);
  glBegin(GL_LINES);
  glVertex2f(1400,1000);
  glVertex2f(1400,1500);
  glVertex2f(1600,1000);
  glVertex2f(1600,1500);
  glEnd();

  glColor3f(1,1,1);
  glBegin(GL_POINTS);
  for(i=0;i<90;i++)
     glVertex2f(100*sin(i*PI/180)+1500,100*cos(i*PI/180)+1500);
  glEnd();
  glColor3f(1,1,1);
  glBegin(GL_POINTS);
  for(i=270;i<360;i++)
     glVertex2f(100*sin(i*PI/180)+1500,100*cos(i*PI/180)+1500);
  glEnd();

  //compound
  glColor3f(0.5,0.6,0.4);
  glBegin(GL_POLYGON);
  glVertex2f(500,1000);
  glVertex2f(300,300);
  glVertex2f(2800,300);
  glVertex2f(2500,1000);
  glEnd();

  //deepa1
  glColor3f(1,0,0);
  glBegin(GL_POLYGON);
  for(i=90;i<270;i++)
      glVertex2f(50*sin(i*PI/180)+400,50*cos(i*PI/180)+400);
  glEnd();

  //flame for deepa1
  glColor3f(1,0.5,0);
  glBegin(GL_POLYGON);
  for(i=0;i<360;i++)
      glVertex2f(5*sin(i*PI/180)+450,50*cos(i*PI/180)+450);
  glEnd();

  //deepa 2
  glColor3f(1,0,0);
  glBegin(GL_POLYGON);
  for(i=90;i<270;i++)
      glVertex2f(50*sin(i*PI/180)+2650,50*cos(i*PI/180)+400);
  glEnd();

  //flame for deepa 2
  glColor3f(1,0.5,0);
  glBegin(GL_POLYGON);
  for(i=0;i<360;i++)
      glVertex2f(5*sin(i*PI/180)+2600,50*cos(i*PI/180)+450);
  glEnd();

  //edge of compound
  glColor3f(0.3,0,0);
  glBegin(GL_POLYGON);
  glVertex2f(300,250);
  glVertex2f(300,300);
  glVertex2f(2800,300);
  glVertex2f(2800,250);
  glEnd();

  drawGirl(-100,0);
  drawGirl(800,100);
  flowerpot();
  sparkles(0,0);
  sparkles(500,0);
  sparkles(2100,0);
  glPushMatrix();
  chakkar();
  glPopMatrix();
}
void colorBox(int x,float r,float g,float b)
{
    glColor3f(r,g,b);
    glBegin(GL_POLYGON);
    for(i=90;i<270;i++)
        glVertex2f(x+50*sin(i*PI/180)+1400,20*cos(i*PI/180)+400);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(x+1350,400);
    glVertex2f(x+1350,600);
    glVertex2f(x+1350,600);
    glVertex2f(x+1450,600);
    glVertex2f(x+1450,600);
    glVertex2f(x+1450,400);
    glVertex2f(x+1450,400);
    glVertex2f(x+1350,400);
    glEnd();
        glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    for(i=0;i<360;i++)
        glVertex2f(x+50*sin(i*PI/180)+1400,20*cos(i*PI/180)+600);
    glEnd();
}
void display()
{
    diwali();
    glFlush();
}
void idle()
{
        rotate += 0.5;
        if(rotate>360) rotate -= 360;
        glutPostRedisplay();
    }
void init()
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0,3000,0,3000);
}

  int main(int argc,char** argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_RGB);
    glutInitWindowSize(1750,650);
    glutCreateWindow("Festivals");
    glutInitWindowPosition(0,0);
    glutDisplayFunc(display);
    glutIdleFunc(idle);
    init();
    glutMainLoop();
}
