#ifndef KNAPSACK_HPP
#define KNAPSACK_HPP

#include "Project.hpp"
#include <vector>

class Knapsack {
    private:
        std::vector<Project> projects;
        double maxBudget;
        std::vector<std::vector<double>> table;
    public:
        Knapsack(std::vector<Project> projects, double maxBudget) : projects(projects), maxBudget(maxBudget) {}

        void calculator();

        void showResults();
        


};


















#endif