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



template <typename Coord> class Node {
private:
    Coord lon, lat;
    enum type {RTK, ROW, ROWMAN};
    enum side {CENTER, LEFT, RIGHT};
public:
    Node();
    void coordUpdate(double lon, double lat);
    void typeUpdate(int newType);
    void sideUpdate(int side);
};