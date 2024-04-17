#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
        int sz = nums.size();
        int dp[101];
        dp[0] = 0;
        dp[1] = nums[1];
        for(int i = 2; i<=sz; ++i){
            dp[i] = max(dp[i-2] + nums[i],dp[i-1]);
        }


        return dp[sz];
    }
};

int main(){
    
}