#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        long long l = 0,r = 0,ans= 0,count = 0;
        int sz = nums.size(),mx = INT_MIN;
        mx = *max_element(nums.begin(),nums.end());
        while(r < sz){
            if(nums[r++] == mx){
                k--;
            }
            while(k == 0){
                if(nums[l++] == mx){
                    k++;
                }
            }
            ans += l; 
        }
        return ans;

    }
};


int main(){
    
}