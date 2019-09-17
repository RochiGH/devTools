#include "../../libgraph/include/Node.h"

using namespace std;


enum side {CENTER, LEFT, RIGHT};
enum type {RTK, ROW, ROWMAN, HOME};

class GnNode : public Node { 
public:
    int type,side, row;
    const char *UID;
    GnNode(double lonIN, double latIN, int typeIN, int sideIN, int rowIN, const char *UIDIN):Node(lonIN, latIN) {
        type = typeIN;
        side = sideIN;
        row = rowIN;
        UID = UIDIN;
    };  
};

void createGnPoints(const GnNode& node1, const GnNode& node2, int row, int agriBotSize);
