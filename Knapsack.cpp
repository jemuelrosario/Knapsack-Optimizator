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


void Knapsack::showResults(){
    std::cout << "RESULTS" << std::endl;
    std::cout << "````````````````````````````````" << std::endl;
    std::cout<< "Max Gain: " << table[static_cast<int>(projects.size())][static_cast<int>(maxBudget)] << std::endl;


}