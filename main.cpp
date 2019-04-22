#include <iostream>
#include <GL/freeglut.h>

#include "scenestate.h"

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
  glutSolidSphere(1.0, 50, 50);
  glPopMatrix();
  glutSwapBuffers();
}

int main(int argc, char** argv) {
  SceneState state;
  glutInit(&argc, argv);
  glutInitWindowSize(640, 480);
  glutInitDisplayMode(GLUT_RGBA|GLUT_DOUBLE|GLUT_DEPTH);
  glutCreateWindow("Window's Title");

  glutReshapeFunc(resize);
  glutDisplayFunc(display);

  glClearColor(0.f, 0.f, 0.f, 1.f);
  glEnable(GL_CULL_FACE);
  glCullFace(GL_BACK);

  glEnable(GL_DEPTH_TEST);
  glDepthFunc(GL_LESS);
  glutMainLoop();

  return 0;
}