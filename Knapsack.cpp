#include "Knapsack.hpp"
#include <algorithm>
#include <iostream>

void Knapsack::calculator() {
    table = std::vector<std::vector<double>>(projects.size() + 1, std::vector<double>(maxBudget+1, 0.0));

    for(int i = 0; i < static_cast<int>(projects.size()) + 1; i++){

        for (int j = 0; j < static_cast<int>(maxBudget) + 1; j++){
            if (i > 0){
                if (projects[i-1].cost > j){
                    table[i][j] = table[i - 1][j];
                }else{
                    table[i][j] = std::max(table[i - 1][j], projects[i - 1].gains + table[i - 1][static_cast<int>(j - projects[i - 1].cost)]);

                }

            }  //end of statement              

        } //second loop end

    } //first loop end

} //method end

void Knapsack::reconstructSolution(){
    chosenProjects.clear();
    
    int j = static_cast<int>(maxBudget);
    for(int i = static_cast<int>(projects.size()); i > 0;){
        if (table[i][j] == table[i - 1][j]){
            i--;
        }else{
            chosenProjects.push_back(projects[i - 1]);
            j = j - projects[i - 1].cost;
            i--;
            
        }
    }
}


void Knapsack::showResults(){
    reconstructSolution();
    std::cout << "RESULTS" << std::endl;
    std::cout << "````````````````````````````````" << std::endl;
    std::cout<< "Max Gain: $" << table[static_cast<int>(projects.size())][static_cast<int>(maxBudget)] << std::endl;
    std::cout<< "These are the selected projects and their information:" << std::endl;
    std::cout << "Name | Cost | Gain" << std::endl;
    for(Project p: chosenProjects){
        std::cout << p.name <<" / $"<< p.cost << " / $"<< p.gains << std::endl;

    }


}