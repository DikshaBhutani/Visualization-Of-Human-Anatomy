#include <stdio.h>//GLUT toolkit
#include <time.h>
#define INIT_VIEW_X 0  //Define initial camera position and viewing window values
#define INIT_VIEW_Y -1.0
#define INIT_VIEW_Z -4.5
#define VIEW_LEFT -2.0
#define VIEW_RIGHT 2.0
#define VIEW_BOTTOM -2.0
#define VIEW_TOP 2.0
#define VIEW_NEAR 1.0
#define VIEW_FAR 200.0
GLfloat AmbientLight[]={0.3,0.3,0.3,1.0};//Initialization values for lighting
GLfloat DiffuseLight[] ={0.8,0.8,0.8,1.0};
GLfloat SpecularLight[] ={1.0,1.0,1.0,1.0};
GLfloat SpecRef[] = {0.7,0.7,0.7,1.0};
GLfloat LightPos[] = {-50.0,50.0,100.0,1.0};
GLint Shine =128;

void eyeright()
{
    //function for the right eye
    glPushMatrix();
    glTranslatef(.17,1.1,.75);//Specify the coordinates for the right eye
    glRotatef(-45,0,0,1);
    glScalef(.9,.7,.7);//Specify the size of the right eye
    glColor3f(1.0,1.0,1.0);//Specify the color of the eye
    gluSphere(gluNewQuadric(),.3,100,100);
    glPopMatrix();
}
void eyeleft()
{
    glPushMatrix();
    glTranslatef(-.17,1.1,.75);//Specify the position for the left eye
    glRotatef(45,0,0,1);
    glScalef(.9,.7,.7);
    glColor3f(1.0,1.0,1.0);
    gluSphere(gluNewQuadric(),.3,100,100);
    glPopMatrix();
}

void legleft()
{
    glPushMatrix();
    glTranslatef(.3,-.5,0);//Specify the position for the left leg
    glRotatef(-90.0,1,0,0);
    glScalef(.8,.8,.8);
    gluCylinder(gluNewQuadric(),.5,.5,.5,30,6);
    glPopMatrix();
}

void legright()
{
    glPushMatrix();
    glTranslatef(-.3,-.5,0);//Specify the position for the right leg
    glRotatef(-90.0,1,0,0);
    glScalef(.8,.8,.8);
    gluCylinder(gluNewQuadric(),.5,.5,.5,30,6);
    glPopMatrix();
}

void armleft()
{
    glPushMatrix();
    glTranslatef(-.82,0,.1);//Specify the position for the left arm
    glRotatef(90,0,1,0);
    glRotatef(-50,1,0,0);
    gluCylinder(gluNewQuadric(),.15,.15,.48,30,6);
    glPopMatrix();
}

void armright()
{
    glPushMatrix();
    glTranslatef(.82,0,.1);      //Specify the position for the right arm
    glRotatef(90,0,1,0);
    glRotatef(-130,1,0,0);
    gluCylinder(gluNewQuadric(),.15,.15,.48,30,6);
    glPopMatrix();
}

void handleft()
{
    glPushMatrix();
    glTranslatef(.82,0,.1);     //Specify the position for the left hand
    glScalef(.4,.3,.3);
    gluSphere(gluNewQuadric(),.4,100,100);
    glPopMatrix();
}
void handright()
{
    glPushMatrix();
    glTranslatef(-0.82,0,.1); //Specify the position for the right hand
    glScalef(.4,.3,.3);
    gluSphere(gluNewQuadric(),.4,100,100);

    glPopMatrix();
}

void mouth()
{
    glPushMatrix();
    glTranslatef(0,.78,.74);
    glScalef(.4,.4,.1);
    glColor3f(0.0,0.0,0.0);
    gluSphere(gluNewQuadric(),.4,100,100);
    glPopMatrix();
}

void teeth()
{
    glPushMatrix();
    glColor3f(1.0,1.0,1.0);
    glTranslatef(-.08,.72,.76);
    glTranslatef(.055,0,.005 );
    glutSolidCube(.035);
    glTranslatef(.055,0,0 );
    glutSolidCube(.035);
    glPopMatrix();
}
void eyebrowleft()
{
    glPushMatrix();
    glTranslatef(-.3,1.5,.97);
    glRotatef(90,0,1,0);
    glRotatef(45,1,0,0);
    glColor3f(0.0,0.0,0.0);
    gluCylinder(gluNewQuadric(),.05,.01,.3,4,6);
    glPopMatrix();
}

void eyebrowright()
{
    glPushMatrix();
    glTranslatef(.3,1.5,.97);
    glRotatef(270,0,1,0);
    glRotatef(45,1,0,0);
    gluCylinder(gluNewQuadric(),.05,.01,.3,4,6);
    glPopMatrix();
}

void neckring()
{
    glPushMatrix();
    glTranslatef(0,.5,0);
    glScalef(.59,.59,.59);
    glRotatef(90.0,1,0,0);
    glutSolidTorus(.1,1.0,20,20);
    glPopMatrix();
}


void head()
{
    glPushMatrix();
    glTranslatef(0,1.2,0);
    glScalef(.9 ,.9,.9 );
    glColor3f(1.0,0.8,0.6);
    gluSphere(gluNewQuadric(),1,100,100);
    glPopMatrix();
}


