#include "../include/fltkDrawOgl.h"
#include "../include/gnNode.h"

vector<GnNode> gnRtk; 
vector<GnNode> gnPoints;

double agriBotSize = 20;
double tiltFactor = 150.0;
double startRowX = -700;
double rowsize = 100;

void initGn() {
    // Draw working field graph 

#ifdef CASTELLANI
    Node L0 {10.57285563, 43.59387513};
    Node H0 {10.57254472, 43.59468386};
    Node L1 {10.57288571, 43.59388056};
    Node H1 {10.57254472, 43.59468386};
#endif
    GnNode L0 {100 , 0, RTK, CENTER, 0, "TEST"};
    gnRtk.push_back(L0);
    GnNode H0 {100 + tiltFactor, 200, RTK, CENTER, 0, "TEST"};
    gnRtk.push_back(H0);
    GnNode L1 {200, -100, RTK, CENTER, 1, "TEST"};
    gnRtk.push_back(L1);
    GnNode H1 {200 + tiltFactor, 300, RTK, CENTER, 1, "TEST"};
    gnRtk.push_back(H1);
    GnNode L2 {300, -200, RTK, CENTER, 2, "TEST"};
    gnRtk.push_back(L2);
    GnNode H2 {300 + tiltFactor, 300, RTK, CENTER, 2, "TEST"};
    gnRtk.push_back(H2);
    GnNode L3 {400, 0, RTK, CENTER, 3, "TEST"};
    gnRtk.push_back(L3);
    GnNode H3 {400 + tiltFactor, 500, RTK, CENTER, 3, "TEST"};
    gnRtk.push_back(H3);
    GnNode L4 {500, 0, RTK, CENTER, 4, "TEST"};
    gnRtk.push_back(L4);
    GnNode H4 {500 + tiltFactor, 500, RTK, CENTER, 4, "TEST"};
    gnRtk.push_back(H4);
    GnNode L5 {600, 0, RTK, CENTER, 5, "TEST"};
    gnRtk.push_back(L5);
    GnNode H5 {600 + tiltFactor, 300, RTK, CENTER, 5, "TEST"};
    gnRtk.push_back(H5);
    GnNode L6 {700, -400, RTK, CENTER, 6, "TEST"};
    gnRtk.push_back(L6);
    GnNode H6 {700 + tiltFactor, 200, RTK, CENTER, 6 ,"TEST"};
    gnRtk.push_back(H6);
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
        glPointSize(6.5);

        for (int i = 0; i < gnRtk.size(); i++) { 
            glColor3f(1, 0, 0);
            if(i % 2 == 0 && i < gnRtk.size() - 1) {
                glBegin(GL_LINES); glVertex2f(gnRtk.at(i).lon, gnRtk.at(i).lat); glVertex2f(gnRtk.at(i + 1).lon, gnRtk.at(i + 1).lat); glEnd();  
                if(i < gnRtk.size() - 2) {
                    glBegin(GL_LINES); glVertex2f(gnRtk.at(i).lon, gnRtk.at(i).lat); glVertex2f(gnRtk.at(i + 2).lon, gnRtk.at(i + 2).lat); glEnd(); 
                }
            } else if (i < gnRtk.size() - 1) {
                glBegin(GL_LINES); glVertex2f(gnRtk.at(i).lon, gnRtk.at(i).lat); glVertex2f(gnRtk.at(i + 2).lon, gnRtk.at(i + 2).lat); glEnd();     
            }
            glColor3f(0, 1, 0);
            glBegin(GL_POINTS); //starts drawing of points
            glVertex3f(gnRtk.at(i).lon,gnRtk.at(i).lat,0.0f);//upper-right corner
            glEnd();//end drawing of points  
        }

        for (int i = 0; i < gnPoints.size(); i++) { 
            glColor3f(0, 0, 1);
            if(!strcmp(gnPoints.at(i).UID, "LL") || !strcmp(gnPoints.at(i).UID, "LR"))
                glColor3f(0, 0.5, 0.5);
            if(!strcmp(gnPoints.at(i).UID, "HL") || !strcmp(gnPoints.at(i).UID, "HR"))
                glColor3f(0, 0.5, 0.5); 
            if(!strcmp(gnPoints.at(i).UID, "LML") || !strcmp(gnPoints.at(i).UID, "LMR"))
                glColor3f(0.5, 0.5, 0.5);
            if(!strcmp(gnPoints.at(i).UID, "HML") || !strcmp(gnPoints.at(i).UID, "HMR"))
                glColor3f(0.5, 0.5, 0.5); 

            glBegin(GL_POINTS); //starts drawing of points
            glVertex3f(gnPoints.at(i).lon,gnPoints.at(i).lat,0.0f);//upper-right corner
            glEnd();//end drawing of points  
            const char* test = gnPoints.at(i).UID;
            glColor3f(1, 0.5, 0.5);
            glRasterPos2f(gnPoints.at(i).lon,gnPoints.at(i).lat);
            int len, j;
            len = (int)strlen(test);
            for (j = 0; j < len - 1; j++) {
                // glutBitmapCharacter(NULL, test);
            }
        }
    }
public:
    // CONSTRUCTOR
    MyGlWindow(int X,int Y,int W,int H,const char*L=0) : Fl_Gl_Window(X,Y,W,H,L) {
    }
};

/* int fltkDrawOgl() */
int fltkDrawOgl() {
    int row = 0;
    initGn();
    for (int i = 0; i < gnRtk.size() - 1; i+=2) {
        createGnPoints(gnRtk[i], gnRtk[i+1], row, agriBotSize);
        row++;
    }
    Fl_Window win(1000, 500, "Smash Graph Node Debug");
    MyGlWindow mygl(10, 10, win.w()-20, win.h()-20);
    win.end();
    win.resizable(mygl);
    win.show();
    return(Fl::run());
}

    