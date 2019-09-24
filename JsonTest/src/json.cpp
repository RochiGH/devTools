#include <iostream>
#include <thread>
#include <random>
#include <algorithm>
#include <cmath>

#include <nlohmann/json.hpp>
 
using namespace std;

// for convenience
using json = nlohmann::json;
 
int main() {

   json j;
   // instead, you could also write (which looks very similar to the JSON above)
   json j2 = {
      {"pi", 3.141},
      {"happy", true},
      {"name", "Niels"},
      {"nothing", nullptr},
      {"answer", {
         {"everything", 42}
      }},
      {"list", {1, 0, 2}},
      {"object", {
         {"currency", "USD"},
         {"value", 42.99}
      }}
   };
   printf("");
   return 0;
}
