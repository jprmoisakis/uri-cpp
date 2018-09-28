#include <iostream>
#include <bits/stdc++.h>

using namespace std;



bool isSafe(int board[][], int x,int  y,int n){
    //check for col
    for(int i =0;i<y;i++){
        if(board[x][i]){
            return false;
        }
    }

    for(int i =x, int j = y; i>=0x && j>=0;i--, j--){
        if(board[i][j]){
            return false;
        }
    }

    for(int i = x; int j = y; j>=0 && i<n; i++ ){
        if(board[i][j]){
            return false;
        }
    }

    return true;

}

bool nQueens(int board[][], int y, int n){
    bool result = false;
    if(y ==N){
        return true;
    }

    for(int i =0; i <n ; i++){

        if(isSafe(board,i ,y)){
            board[i][y] =1;
            result = nQueens(board, col + 1) || result;
            board[i][col] = 0
        }
    }
    return result;
}


int main(){
pair<int, int> positions[10000];



}