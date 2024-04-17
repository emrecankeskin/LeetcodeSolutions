#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        int l = 0;
        int r = n-1;
        for(int i = n-1; i>=0; --i){
            if(nums[l]*-1 >= nums[r]){
                ans[i] = nums[l]*nums[l];
                l++;
            }else{
                ans[i] = nums[r]*nums[r];
                r--;
            }
        }
        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;



}
