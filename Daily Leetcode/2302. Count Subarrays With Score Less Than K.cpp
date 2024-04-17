#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        int l = 0,r=0,sz = nums.size();
        long long prod = 1,ans = 0,sum = 0;
        
        while(r < sz){
            sum += nums[r++];
            prod = sum * (r-l+1);
            while(l < r && prod >= k){
                sum -= nums[l++];
                prod = sum * (r-l+1);
            }
            ans += r-l+1;
        }

        return ans;
    }
};

int main(){
    
}