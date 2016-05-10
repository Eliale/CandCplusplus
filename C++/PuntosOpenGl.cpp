#include <GL/glut.h>
#include <math.h>
GLdouble puntosx[13];
GLdouble puntosy[13];

void reshape_cb (int w, int h) {
	if (w==0||h==0) return;
	glViewport(0,0,w,h);
	glMatrixMode (GL_PROJECTION);
	glLoadIdentity ();
	gluOrtho2D(0,w,0,h);
	glMatrixMode (GL_MODELVIEW);
	glLoadIdentity ();
}

void display_cb() {
	glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();
	gluLookAt(0.0, 0.0, 0.5, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
	glPushMatrix();
	
		
		
	
	
	glBegin(GL_POINTS);
	
	glColor3f(1.0,1.0,1.0);
	glPointSize(5.0);
	for (int i = 0; i<=600; i++)
	{    
		int nAleatorio;
		nAleatorio=(1+rand() % (100-1));
		glVertex2i(i, i*2);
	}
	
	
	
	
	glEnd();
	
	
	
	glPopMatrix(); // Cierra la matriz
	
	
	glFlush();
	glutSwapBuffers();
}

void initialize() {
	glutInitDisplayMode (GLUT_RGBA|GLUT_DOUBLE);
	glutInitWindowSize (600,600);
	glutInitWindowPosition (100,100);
	glutCreateWindow ("Ventana OpenGL");
	glutDisplayFunc (display_cb);
	glutReshapeFunc (reshape_cb);
	glClearColor(0.f,1.f,0.5f,1.f);
}

int main (int argc, char **argv) {
	glutInit (&argc, argv);
	initialize();
	glutMainLoop();
	return 0;
}

