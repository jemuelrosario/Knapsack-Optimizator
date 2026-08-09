# Knapsack-Optimizator
This is a 0/1 decision program that calculates the max gain with a max budget in a bunch of projects

## How to compile and run 
To run the code copy and paste this in your terminal!

​```bash
g++ -std=c++17 main.cpp Knapsack.cpp -o main.exe
./main.exe
​```

## Project structure

- **Project.hpp** - This file contains the structure of the Project objects.
- **Knapsack.hpp** - This file declares the most important methods, containers and variables.
- **Knapsack.cpp** - Contains the main logic for each of the methods of the class.
- **main.cpp** - All the variables we need to run the program are initiated here.

## How it works
This is a program that helps you to decide between choose or not a project of your interest. It
simply use older information to decide if it's convenient for your or not. If you have 20 possible option there could be
millions of possibilities to combine, but this program use a yes/no logic that builds on the decision made for the previous project making it more easier and fast to calculate.

## Possible extensions
- Manage budgets with decimals with a more transparent approach.
- Extend the algorithm to consider deadlines, not just cost - balancing high-gain projects vs how much time they need.
  
