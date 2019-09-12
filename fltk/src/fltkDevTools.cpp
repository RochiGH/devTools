
#include "../include/fltkDevTools.h"



int fltkDrawBoxInfo(int argc, char **argv) {
  Fl_Window *window = new Fl_Window(340,180);
  Fl_Box *box = new Fl_Box(20,40,300,100,"Sei in Moto ???");
  box->box(FL_UP_BOX);
  box->labelfont(FL_BOLD+FL_ITALIC);
  box->labelsize(36);
  box->labeltype(FL_SHADOW_LABEL);
  window->end();
  window->show(argc, argv);
  return Fl::run();
}


// COMPILE: fltk-config --use-images --compile load-jpeg.cxx
int fltkDrawJpg() {
    fl_register_images();                       // initialize image lib
    Fl_Window     win(720,486);                 // make a window
    Fl_Box        box(10,10,720-20,486-20);     // widget that will contain image
    // Fl_JPEG_Image jpg("/var/tmp/foo.jpg");      // load jpeg image into ram
    Fl_JPEG_Image jpg("./test.jpg");      // load jpeg image into ram
    box.image(jpg);                             // attach jpg image to box
    win.show();
    return(Fl::run());
} 
//
// Demonstrate creating a table of widgets without Fl_Table
//                                                   --erco Mar 8 2005
#define COLS 5
#define ROWS 40
class RateTable : public Fl_Scroll {
    void *w[ROWS][COLS];        // widget pointers
public:
    RateTable(int X, int Y, int W, int H, const char*L=0) : Fl_Scroll(X,Y,W,H,L) {  
        static const char *header[COLS] = {
            "Node ID", "Lon", "Lat", "Type", "Side" // , "Coeff C", "Std Dev",  "Pkg In",  "Pkg Out"
        };
        int cellw = 120;
        int cellh = 30;
        int xx = X, yy = Y;
        Fl_Tile *tile = new Fl_Tile(X,Y,cellw*COLS,cellh*ROWS);
        // Create widgets
        for ( int r=0; r<ROWS; r++ ) {
            for ( int c=0; c<COLS; c++ ) {
                if ( r==0 ) {
                    Fl_Box *box = new Fl_Box(xx,yy,cellw,cellh,header[c]);
                    box->box(FL_BORDER_BOX);
                    w[r][c] = (void*)box;
                } else if ( c==0 ) {
                    Fl_Input *in = new Fl_Input(xx,yy,cellw,cellh);
                    in->box(FL_BORDER_BOX);
                    in->value("");
                    w[r][c] = (void*)in;
                } else {
                    Fl_Float_Input *in = new Fl_Float_Input(xx,yy,cellw,cellh);
                    in->box(FL_BORDER_BOX);
                    in->value("0.00");
                    w[r][c] = (void*)in;
                }
                xx += cellw;
            }
            xx = X;
            yy += cellh;
        }
        tile->end();
        end();
    }
};

int fltkDrawTableInfo() {
    Fl_Double_Window win(720,486);
    RateTable rate(10,10,720-20,486-20);
    win.resizable(win);
    win.show();
    return(Fl::run());
}

