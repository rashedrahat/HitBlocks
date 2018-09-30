#include<windows.h>
#include<stdio.h>
#include <math.h>
#include<GL/glut.h>
#include<string.h>
#include <mmsystem.h>

//display size
int maxy=600, count=0, maxx=500;
//spreed control
float n=.4f,m=3;
//initial dic
int count1=0,count2=0,count3=0,count4=0,count5=0,count6=0,count7=0,count8=0,count9=0,count10=0;
//arrow pointer
float x=25,y=50;
//10blocks
char str[10];
void id1();
void id();
void draw_target();
void redraw();

void initRendering() {
	glEnable(GL_DEPTH_TEST);
}


/*to display bitmap char*/
//to write in the display
void bitmap_output(int x,int y,char *string,void *font)
{
int len,i;
glRasterPos2f(x,y);
len=(int)strlen(string);
for(i=0;i<len;i++)
{
glutBitmapCharacter(font,string[i]);
}
return;
}

/*based on count display no of arrows and result of game*/
void counting()
{
int countp=0;
sprintf(str,"No of arrows:%d",count);
bitmap_output(400,40,str,GLUT_BITMAP_HELVETICA_18);

sprintf(str,"No of HIT:%d",countp);
bitmap_output(300,40,str,GLUT_BITMAP_HELVETICA_18);
//display score
for (int countp=0;countp<10;countp++)
{if(count1==1)
{
    //countp=countp+1;
    //countp=countp;
    sprintf(str,"No of HIT:%d",countp);
    //countp=countp+1;
    //countp=countp;
bitmap_output(300,40,str,GLUT_BITMAP_HELVETICA_18);
}
if(count2==1)
{
    //countp=countp+1;
    //countp=countp;
    sprintf(str,"No of HIT:%d",countp);
    //countp+=countp;
bitmap_output(300,40,str,GLUT_BITMAP_HELVETICA_18);
}
if(count3==1)
{
//    countp=countp+1;
//    countp=countp;
    sprintf(str,"No of HIT:%d",countp);
    //countp+=countp;
bitmap_output(300,40,str,GLUT_BITMAP_HELVETICA_18);
}
if(count4==1)
{
  //  countp=countp+1;
    //countp=countp;
    sprintf(str,"No of HIT:%d",countp);
    //countp+=countp;
bitmap_output(300,40,str,GLUT_BITMAP_HELVETICA_18);
}
if(count5==1)
{
    //countp=countp+1;
    //countp=countp;
    sprintf(str,"No of HIT:%d",countp);
   // countp+=countp;
bitmap_output(300,40,str,GLUT_BITMAP_HELVETICA_18);
}
if(count6==1)
{
    //countp=countp+1;
    //countp=countp;
    sprintf(str,"No of HIT:%d",countp);
    //countp+=countp;
bitmap_output(300,40,str,GLUT_BITMAP_HELVETICA_18);
}
if(count7==1)
{
 //   countp=countp+1;
   // countp=countp;
    sprintf(str,"No of HIT:%d",countp);
    //countp+=countp;
bitmap_output(300,40,str,GLUT_BITMAP_HELVETICA_18);
}
if(count8==1)
{
    countp=countp+1;
    countp=countp;
    sprintf(str,"No of HIT:%d",countp);
    //countp+=countp;
bitmap_output(300,40,str,GLUT_BITMAP_HELVETICA_18);
}
if(count9==1)
{
    countp=countp+1;
    countp=countp;
    sprintf(str,"No of HIT:%d",countp);
    //countp+=countp;
bitmap_output(300,40,str,GLUT_BITMAP_HELVETICA_18);
}
if(count10==1)
{
    //countp=countp+1;
    //countp=countp;
    sprintf(str,"No of HIT:%d",countp);
    //countp+=countp;
bitmap_output(300,40,str,GLUT_BITMAP_HELVETICA_18);
}
}
//to hit10 blocks u will win
if(count1==1 && count2==1 && count3==1 && count4==1 && count5==1 && count6==1 && count7==1 && count8==1 && count9==1 && count10==1)
{
bitmap_output(5,300,"CONGRATULATIONS Y O U W O N!!",GLUT_BITMAP_TIMES_ROMAN_24);
glutIdleFunc(NULL);
}
else if(count>=15)
{
sprintf(str,"NO of arrows:%d , No Of Arrows Over G A M E L O S T!!!",count);
bitmap_output(5,300,str,GLUT_BITMAP_TIMES_ROMAN_24);
glutIdleFunc(NULL);
}
}

