#include <iostream>
#include <thread>
#include <random>
#include <algorithm>
#include <cmath>
#include <fstream>      // std::ifstream

#include <nlohmann/json.hpp>
 
using namespace std;
// for convenience
using json = nlohmann::json;

namespace smash {
    // a simple struct to model a person
    struct mission {
      std::string type;
      std::string properties;
      std::string geometry;
    };
}       

class wpt {
  public:
    string type;
    double lon, lat;
    string name;
};

void from_json(const json& j, wpt& w) {

    float lon, lat;
    cout <<  "Json serialized obcjet to be processed" << endl;
    cout << j.dump(4) << endl;
    w.type = j.at("type");

    const json& sj = j.at("geometry").at("coordinates");
    cout << sj.dump(4) << endl;
    w.lon = sj[0];
    w.lat = sj[1];

    const json& sp = j.at("properties").at("name");
    cout << sp.dump(4) << endl;
    w.name = sp;
}


class graph {
  public:
    std::vector<wpt> wpt;
};

void from_json(const json& j, graph& s) {
    const json& sj = j.at("graph");
    s.wpt.resize(sj.size());
    std::copy(sj.begin(), sj.end(), s.wpt.begin());
}

int main() {
    std::string text = R"(
    {
        "graph": [
        {
            "type": "Feature",
            "geometry": {
                "type": "Point",
                "coordinates": [125.6, 10.1]
            },
            "properties": {
                "name": "Smash Home"
            }
        },
        {
            "type": "Feature",
            "geometry": {
                "type": "Point",
                "coordinates": [120.6, 15.1]
            },
            "properties": {
                "name": "Smash Home"
            }
        },
        {
            "type": "Feature",
            "geometry": {
                "type": "Point",
                "coordinates": [122.6, 12.1]
            },
            "properties": {
                "name": "Smash Home"
            }
        }
        ]
    }
    )";

    json js = json::parse(text);
    graph gn = js;

    return 0;
}