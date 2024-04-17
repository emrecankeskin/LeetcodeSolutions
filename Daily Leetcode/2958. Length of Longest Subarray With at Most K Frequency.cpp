#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int l=0,r = 0,sz = nums.size(),mx = INT_MIN;
        while(r < sz){
            if(mp[nums[r]] >= k){
                mx = max(mx,r-l);
                mp[nums[l]]--;
                l++;
            }else{
                mp[nums[r]]++;
                r++;
            }
        }
        mx =max(mx,r-l);
        return mx;
    }
};

int main(){
    Solution sol;
    vector<int> arr = {1,2,3,1,2,3,1,2};
    cout<<sol.maxSubarrayLength(arr,2);
}