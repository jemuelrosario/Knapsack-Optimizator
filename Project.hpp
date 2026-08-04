#ifndef PROJECT_HPP
#define PROJECT_HPP

#include <string>


struct Project {
    std::string name;
    double cost;
    double gains;

    Project(std::string name, double cost, double gains) : name(name), cost(cost), gains(gains) {}

};


#endif