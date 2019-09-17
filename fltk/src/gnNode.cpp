#include "../include/fltkDrawOgl.h"
#include "../include/gnNode.h"


extern vector<GnNode> gnPoints;

void createGnPoints(const GnNode& node1, const GnNode& node2, int row, int agriBotSize) {
    
    double n0x, n0y;
    double x1, x2, x3, x4;
    double y1, y2, y3, y4;

    double n3x, n3y;
    double x5, x6, x7, x8;
    double y5, y6, y7, y8;

    double m = ( node2.lat - node1.lat ) / ( node2.lon - node1.lon );
    double q = - m * node1.lon + node1.lat;

    n0x = node1.lon - agriBotSize;
    n0y = m * n0x + q;
    n3x = node2.lon + agriBotSize;
    n3y = m * n3x + q;

    if(node1.lon != node2.lon || node1.lat != node2.lat) {
        x1 = n0x + agriBotSize;
        y1 = - (1 / m) * ( x1 - n0x ) + n0y;
        x2 = n0x - agriBotSize;
        y2 = - (1 / m) * ( x2 - n0x ) + n0y;
        x3 = node1.lon + agriBotSize;
        y3 = - (1 / m) * ( x3 - node1.lon ) + node1.lat;
        x4 = node1.lon - agriBotSize;
        y4 = - (1 / m) * ( x4 - node1.lon ) + node1.lat;
        x5 = node2.lon - agriBotSize;
        y5 = - (1 / m) * ( x5 - node2.lon ) + node2.lat;
        x6 = node2.lon + agriBotSize;
        y6 = - (1 / m) * ( x6 - node2.lon ) + node2.lat;
        x7 = n3x + agriBotSize;
        y7 = - (1 / m) * ( x7 - n3x ) + n3y;
        x8 = n3x - agriBotSize;
        y8 = - (1 / m) * ( x8 - n3x ) + n3y;
    } 

    GnNode LMR {x1, y1, 0 ,0, row, "LMR"};
    gnPoints.push_back(LMR);
    GnNode LML {x2, y2, 0 ,0, row, "LML"};
    gnPoints.push_back(LML);
    GnNode LR  {x3, y3, 0, 0, row, "LR"};
    gnPoints.push_back(LR);
    GnNode LL  {x4, y4, 0, 0, row, "LL"};
    gnPoints.push_back(LL);
    GnNode HL  {x5, y5, 0 ,0, row, "HL"};
    gnPoints.push_back(HL);
    GnNode HR  {x6, y6, 0 ,0, row, "HR"};
    gnPoints.push_back(HR);
    GnNode HMR {x7, y7, 0, 0, row, "HMR"};
    gnPoints.push_back(HMR);
    GnNode HML {x8, y8, 0, 0, row, "HML"};
    gnPoints.push_back(HML);

    return;
}