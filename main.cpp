#include <iostream>

#ifdef __APPLE__
#include <OpenGL/gl.h>
#else
#include <GL/gl.h>
#endif

#include <GLFW/glfw3.h>

//#include "scenestate.h"

void drawBall() {
}

static void resize(int width, int height) {
  const float ar = width / (float)height;
  glViewport(0, 0, width, height);
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  glFrustum(-ar, ar, -1.0, 1.0, 2, 100.);
  glMatrixMode(GL_MODELVIEW);
  glLoadIdentity();
}

static void display() {
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
  glColor3d(1, 0, 0);
  glPushMatrix();
  glTranslated(0, 0, -6);
//  glutSolidSphere(1.0, 50, 50);
  glPopMatrix();
//  glutSwapBuffers();
}

int main(int argc, char** argv) {
//  SceneState state;

  glfwInit();
  glfwTerminate();

  return 0;
}