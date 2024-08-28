#include<bits/stdc++.h>
#include "def.cpp"
using namespace std;
int main(){
    vector<vector<char>>sudoku_board(9, vector<char>(9,'.'));
    cout<<"Enter the sudoku you want to get solved: "<<endl;
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            cin>>sudoku_board[i][j];
        }
    }
    solveSudoku(sudoku_board);
    cout<<endl<<"Here is the solved sudoku"<<endl;
    // for(int i=0; i<9; i++){
    //     for(int j=0; j<9; j++){
    //         cout<<sudoku_board[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    for(int i = 0; i < 9; i++){
        if(i % 3 == 0 && i != 0) { // Add a horizontal line after every 3 rows
            cout << "-------+--------+-------" << endl;
        }
        for(int j = 0; j < 9; j++){
            if(j % 3 == 0 && j != 0) { // Add a vertical line after every 3 columns
                cout << " | ";
            }
            cout << sudoku_board[i][j] << " ";
        }
        cout << endl;
    }
}
