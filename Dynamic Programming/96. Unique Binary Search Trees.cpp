#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int numTrees(int n) {
        vector<int> dp(n+1,0);
        dp[0] = 1;
        dp[1] = 1;
        dp[2] = 2;
        for(int i = 3; i<=n; ++i){
            int sum = 0;
            for(int k = 1; k<=i; ++k){
                sum += dp[k-1] * dp[i-k];
            }
            dp[i] = sum;
        }

        return dp[n];
    }
};

int main(){
    
}