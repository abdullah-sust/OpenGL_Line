#include <GL/glut.h>
#include <stdlib.h>
#include <stdio.h>
int x1,x2,y1,y2;
void display(void)
{
    glLineWidth(2.5);
    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_LINES);
    glVertex2i(x1/100,y1/100);
    glVertex2i(x2/100,y2/100);
    glEnd();
    glFlush();
}
int main(int argc, char *argv[])
{
    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
    glutInit(&argc, argv);
    glutInitWindowSize(640,480);
    glutInitWindowPosition(10,10);
    glutCreateWindow("GLUT Shapes");
    glutDisplayFunc(display);
    glutMainLoop();

    return EXIT_SUCCESS;
}
/*
0 0 15 0
*/
