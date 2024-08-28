#include<bits/stdc++.h>
#include "functions.hpp"
using namespace std;

bool valid(vector<vector<char>> &board, int r, int c, char entry){
        for(int i=0; i<9; i++){
            if(board[i][c]==entry) return false;
            if(board[r][i]==entry) return false;
            if(board[3*(r/3) + i/3][3*(c/3) + i%3]==entry) return false;
        }
        return true;
}
bool solve(vector<vector<char>> &board){
        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                if(board[i][j]=='.'){
                    for(char entry = '1'; entry <= '9'; entry++){
                        if(valid(board, i, j, entry)){
                            board[i][j] = entry;
                            if(solve(board)==true) return true;
                            else board[i][j] = '.';
                        }
                    }
                    return false;
                }
            }
        }
        return true;
}
void solveSudoku(vector<vector<char>>& board) {
        solve(board);
}
