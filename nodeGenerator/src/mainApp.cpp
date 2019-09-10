#include <iostream>
#include <thread>
#include <random>

#include <algorithm>
#include <cmath>

#include "../include/nodeLibrary.h"
 
using namespace std;
 
class Line {
   public:
      void setLength( double len );
      double getLength( void );
      Line();  // This is the constructor
   private:
      double length;
};
 
// Member functions definitions including constructor
Line::Line(void) {
   cout << "Object is being created" << endl;
   this->length = 0;
   cout << "Length of line : " << this->getLength() <<endl;
}
void Line::setLength( double len ) {
   length = len;
}
double Line::getLength( void ) {
   return length;
}

// Main function for the program
int setLine() {
   Line *line;
 
   // set line length
   printOnConsole("Set a new line segment of 6.0 meters! \n");
   line = new Line;
   printOnConsole("Set a new line segment of 6.0 meters! \n");
   line->setLength(6.0); 
   cout << "Length of line : " << line->getLength() <<endl;
   delete line;
   printOnConsole("End of program! \n");
 
   return 0;
}


void abssort(float* x, unsigned n) {
    std::sort(x, x + n,
        // Lambda expression begins
        [](float a, float b) {
            return (std::abs(a) < std::abs(b));
        } // end of lambda expression
    );
}

std::default_random_engine generator;
std::uniform_int_distribution<int> distribution(1,10);

int main()
{
  //we allocate on the heap an integer, we are entirely responsible for this allocation,
  //if we forget to release this memory it will be lost forever.
  //There is no garbage collection in C++.
  int *dangling_ptr = new int(0);

  //we start an asynchronous thread of execution that accesses the allocated integer after
  //a random period of time.
  std::thread dumb_thread([&](){
    int secs = distribution(generator);
    std::this_thread::sleep_for(std::chrono::seconds(secs));
    *dangling_ptr = secs;
  });

  //after spawning the child thread, main thread also wait a random period of time
  //before continuing.
  int secs = distribution(generator);
  std::cout << "main wait for:" << secs << std::endl; 
  std::this_thread::sleep_for(std::chrono::seconds(secs));

  //we check dangling_ptr, if the integer it points to is still zero, this means that dumb_thread
  //is still sleeping.
  if(*dangling_ptr){
    std::cout << "child thread waited for:" << *dangling_ptr << "seconds" << std::endl;
  }else{
    std::cout << "child thread still waiting" << std::endl; 
  }
  
  //here we take care of the previuos allocated memory and we ask the
  //heap to release the resource.
  delete dangling_ptr;

  //we wait for dumb_thread to finish his execution. 
  dumb_thread.join();
}