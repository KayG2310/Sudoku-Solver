# Sudoku-Solver
<h2>Overview</h2>
<p>This program solves a given Sudoku puzzle using a backtracking algorithm. The puzzle is represented as a 9x9 grid, where empty cells are denoted by a period (.). The solution process involves filling in the grid while ensuring that each number from 1 to 9 appears only once in each row, column, and 3x3 subgrid.</p>

<h2>How It Works</h2>
<h4>Input:</h4>
<p>The program accepts a 9x9 Sudoku grid as input. Empty cells should be represented by '.'</p>

<h4>Algorithm:</h4>
<p>The solver uses a backtracking approach. It iteratively tries numbers from 1 to 9 in each empty cell, checking if the number is valid according to Sudoku rules. If a number is valid, it moves on to the next cell. If it encounters a cell where no valid number can be placed, it backtracks to the previous cell and tries the next possible number.</p>

<h4>Output:</h4>
<p>Once the puzzle is solved, the program prints the completed Sudoku grid, formatted with distinguishing lines to create a clear grid structure.</p>

<h2>Usage</h2>

<h4>Compilation:</h4>
Compile the program using a C++ compiler:
g++ -o sudoku_solver sudoku_solver.cpp

<h4>Execution:</h4>
Run the compiled executable and provide the Sudoku grid as input:
./sudoku_solver

The program will prompt you to enter the grid values row by row.