//TO CHECK WHETHER ARROW HITS TARGET
//the arrow hit the blocks or not checking
void disa()
{
if((x+110==300) && (y>=435 && y<=465) && (!count1))
{
count1=1;
x=25;
y=0;
count++;
glutIdleFunc(id);
}
else if((x+110 == 375)&&(y>=385&&y<=415) && (!count2))
{
count2=1;
x=25;
y=0;
count++;
glutIdleFunc(id);
}
else if((x+110==399)&&(y>=465 &&y<=495)&&(!count3))
{
count3=1;
x=25;
y=0;
count++;
glutIdleFunc(id);
}
else if((x+110==249)&&(y>=355&&y<=385)&&(!count4))

{
count4=1;
x=25;
y=0;
count++;
glutIdleFunc(id);
}
else if((x+110==351)&&(y>=315&&y<=345)&&(!count5))
{
count5=1;
x=25;
y=0;
count++;
glutIdleFunc(id);
}
else if((x+110==450)&&(y>=275&&y<=305)&&(!count6))
{
count6=1;
x=25;
y=0;
count++;
glutIdleFunc(id);
}
else if((x+110==330)&&(y>=230&&y<=260)&&(!count7))
{
count7=1;
x=25;
y=0;
count++;
glutIdleFunc(id);
}
else if((x+110==201)&&(y>=185&&y<=215)&&(!count8))
{
count8=1;
x=25;
y=0;
count++;
glutIdleFunc(id);
}
else if((x+110==339)&&(y>=135&&y<=165)&&(!count9))
{
count9=1;
x=25;
y=0;
count++;
glutIdleFunc(id);
}
else if((x+110==300)&&(y>=85&&y<=115)&&(!count10))
{
count10=1;
x=25;
y=0;
count++;
glutIdleFunc(id);
}
}

/*to move arrow up*/
//n means transfrom arrow
void id()
{
y+=n;
disa();
if(y>maxy)
{
y=0;
count++;
}
glutPostRedisplay();
}

void sun()
{
    glPushMatrix(); //Save the current state of transformations
    glColor3f(1,0,0);
	glTranslatef(0,0,0); //Move to the center of the triangle
	glRotatef(0, 0.0, 0.0, 0.0); //Rotate about the the vector (1, 2, 3)
	glBegin(GL_TRIANGLE_FAN);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=1.0;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();
}

//to draw arrow
void disp()
{
glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
glLoadIdentity();
glColor3f(1,1,0);
bitmap_output(200,480,"BLOCKSHOOTING",GLUT_BITMAP_TIMES_ROMAN_24);
counting();
//Drawing  of arrow
//x y value given  before
glColor3f(0,1,1);
glBegin(GL_LINES);
glVertex2d(x,y);
glVertex2d(x+20,y);
glEnd();

glLineWidth(2);
glBegin(GL_LINES);
glVertex2d(x,y+2);
glVertex2d(x+100,y-2);
glEnd();

glBegin(GL_LINES);
glVertex2d(x,y-2);
glVertex2d(x+100,y-2);
glEnd();

glBegin(GL_TRIANGLES);
glVertex2d (x+100,y+3);
glVertex2d(x+110,y);
glVertex2d(x+100,y-3);
glEnd();

glBegin(GL_QUADS);
glVertex2d(x,y+3);
glVertex2d(x,y-3);
glVertex2d(x-10,y-5);
glVertex2d(x-10,y+5);
glEnd();

sun();

draw_target();
glFlush();
glutSwapBuffers();
}

