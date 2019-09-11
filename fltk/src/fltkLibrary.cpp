#include <vector>
#include <sstream>
#include <iostream>

#include "../include/fltkLibrary.h"
 
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


template <typename Coord> 
Node<Coord>::Node() {
    lon = 0;
    lat = 0;
    
}

template <typename Coord> 
Node<Coord>::Node(const Coord* latIN, const Coord* lonIN, int typeIN, int sideIN) : 
    lat{latIN}, lon{lonIN}, type{typeIN}, side{sideIN} {}

template<>
Node<double>::Node(const double* latIN, const double* lonIN, int typeIN, int sideIN) : 
    lat{*latIN}, lon{*lonIN}, type{typeIN}, side{sideIN} {}

template <typename Coord> 
void Node<Coord>::coordUpdate(Coord lonIN, Coord latIN) { 
    
    lon = lonIN;
    lat = latIN;
    return;

}
template <typename Coord>
void Node<Coord>::typeUpdate(int newTypeIN) {

    type = newTypeIN;      
    return;

}

template <typename Coord> 
void Node<Coord>::sideUpdate(int sideIN){

    side = sideIN;      
    return;

}

template <typename Coord> 
void Node<Coord>::nodeGenerateGraphReferences(vector<Node<double>>& GraphReferences) {

    for(int i = 0; i <= GraphReferences.max_size(); i++) {

        GraphReferences[i].coordUpdate(this->lat + i, this->lon + i);

    }
    return;

} 

template<typename Coord> 
class gnNodeEx {
    vector<Node<Coord>>* gnNode; 
public:
    gnNodeEx() : gnNode{new vector<Node<Coord>>(4) } { }
    void print_all() const;
};
// error: pointer initialized with int // error: undefined identifier o
