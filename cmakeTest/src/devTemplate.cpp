#include "../include/devTemplate.h"
 
using namespace std;

void printOnConsole(const char * outputMessage) {
    cout << outputMessage;
}

template <typename C> 
String<C>::String() : sz(0) {}

String<char> ch;

struct Tracer {
    string mess;
    Tracer(const char *s) : mess {s} { cout <<  "messaggio" ; };
};

void createMessage(const vector<int>& v)
{
    Tracer tr{ "int f()\n"};
}

class Vector {
public:
    Vector(int i);
};

class gnNode {
private:
    double lat,lon;
    enum type {RTK, ROW, MAN};
    enum side {CENTER, RIGHT, LEFT};
    int row;
};

void testAllocation() {
    double * elem;
    int sz = 19;
    elem = new double[sz];
    delete elem;
}