void footleft()
{
    glPushMatrix();
    glTranslatef(-.3,-.5,0);
    glScalef(1.5,.3,1.5);
    glColor3f(0.0,0.0,0.0);
    gluSphere(gluNewQuadric(),.3,100,100);
    glPopMatrix();
}

void footright()
{
    glPushMatrix();
    glTranslatef(.3,-.5,0);
    glScalef(1.5,.3,1.5);
    glColor3f(0.0,0.0,0.0);
    gluSphere(gluNewQuadric(),.3,100,100);
    glPopMatrix();
}

void BellyCoat()
{
    glPushMatrix();
    glTranslatef(0,.5,0);
    glScalef(1,.7,1);
    glRotatef(90.0,1,0,0);
    gluCylinder(gluNewQuadric(),.6,.8,1,100,100);
    glPopMatrix();
}

void pupilleft()
{
    glPushMatrix();
    glTranslatef(-.17,1.1,.88);
    glScalef(.9,.9,.9);
    gluSphere(gluNewQuadric(),.1,100,100);
    glPopMatrix();
}

void pupilright()
{
    glPushMatrix();
    glTranslatef(.17,1.1,.88);
    glScalef(.9,.9,.9);
    gluSphere(gluNewQuadric(),.1,100,100);
    glPopMatrix();
}

void topbutton()
{
    glPushMatrix();
    glTranslatef(-.1,.4,.85);
    glScalef(1.9,1.9,1.9);
    gluSphere(gluNewQuadric(),.04,100,100);
    glPopMatrix();
}
void middlebutton()
{
    glPushMatrix()  ;
    glTranslatef(-.1,.15,.98);
    glScalef(1.9,1.9,1.9);
    gluSphere(gluNewQuadric(),.04,100,100);
    glPopMatrix();
}
void bottombutton()
{
    glPushMatrix();
    glTranslatef(-.1,-.1,.92);
    glScalef(1.9,1.9,1.9);
    glColor3f(0.0,0.0,0.0);
    gluSphere(gluNewQuadric(),.04,100,100);
    glPopMatrix();
}
void stick()
{
    glPushMatrix();
    glTranslatef(-0.82,0.5,0.5);
    glScalef(0.2,1.9,0.2);
    glColor3ub(255,225,1);
    glutSolidCube(0.5);
    glPopMatrix();

}
void Display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//Clear the window
    glColor3ub(50, 50, 150);//Change the draw color to slate blue
    eyeright();
    eyeleft();
    eyebrowleft();
    eyebrowright();
    glColor3f(0.0,0.0,0.0);
    neckring();
    glColor3ub(50,40,60);
    legright();
    legleft();
    glColor3ub(255,0,0);
    armleft();
    armright();
    BellyCoat();
    //bellyCoatbottom();
    glColor3ub(255,222,173);
    handleft();
    handright();
    stick();
    mouth();
    teeth();
    glColor3ub(255,222,173);
    head();
    glColor3f(0.0,0.0,0.0);
    footleft();
    footright();
    topbutton();
    middlebutton();
    bottombutton();
    pupilleft();
    pupilright();
    glPopMatrix();

                                //****Restore matrix state****
   glutSwapBuffers();                             //****Flush drawing commands****
}



void SetupRend()
{

    glClearColor(0.8,0.8,1.0,1.0);
    GLfloat mat_ambient[]={1,1,1,1};
    GLfloat mat_diffuse[]={0.05,0.05,0.05,1};
    GLfloat mat_specular[]={0.15,0.15,0.15,1};
    GLfloat mat_shininess[]={100.0f};
    glEnable(GL_DEPTH_TEST);         //Enable depth testing
    glEnable(GL_LIGHTING);             //Enable lighting
    glLightfv(GL_LIGHT0,GL_AMBIENT,AmbientLight);//Set up and enable light zero
    glLightfv(GL_LIGHT0,GL_DIFFUSE,DiffuseLight);
    glLightfv(GL_LIGHT0,GL_SPECULAR,SpecularLight);

    glMaterialfv(GL_FRONT,GL_AMBIENT,mat_ambient);
    glMaterialfv(GL_FRONT,GL_DIFFUSE,mat_diffuse);
    glMaterialfv(GL_FRONT,GL_SPECULAR,mat_specular);
    glMaterialfv(GL_FRONT,GL_SHININESS,mat_shininess);

    glEnable(GL_LIGHT0);
    glEnable(GL_COLOR_MATERIAL);                   //Enable color tracking
    glColorMaterial(GL_FRONT,GL_AMBIENT_AND_DIFFUSE);//Set material to follow
    glMaterialfv(GL_FRONT,GL_SPECULAR,SpecRef);//Set specular reflectivity and shine
    glMateriali(GL_FRONT,GL_SHININESS,Shine);
}


void myReshape(int w, int h)
{
    GLfloat Ratio;
    glViewport(0,0,w,h);
    Ratio=1.0*w/h;
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(80.0,Ratio,VIEW_NEAR,VIEW_FAR);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(INIT_VIEW_X,INIT_VIEW_Y,INIT_VIEW_Z);
    glLightfv(GL_LIGHT0, GL_POSITION, LightPos);
}

