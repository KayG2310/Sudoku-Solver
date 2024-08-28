# Sudoku-Solver
Overview
This program solves a given Sudoku puzzle using a backtracking algorithm. The puzzle is represented as a 9x9 grid, where empty cells are denoted by a period (.). The solution process involves filling in the grid while ensuring that each number from 1 to 9 appears only once in each row, column, and 3x3 subgrid.

How It Works
Input:
The program accepts a 9x9 Sudoku grid as input. Empty cells should be represented by '.'

Algorithm:
The solver uses a backtracking approach. It iteratively tries numbers from 1 to 9 in each empty cell, checking if the number is valid according to Sudoku rules. If a number is valid, it moves on to the next cell. If it encounters a cell where no valid number can be placed, it backtracks to the previous cell and tries the next possible number.

Output:
Once the puzzle is solved, the program prints the completed Sudoku grid, formatted with distinguishing lines to create a clear grid structure.

Usage

Compilation:
Compile the program using a C++ compiler:
g++ -o sudoku_solver sudoku_solver.cpp

Execution:
Run the compiled executable and provide the Sudoku grid as input:
./sudoku_solver

The program will prompt you to enter the grid values row by row.
