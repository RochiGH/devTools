#include "../include/fltkDrawOgl.h"
#include "../include/gnNode.h"

extern vector<GnNode> gnPoints;

void createGnPoints(const GnNode& node1, const GnNode& node2, int offset) {
    
    GnNode nodeT1 {node1.lon - offset, node1.lat - offset ,0 ,0};
    GnNode nodeT2 {node1.lon + offset, node1.lat - offset ,0 ,0};
    GnNode nodeT3 {node1.lon - offset, node1.lat, 0, 0};
    GnNode nodeT4 {node1.lon + offset, node1.lat, 0, 0};

    // TODO : algo to set 4 points .

    double m = (node1.lon - node2.lon);
    
    gnPoints.push_back(nodeT1);
    gnPoints.push_back(nodeT2);
    gnPoints.push_back(nodeT3);
    gnPoints.push_back(nodeT4);

    return;
}