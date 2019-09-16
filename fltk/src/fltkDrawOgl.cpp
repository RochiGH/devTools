#include "../include/fltkDrawOgl.h"
#include "../include/gnNode.h"

//
// Simple resizable 2D GL window
// erco 10/08/05
//

enum type {RTK, ROW, ROWMAN, HOME};
enum side {CENTER, LEFT, RIGHT};

vector<GnNode> gn; 
vector<GnNode> gnPoints;

void initGn() {
           // Draw working field graph 
#ifdef CASTELLANI
        Node L0 {10.57285563, 43.59387513};
        Node H0 {10.57254472, 43.59468386};
        Node L1 {10.57288571, 43.59388056};
        Node H1 {10.57254472, 43.59468386};
#endif

        GnNode L0 {100, 0, RTK, CENTER};
        gn.push_back(L0);
        GnNode H0 {100, 200, RTK, CENTER};
        gn.push_back(H0);
        GnNode L1 {200, -100, RTK, CENTER};
        gn.push_back(L1);
        GnNode H1 {200, 300, RTK, CENTER};
        gn.push_back(H1);
        GnNode L2 {300, -200, RTK, CENTER};
        gn.push_back(L2);
        GnNode H2 {300, 300, RTK, CENTER};
        gn.push_back(H2);
        GnNode L3 {400, 0, RTK, CENTER};
        gn.push_back(L3);
        GnNode H3 {400, 500, RTK, CENTER};
        gn.push_back(H3);
        GnNode L4 {500, 0, RTK, CENTER};
        gn.push_back(L4);
        GnNode H4 {500, 500, RTK, CENTER};
        gn.push_back(H4);
        GnNode L5 {600, 0, RTK, CENTER};
        gn.push_back(L5);
        GnNode H5 {600, 300, RTK, CENTER};
        gn.push_back(H5);
        GnNode L6 {700, -400, RTK, CENTER};
        gn.push_back(L6);
        GnNode H6 {700, 200, RTK, CENTER};
        gn.push_back(H6);

}




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
        // glColor3f(10.0, 500.0, 200.0);

        glPointSize(5.0);

        for (int i = 0; i < gn.size(); i++) { 
            glColor3f(1, 0, 0);
            if(i % 2 == 0 && i < gn.size() - 1) {
                glBegin(GL_LINES); glVertex2f(gn.at(i).lon, gn.at(i).lat); glVertex2f(gn.at(i + 1).lon, gn.at(i + 1).lat); glEnd();  
                if(i < gn.size() - 2) {
                    glBegin(GL_LINES); glVertex2f(gn.at(i).lon, gn.at(i).lat); glVertex2f(gn.at(i + 2).lon, gn.at(i + 2).lat); glEnd(); 
                }
            } else if (i < gn.size() - 1) {
                glBegin(GL_LINES); glVertex2f(gn.at(i).lon, gn.at(i).lat); glVertex2f(gn.at(i + 2).lon, gn.at(i + 2).lat); glEnd();     
            }
            glColor3f(0, 1, 0);
            glBegin(GL_POINTS); //starts drawing of points
            glVertex3f(gn.at(i).lon,gn.at(i).lat,0.0f);//upper-right corner
            glEnd();//end drawing of points  
        }

        for (int i = 0; i < gnPoints.size(); i++) { 
            glColor3f(0, 0, 1);
            glBegin(GL_POINTS); //starts drawing of points
            glVertex3f(gnPoints.at(i).lon,gnPoints.at(i).lat,0.0f);//upper-right corner
            glEnd();//end drawing of points  
        }
    }
public:
    // CONSTRUCTOR
    MyGlWindow(int X,int Y,int W,int H,const char*L=0) : Fl_Gl_Window(X,Y,W,H,L) {
    }
};

// MAIN
int fltkDrawOgl() {
     initGn();

    for (int i = 0; i < gn.size() - 1; i+=2) {
     createGnPoints(gn[i], gn[i+1], 25);
     createGnPoints(gn[i+1], gn[i], -25);
    }

     Fl_Window win(1000, 500, "Smash Graph Node Debug");
     MyGlWindow mygl(10, 10, win.w()-20, win.h()-20);
     win.end();
     win.resizable(mygl);
     win.show();
     return(Fl::run());
}
    