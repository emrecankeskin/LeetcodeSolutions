#include <bits/stdc++.h>

using namespace std;


class Solution {
public:
    bool solve(vector<vector<char>>& board,int i,int j,int sz,int ptr,string word){
        if(i < 0 || j < 0 || i >= board.size() || j >= board[0].size() || board[i][j] != word[ptr]){
            return false;
        }
        if(ptr == sz-1){
            return true;
        }
        board[i][j] = '?';
        if(solve(board,i-1,j,sz,ptr+1,word) || solve(board,i+1,j,sz,ptr+1,word) || solve(board,i,j-1,sz,ptr+1,word) || solve(board,i,j+1,sz,ptr+1,word)){
            return true;
        }
        board[i][j] = word[ptr];

        return false;
        
    }
    bool exist(vector<vector<char>>& board, string word) {
        

        int row = board.size();
        int column = board[0].size();
        for(int i =0; i<row; ++i){
            for(int j = 0; j<column; j++){
                if(solve(board,i,j,word.size(),0,word)) return true;
            }

        }

    return false;
    }
};


int main(){
    
}