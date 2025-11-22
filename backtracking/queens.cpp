# include <iostream>
#include <string>
#include <vector>
using namespace std;

void printBoard(vector<vector<char>> board){
    int n=board.size();

     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
     }
     cout<<"_________"<<endl;
}

bool isSafe(vector<vector<char>> board,int row,int col){
    int n= board.size();

    //Horizontal safety
    for(int i=0;i<n;i++){
        if(board[row][i]=='Q'){
            return false;
        }
    }

    //vertical safety
    for(int i=0;i<n;i++){
        if(board[i][col]=='Q'){
            return false;
        }
    }

    //Diagonal Left
    for(int i=row,j=col;i>=0 && j>=0; i--,j--){
        if(board[i][j]=='Q'){
            return false;
        }
    }

    //Diagonal Right

    for(int i=row,j=col; i>=0 && j<n;i--,j++){
         if(board[i][j]=='Q'){
            return false;
        }
    }
 
   return true;
}

void nQueens(vector <vector<char>> board,int row){
    int n=board.size();
    if(row==n){
        printBoard(board);
        return;
    }

    for(int j=0;j<n;j++){
        if(isSafe(board,row,j)){
            board[row][j]='Q';
        nQueens(board,row+1);
        board[row][j]='.';
        }
        
    }
}
 


int main(){

vector <vector<char>> board;
int n=6;

for(int i=0;i<n;i++){
    vector <char> newrow;
    for(int j=0;j<n;j++){
        newrow.push_back('.');
    }
    board.push_back(newrow);
}
// printBoard(board);
nQueens(board,0);
return 0;
}