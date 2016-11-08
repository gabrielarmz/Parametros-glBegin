#include "gamewindow.h"


void GameWindow::setRunning(bool newRunning)
{
	_running = newRunning;
}

bool GameWindow::getRunning()
{
	return _running;
}

GameWindow::GameWindow(bool running, GLFWwindow* window): _running(running)
{
	_window = window;
	/* glClearColor - specify clear values for the color buffers
	   void glClearColor(GLfloat red, GLfloat green, GLfloat blue,
			     GLfloat alpha); */
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);

	/* This function retrieves the size, in pixels, of the framebuffer of
	 * the specified window. */
	glfwGetFramebufferSize(window, &_width, &_height);
	glViewport(0, 0, _width, _height);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	/* void glOrtho(GLdouble left, GLdouble right, GLdouble bottom,
			GLdouble top, GLdouble nearVal, GLdouble farVal); */
	glOrtho(0.0, _width, 0.0, _height, -1.0, 1.0);
	glMatrixMode(GL_MODELVIEW);

}

void GameWindow::render()
{
    glClear(GL_COLOR_BUFFER_BIT);

	glColor3f(0.7f,0.5f,1.0f);
	glBegin(GL_QUADS);
		glVertex2f(   0.0f, 0.0f);
		glVertex2f( 50.0f,  0.0f);
		glVertex2f( 50.0f,  50.0f);
		glVertex2f(   0.0f, 50.0f);
	glEnd();


     glBegin(GL_LINES);
                
		glVertex2f(  55.0f,  250.0f);
		glVertex2f( 55.0f,   150.0f);
		
	glEnd();

     glBegin(GL_LINE_LOOP);
		glVertex2f(25.0f, 350.0f);
		glVertex2f(25.0f, 400.0f);
		glVertex2f(30.0f, 375.0f);
	glEnd();


      glBegin(GL_LINE_STRIP);
		glVertex2f(15.0f, 250.0f);
		glVertex2f(15.0f, 300.0f);
		glVertex2f(25.0f, 275.0f);
	glEnd();

       glBegin(GL_TRIANGLES);
                glColor3f(1.0f,0.5f,0.7f);
		glVertex2f(150.0f, 10.0f);
		glVertex2f(200.0f, 10.0f);
		glVertex2f(150.0f, 50.0f);
	glEnd();

	glBegin(GL_TRIANGLE_STRIP);
                glColor3f(1.0f,0.5f,0.7f); 
		glVertex2f(250.0f, 10.0f);
		glVertex2f(300.0f, 10.0f);
		glVertex2f(250.0f, 50.0f);

		glColor3f(0.0f,0.0f,1.0f);
		glVertex2f(320.0f, 10.0f);
		glVertex2f(360.0f, 10.0f);
		glVertex2f(320.0f, 25.0f);
	glEnd();

      glBegin(GL_TRIANGLE_FAN);
                glColor3f(0.7f,0.5f,1.0f);
		glVertex2f(75.0f, 100.0f);
		glVertex2f(115.0f,150.0f);
		glVertex2f(75.0f, 200.0f);

		glColor3f(1.0f,0.7f,0.6f);
		glVertex2f(80.0f, 100.0f);
		glVertex2f(140.0f, 100.0f);
		glVertex2f(80.0f, 150.0f);
	glEnd();

	
	glColor3f(1.0f,0.5f,0.7f);

	glBegin(GL_QUAD_STRIP);
		glVertex2f(400.0f, 100.0f);
		glVertex2f(500.0f, 100.0f);
		glVertex2f(500.0f, 200.0f);
		glVertex2f(400.0f, 200.0f);

	glColor3f(0.7f,0.5f,1.0f);
		glVertex2f(100.0f, 300.0f);
		glVertex2f(100.0f, 400.0f);
		glVertex2f(200.0f, 400.0f);
		glVertex2f(200.0f, 300.0f);
	glEnd();

	

	glBegin(GL_POLYGON);
       glColor3f(1.0f,0.7f,0.8f);
		glVertex2f(   600.0f,   70.0f);
		glVertex2f( 300.0f,  600.0f);
		glVertex2f( 300.0f, 300.0f);
	glColor3f(0.7f, 0.0f, 1.0f);
		glVertex2f(   600.0f, 200.0f);
		glVertex2f(   600.0f, 800.0f);
	glEnd();





	/* Swap front and back buffers */
	glfwSwapBuffers(_window);
}

void GameWindow::update()
{
}
