#include <glut.h>

// Fungsi untuk menggambar satu permukaan segitiga
void drawTriangleSurface() {
    glBegin(GL_TRIANGLES);
        glColor3f(0.0, 0.0, 1.0);
        glVertex3f(0.0, 0.0, 0.0);
        glVertex3f(1.0, 0.0, 0.0);
        glVertex3f(0.5, 1.0, 0.0);
    glEnd();
}

// Fungsi display
void display() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();

    // Geser segitiga ke tengah layar
    glTranslatef(-0.5f, -0.5f, 0.0f);

    drawTriangleSurface(); // Panggil fungsi untuk menggambar permukaan

    glutSwapBuffers();
}

// Inisialisasi OpenGL
void init() {
    glEnable(GL_DEPTH_TEST);
    glClearColor(0.1, 0.1, 0.1, 1.0); // Latar belakang abu-abu gelap
}

// Fungsi utama
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(600, 600);
    glutCreateWindow("Permukaan Segitiga");

    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
