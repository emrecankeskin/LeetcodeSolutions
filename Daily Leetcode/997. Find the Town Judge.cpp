#include <bits/stdc++.h>

using namespace std;

const int mxN = 1*1e5;


class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        int k = trust.size();
        vector<int> arr(n,0);
        vector<int> rel(n,0);
        for(int i = 0; i<k; ++i){
            arr[trust[i][1]-1] += 1;
            rel[trust[i][0]-1] = 1;
        }
        for(int i = 0; i < n; ++i){
            if(arr[i] == n - 1 && rel[i] == 0){
                return i+1;
            }
        }

        return -1;
    }
};

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;



}
