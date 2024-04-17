#include <bits/stdc++.h>

using namespace std;

class Solution {
public:

    bool check(int i,int j,int m,int n){
        return i >= 0 && j >= 0 && i != m && j != n;
    }
    int cutOffTree(vector<vector<int>>& forest) {
        priority_queue<pair<int,int>> q;
        // up down right left
        int dx[4] = {-1,1,0,0};
        int dy[4] = {0,0,1,-1};
        int count = 0;
        int m = forest.size();
        int n = forest[0].size();

        return count;
    }
};

int main(){
    
}