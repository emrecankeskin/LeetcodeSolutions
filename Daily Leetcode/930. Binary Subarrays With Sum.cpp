#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int solve(vector<int>& nums, int goal){
        if(goal == 0) return 0;
        int l=0,r=0,cur=0,ans = 0;
        while(r < nums.size()){
            cur += nums[r];
            while(cur > goal){
                cur -= nums[l];
                l++;
            }
            ans += (r-l+1); 
            r++;
        }

        return ans;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return solve(nums,goal)-solve(nums,goal-1);
    }
};

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;



}
