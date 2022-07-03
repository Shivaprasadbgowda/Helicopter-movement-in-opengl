
#include<GL/glut.h>
#include<stdlib.h>
#include<math.h>

//static GLfloat spin = 0.0;
static float tx =  0.0;
static float ty =  0.0;
static float r=0;
static float g=1;
static float b=0;
void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

     glPushMatrix();
 //glRotatef(spin, 0.0, 0.0, 1.0);



 glColor3f(r, g, b);

 glTranslatef(tx,ty,0);
 

glRectf(10, 49.8, 19.8, 44.8);//body 
	glRectf(2, 46, 10, 48);//tail 
	glRectf(2, 46, 4, 51);//tail up 
	glRectf(14, 49.8, 15.8, 52.2);//propeller stand 
	glRectf(7, 53.6, 22.8, 52.2);//propeller
// glRectf(-13.5, -13.5, 13.5, 13.5);
 glPopMatrix();

 glFlush();
}


void init(void)
{
 glClearColor (0.0, 1.0, 1.0, 0.0);
 glOrtho(-50.0, 50.0, -50.0, 50.0, -1.0, 1.0);
}


void spe_key(int key, int x, int y)
{

 switch (key) {


  case GLUT_KEY_LEFT:
    tx -=5;
    r=0;
    g=1;
    b=0;
    glutPostRedisplay();
    break;

   //spinDisplay_left();
   //break;

  case GLUT_KEY_RIGHT:
    tx +=5;
    r=0;
    g=1;
    b=0;
    //glColor3f (0.0, 0.0, 1.0);
    glutPostRedisplay();
    break;

   //spinDisplay_right();
   //break;

   case GLUT_KEY_UP:
    ty +=5;
    r=0;
    g=1;
    b=0;
               //glColor3f (0.0, 0.0, 1.0);
    glutPostRedisplay();
    break;


   case GLUT_KEY_DOWN:
    ty -=5;
    r=0;
    g=1;
    b=0;
    //glColor3f (0.0, 0.0, 1.0);
    glutPostRedisplay();
    break;

   default:
   break;
 }
}





int main(int argc,char **argv)
{
glutInit(&argc,argv);
 glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
 glutInitWindowSize (250, 250);
 glutInitWindowPosition (100, 100);


 glutCreateWindow ("mist");
init();

 glutDisplayFunc(display);
 //glutKeyboardFunc(my_keyboard);
 glutSpecialFunc(spe_key);

 glutMainLoop();
 return 0;   /* ANSI C requires main to return int. */
}