void init()
{
glClearColor(0,0,0,1);
glColor3f(1,0,0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0,500,0,500);
glMatrixMode(GL_MODELVIEW);
}

//to draw the target inside the loop

void draw_target()
{
if(count1==0)
{
    //inside clr
glColor3ub(102,0,0);
glPointSize(15);
glBegin(GL_POINTS);
glVertex2d(300,450);
glEnd();

//outside clr
glColor3ub(255,51,153);
glBegin(GL_LINE_LOOP);///change here for value
glVertex2d(285,450);
glVertex2d(300,465);
glVertex2d(315,450);
glVertex2d(300,435);
glEnd();


}
else
{
glColor3ub(255,255,255);
glPointSize(20);
glBegin(GL_POINTS);
glVertex2d(300,450);
glEnd();
}
if(count2==0)
{
glColor3ub(51,102,0);
glPointSize(15);
glBegin(GL_POINTS);
glVertex2d(375,400);
glEnd();

glColor3ub(0,128,255);
glBegin(GL_LINE_LOOP);
glVertex2d(360,400);
glVertex2d(375,415);
glVertex2d(390,400);
glVertex2d(375,385);
glEnd();
}
else
{
glColor3ub(255,255,255);
glPointSize(20);
glBegin(GL_POINTS);
glVertex2d(375,400);
glEnd();
}
if(count3==0)
{
glColor3ub(255,255,51);
glPointSize(15);
glBegin(GL_POINTS);
glVertex2d(400,480);
glEnd();

glColor3ub(0,102,0);
glBegin(GL_LINE_LOOP);
glVertex2d(385,480);
glVertex2d(400,495);
glVertex2d(415,480);
glVertex2d(400,465);
glEnd();
}
else
{
glColor3ub(255,255,255);
glPointSize(20);
glBegin(GL_POINTS);
glVertex2d(400,480);
glEnd();
}
if(count4==0)
{
glColor3ub(102,0,51);
glPointSize(15);
glBegin(GL_POINTS);
glVertex2d(250,370);
glEnd();

glColor3ub(255,102,102);
glBegin(GL_LINE_LOOP);
glVertex2d(235,370);
glVertex2d(250,385);
glVertex2d(265,370);
glVertex2d(250,355);
glEnd();
}
else
{
glColor3ub(255,255,255);
glPointSize(20);
glBegin(GL_POINTS);
glVertex2d(250,370);
glEnd();
}
if(count5==0)
{
glColor3ub(25,0,51);
glPointSize(15);
glBegin(GL_POINTS);
glVertex2d(350,330);
glEnd();

glColor3ub(0,255,255);
glBegin(GL_LINE_LOOP);
glVertex2d(335,330);
glVertex2d(350,345);
glVertex2d(365,330);
glVertex2d(350,315);
glEnd();
}
else
{
glColor3ub(255,255,255);
glPointSize(20);
glBegin(GL_POINTS);
glVertex2d(350,330);
glEnd();
}
if(count6==0)
{
glColor3ub(0,51,25);
glPointSize(15);
glBegin(GL_POINTS);
glVertex2d(450,290);
glEnd();

glColor3ub(0,0,102);
glBegin(GL_LINE_LOOP);
glVertex2d(435,290);
glVertex2d(450,305);
glVertex2d(465,290);
glVertex2d(450,275);
glEnd();
}
else
{
glColor3ub(255,255,255);
glPointSize(20);
glBegin(GL_POINTS);
glVertex2d(450,290);
glEnd();
}
if(count7==0)
{
glColor3ub(178,255,102);
glPointSize(15);
glBegin(GL_POINTS);
glVertex2d(330,245);
glEnd();

glColor3ub(51,51,0);
glBegin(GL_LINE_LOOP);
glVertex2d(315,245);
glVertex2d(330,260);
glVertex2d(345,245);
glVertex2d(330,230);
glEnd();
}
else
{
glColor3ub(255,255,255);
glPointSize(20);
glBegin(GL_POINTS);
glVertex2d(330,245);
glEnd();
}
if(count8==0)
{
glColor3ub(255,0,0);
glPointSize(15);
glBegin(GL_POINTS);
glVertex2d(200,200);
glEnd();

glColor3ub(102,0,102);
glBegin(GL_LINE_LOOP);
glVertex2d(185,200);
glVertex2d(200,215);
glVertex2d(215,200);
glVertex2d(200,185);
glEnd();
}
else
{
glColor3ub(255,255,255);
glPointSize(20);
glBegin(GL_POINTS);
glVertex2d(200,200);
glEnd();
}
if(count9==0)
{
glColor3ub(204,0,204);
glPointSize(15);
glBegin(GL_POINTS);
glVertex2d(400,150);
glEnd();

glColor3ub(51,0,51);
glBegin(GL_LINE_LOOP);
glVertex2d(385,150);
glVertex2d(400,165);
glVertex2d(415,150);
glVertex2d(400,135);
glEnd();
}
else
{
glColor3ub(255,255,255);
glPointSize(20);
glBegin(GL_POINTS);
glVertex2d(400,150);
glEnd();
}
if(count10==0)
{
glColor3ub(153,255,0);
glPointSize(15);
glBegin(GL_POINTS);
glVertex2d(300,100);
glEnd();

glColor3ub(0,0,153);
glBegin(GL_LINE_LOOP);
glVertex2d(285,100);
glVertex2d(300,115);
glVertex2d(315,100);
glVertex2d(300,85);
glEnd();
}
else
{
glColor3ub(255,255,255);
glPointSize(20);
glBegin(GL_POINTS);
glVertex2d(300,100);
glEnd();
}
glFlush();
}

