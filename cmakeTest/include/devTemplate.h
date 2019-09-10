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