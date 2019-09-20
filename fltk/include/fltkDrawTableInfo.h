#include <iostream>
#include <thread>
#include <random>
#include <algorithm>
#include <cmath>
#include <vector>

#define GL_SILENCE_DEPRECATION

#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Shared_Image.H>
#include <FL/Fl_JPEG_Image.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Scroll.H>
#include <FL/Fl_Tile.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Float_Input.H>
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Tile.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Gl_Window.H>
#include <FL/gl.h>
#include <FL/Fl_Chart.H>
#include <FL/glut.H>

using namespace std;

int fltkDrawTableInfo();
int fltkDrawDebugs();


class MyGlWindow : public Fl_Gl_Window { 
    public:
    // CONSTRUCTOR
    MyGlWindow(int X,int Y,int W,int H,const char*L=0) : Fl_Gl_Window(X,Y,W,H,L) {
    }
};