//to move the arrow right when right button pressed
void id1()
{
x+=m;
disa();

if(x+110>maxx)
{
x=25;
y=0;
count++;


glutIdleFunc(id);

}
glutPostRedisplay();
}

//set key to perform desired operation
void keys(int key, int r,int q)
{
    switch (key){

	case GLUT_KEY_RIGHT:
	    sndPlaySound("Arrow+Swoosh+2.wav",SND_FILENAME|SND_LOOP);

		  glutIdleFunc(id1);
		glutPostRedisplay();

		//break;




	//default:
		//break;


	}



}
//esc aski value 27
void keyboard(unsigned char key, int x, int y) {
   switch (key) {
      case 27:     // ESC key
         exit(0);
         break;
   }
}



//sub menu to display instructions
void demo_menu(int i)
{
switch(i)
{
case 5:
case 6:
case 7:
case 8:break;
}
}

//sub menu to display designer names
void demo(int i)
{
switch(i)
{
case 9:
case 10:
case 11:break;
}
}
void game(int id)
{
switch(id);
{
}
}




int main(int argc,char **argv)
{
int sub_menu;
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB|GLUT_DEPTH);

initRendering();

glutCreateWindow("HIT BLOCKS");
sub_menu=glutCreateMenu(demo_menu);
glutAddMenuEntry(" right  to move right",5);
glutAddMenuEntry("A total of i5 arrows and 10 blocks are present",6);
glutAddMenuEntry("You loose the game if the arrow count exceeds the blocks count",7);
glutAddMenuEntry("or else you win",8);
glutCreateMenu(game);

glutAddSubMenu("INSTRUCTIONS",sub_menu);
glutAttachMenu(GLUT_RIGHT_BUTTON);

glutDisplayFunc(disp);
glutIdleFunc(id);
glutSpecialFunc(keys);
glutKeyboardFunc(keyboard);

init();
//glEnable(GL_DEPTH_TEST);
glClearColor(0.0f, 0.1f, 0.0f, 1.0f);
glutFullScreen();
glutMainLoop();
return 0;
}