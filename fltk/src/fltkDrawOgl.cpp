#include "../include/fltkDrawOgl.h"
//
// Simple resizable 2D GL window
// erco 10/08/05
//

class MyGlWindow : public Fl_Gl_Window {
    // DRAW METHOD
    //      OpenGL window: (w,h) is upper right, (-w,-h) is lower left, (0,0) is center
    //
    void draw() {
        // Viewport not valid? Init viewport, ortho, etc.
        if (!valid()) {
            glLoadIdentity();
            glViewport(0,0,w(),h());
            glOrtho(-w(),w(),-h(),h(),-1,1);
        }
        // Clear screen
        glClear(GL_COLOR_BUFFER_BIT);
        // Draw white 'X'
        glColor3f(10.0, 100.0, 200.0);
        glBegin(GL_LINE_STRIP); glVertex2f(w(), h()); glVertex2f(-w(),-h()); glEnd();
        glBegin(GL_LINE_STRIP); glVertex2f(w(),-h()); glVertex2f(-w(), h()); glEnd();

        // Clear screen
        glClear(GL_COLOR_BUFFER_BIT);
        // Draw white 'Line'
        glColor3f(10.0, 200.0, 500.0);
        glBegin(GL_LINE_STRIP); glVertex2f(w()/2, h()/2); glVertex2f(-w()/2,-h()/2); glEnd();

         // Clear screen
        glClear(GL_COLOR_BUFFER_BIT);
        glColor3f(10.0, 500.0, 200.0);
        // Draw white 'X'
        glBegin(GL_LINE_STRIP); glVertex2f(w()/4, h()/4); glVertex2f(-w()/4,-h()/4); glEnd();
        glBegin(GL_LINE_STRIP); glVertex2f(0, h()/4); glVertex2f(-w()/4,-h()/4); glEnd();
        
    }
public:
    // CONSTRUCTOR
    MyGlWindow(int X,int Y,int W,int H,const char*L=0) : Fl_Gl_Window(X,Y,W,H,L) {
    }
};

// MAIN
int fltkDrawOgl() {
     Fl_Window win(500, 300, "OpenGL X");
     MyGlWindow mygl(10, 10, win.w()-20, win.h()-20);
     win.end();
     win.resizable(mygl);
     win.show();
     return(Fl::run());
}
    