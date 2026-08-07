#include "Knapsack.hpp"
#include "Project.hpp"


int main(){
    Project A("A", 3, 4);
    Project B("B", 4, 5);
    Project C("C", 2, 3);

    std::vector<Project> projects = {};
    projects.push_back(A);
    projects.push_back(B);
    projects.push_back(C);

    Knapsack KS(projects, 5);

    KS.calculator();
    KS.showResults();

    return 0;
}