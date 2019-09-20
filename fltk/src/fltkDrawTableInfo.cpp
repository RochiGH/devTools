#include <iostream>
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/fl_draw.H>
#include <FL/Fl_Table_Row.H>
#include <stdio.h>
#include <string>
#include <cstring>

using namespace std;


#include "../include/fltkDrawTableInfo.h"
#include "../include/fltkDrawOgl.h"
#include "../include/gnNode.h"

extern vector<GnNode> gnPoints;
extern vector<GnNode> gnRtk; 

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

//
// testtablerow -- Simple test of Fl_Table_Row class
//



//
// Simple demonstration class to derive from Fl_Table_Row
//
class DemoTable : public Fl_Table_Row
{
protected:
    void draw_cell(TableContext context,  		// table cell drawing
    		   int R=0, int C=0, int X=0, int Y=0, int W=0, int H=0);
//    void callback(TableContext context, 		// callback for table events
//    		   int R, int C);

public:
    string tableName;
    DemoTable(int x, int y, int w, int h, const char *l, string lin) : Fl_Table_Row(x,y,w,h)
	{ 
        tableName = lin;
        end(); 
    }
    ~DemoTable() { }
};

// Handle drawing all cells in table
void DemoTable::draw_cell(TableContext context, 
			  int R, int C, int X, int Y, int W, int H)
{
    static char s[40];
    strcpy(s, this->tableName.c_str());
	if( !strcmp(s, "RTK log values")) {
        if( R == 0 && C == 0 && context == CONTEXT_COL_HEADER)
            sprintf(s, "Node ID");
        if( R == 0 && C == 1 && context == CONTEXT_COL_HEADER)
            sprintf(s, "Longitude");
        if( R == 0 && C == 2 && context == CONTEXT_COL_HEADER)
            sprintf(s, "Latitude");
        if( R < gnRtk.size() && C == 1 && context == CONTEXT_CELL)
            sprintf(s, "%f", gnRtk.at(R).lon);
        if( R < gnRtk.size() && C == 2 && context == CONTEXT_CELL)
            sprintf(s, "%f", gnRtk.at(R).lat);
    } else {
        if( R == 0 && C == 0 && context == CONTEXT_COL_HEADER)
            sprintf(s, "Node ID");
        if( R == 0 && C == 1 && context == CONTEXT_COL_HEADER)
            sprintf(s, "Longitude");
        if( R == 0 && C == 2 && context == CONTEXT_COL_HEADER)
            sprintf(s, "Latitude");
        if( R < gnPoints.size() && C == 1 && context == CONTEXT_CELL)
            sprintf(s, "%f", gnPoints.at(R).lon);
        if( R < gnPoints.size() && C == 2 && context == CONTEXT_CELL)
            sprintf(s, "%f", gnPoints.at(R).lat);
    }

    switch ( context )
    {
	case CONTEXT_STARTPAGE:
	    fl_font(FL_HELVETICA, 16);
	    return;

	case CONTEXT_ROW_HEADER:
	case CONTEXT_COL_HEADER:
	    fl_push_clip(X, Y, W, H);
	    {
		fl_draw_box(FL_THIN_UP_BOX, X, Y, W, H, color());
		fl_color(FL_BLACK);
		fl_draw(s, X, Y, W, H, FL_ALIGN_CENTER);
	    }
	    fl_pop_clip();
	    return;

	case CONTEXT_CELL:
	{
	    fl_push_clip(X, Y, W, H);
	    {
	        // BG COLOR
		fl_color( row_selected(R) ? selection_color() : FL_WHITE);
		fl_rectf(X, Y, W, H);

		// TEXT
		fl_color(FL_BLACK);
		fl_draw(s, X, Y, W, H, FL_ALIGN_CENTER);

		// BORDER
		fl_color(FL_LIGHT2); 
		fl_rect(X, Y, W, H);
	    }
	    fl_pop_clip();
	    return;
	}

	default:
	    return;
    }
}

void table_cb(Fl_Widget* o, void* data)
{
    Fl_Table *table = (Fl_Table*)data;
    fprintf(stderr, "%s callback: row=%d col=%d, context=%d, event=%d clicks=%d\n",
	(const char*)table->label(),
	(int)table->callback_row(),
	(int)table->callback_col(),
	(int)table->callback_context(),
	(int)Fl::event(),
	(int)Fl::event_clicks());
}

int fltkDrawDebugs()
{
    int w = 300, h = 700;
    int t1x = 20, t1y = 25,         t1w = w - 40, t1h = h - 50;
    int rtkTableSize = gnRtk.size();
    int gnTableSize = gnPoints.size();

    Fl_Window rtkWin(w, h);
    DemoTable rtkTable(t1x, t1y, t1w, t1h, "RTK log values", "RTK log values");
    rtkTable.selection_color(FL_YELLOW);
    rtkTable.when(FL_WHEN_RELEASE);	// handle table events on release
    rtkTable.rows(gnRtk.size());
    rtkTable.cols(3);
    rtkTable.col_header(1);		// enable col header
    rtkTable.col_resize(10);		// enable col resizing
    rtkTable.row_resize(4);		// enable row resizing
    rtkTable.callback(table_cb, (void*)&rtkTable);
    rtkTable.when(FL_WHEN_CHANGED|FL_WHEN_RELEASE);
    rtkTable.end();
    rtkWin.resizable(rtkTable);
    rtkWin.show();

    Fl_Window winGnPoints(w, h);
    DemoTable gnTable(t1x, t1y, t1w, t1h, "GN log values", "GN log values");
    gnTable.selection_color(FL_BLUE);
    gnTable.when(FL_WHEN_RELEASE);	// handle table events on release
    gnTable.rows(gnPoints.size());
    gnTable.cols(3);
    gnTable.col_header(1);		// enable col header
    gnTable.col_resize(10);		// enable col resizing
    gnTable.row_resize(4);		// enable row resizing
    gnTable.callback(table_cb, (void*)&gnTable);
    gnTable.when(FL_WHEN_CHANGED|FL_WHEN_RELEASE);
    gnTable.end();
    winGnPoints.resizable(gnTable);
    winGnPoints.show();

    Fl_Window win(1000, 500, "Smash Graph Node Debug");
    MyGlWindow mygl(10, 10, win.w()-20, win.h()-20);
    win.end();
    win.resizable(mygl);
    win.show();

    return(Fl::run());
}


