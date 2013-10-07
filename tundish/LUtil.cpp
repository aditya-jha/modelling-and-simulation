
#include "LUtil.h"

float gfPosY = 0.75f;
float gfDeltaY = 0.0001f;
bool initGL()
{
    //Initialize Projection Matrix
    glMatrixMode( GL_PROJECTION );
    glLoadIdentity();

    //Initialize Modelview Matrix
    glMatrixMode( GL_MODELVIEW );
    glLoadIdentity();

    //Initialize clear color
    glClearColor( 0.f, 0.f, 0.f, 0.f );

    //Check for error
    GLenum error = glGetError();
    if( error != GL_NO_ERROR )
    {
        printf( "Error initializing OpenGL! %s\n", gluErrorString( error ) );
        return false;
    }

    return true;
}

void update()
{

}

void render()
{
    //Clear color buffer
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    //glColor3f(0.5f, 0.0f, 1.0f); 
    //Render quad
    glBegin( GL_LINE_STRIP );
		glColor3f(1.0f, 1.0f, 1.0f);
		glVertex2f(0.030f, 0.15f);
		glVertex2f(0.030f, 0.25f);
		glVertex2f(0.25f, 0.25f);
        glVertex2f(0.25f, 0.75f); 
		glVertex2f(-0.25f, 0.75f); 
		glVertex2f(-0.25f, 0.25f);
		glVertex2f(-0.030f, 0.25f);
		glVertex2f(-0.030f, 0.15f);
    glEnd();

	glBegin( GL_LINE_STRIP );
		glColor3f(1.0f, 1.0f, 1.0f);
		glVertex2f(-0.35f, -0.3f);
		glVertex2f(-0.35f, -0.55f);
		glVertex2f(0.35f, -0.55f);
		glVertex2f(0.35f, -0.3f);
	glEnd();


	
	glBegin( GL_QUADS );
		glColor3f(1.0f, 0.0f, 0.0f); //red
		glVertex2f(0.25f, gfPosY); 
		glVertex2f(-0.25f, gfPosY); 
		glVertex2f(-0.25f, 0.25f); 
		glVertex2f(0.25f, 0.25f); 
	glEnd();

	//glFlush();

	gfPosY = gfPosY - gfDeltaY;
	if(gfPosY > 0.25f) {
		glutPostRedisplay();
	}
	else {
		gfPosY = 0.75f;
	}

    //Update screen
    glutSwapBuffers();
}
