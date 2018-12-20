#include <System/mainScene.h>
#include <GL/glew.h>
#include <Targets/Quad.h>

MainScene::MainScene()
{

}

void MainScene::drawAxis()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    glTranslatef(-1.5, 0.0, -6.0);
    glLineWidth(2);
    int x = 0;
    int y = 0;
    int z = 0;
    glBegin(GL_LINES);
    {
        glColor3f(1.f, 0.f, 0.f);
        glVertex3f(x, y, z);
        glVertex3f(x + 100.f, y, z);
        glVertex3f(x + 100.f, y, z);
        glVertex3f(x + 100.f - 5.f, y + 5.f, z);
        glVertex3f(x + 100.f, y, z);
        glVertex3f(x + 100.f - 5.f, y - 5.f, z);

        glColor3f(0.f, 1.f, 0.f);
        glVertex3f(x, y, z);
        glVertex3f(x, y + 40.f, z);
        glVertex3f(x, y + 40.f, z);
        glVertex3f(x - 5.f, y + 40.f - 5.f, z);
        glVertex3f(x, y + 40.f, z);
        glVertex3f(x + 5.f, y + 40.f - 5.f, z);
    }
    glEnd();
}

// we show target object in mainScene directly now, and it will be managed by a certain module afterwards
void MainScene::renderQuad()
{
    Quad quad = Quad();
    quad.build_render_config();
    quad.render();
}