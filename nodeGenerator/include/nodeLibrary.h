#include <iostream>

void printOnConsole(const char * outputMessage);

template <typename C> class String {
    public:
        String();
        explicit String(const C*);
        String(const String&);
        String operator=(const String&);
        // ...
    private:
        static const int shot_max = 15;
        int sz;
        C* ptr;
};

    enum type {RTK, ROW, ROWMAN};
    enum side {CENTER, LEFT, RIGHT};

template <typename Coord> 
class Node {

private:
    Coord lon, lat;
    int type;
    int side;
    Coord* ptr;

public:
    Node();
    Node(const Coord* latIN, const Coord* lonIN, int typeIN, int sideIN);
    explicit Node(const Coord* latIN, const Coord* lotIN);
    Node(const Node&);
    Coord& operator +=(Coord latIN);
    void coordUpdate(Coord lon, Coord lat);
    // void coordUpdate(double lon, double lat);
    void typeUpdate(int newType);
    void sideUpdate(int side);

};