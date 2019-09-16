#include "../../libgraph/include/Node.h"
#include "../../libgraph/include/Edge.h"


using namespace std;

class GnEdge : public Edge {

};

class GnNode : public Node {
 
public:

    int type,side;
    GnNode(double lonIN, double latIN, int typeIN, int sideIN):Node(lonIN, latIN) {
        side = sideIN;
        type = typeIN;
    };

    
};

void createGnPoints(const GnNode& node1, const GnNode& node2, int offset);
