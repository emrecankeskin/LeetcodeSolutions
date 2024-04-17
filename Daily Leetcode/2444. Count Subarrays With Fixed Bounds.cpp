#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long ans = 0;
        int mxi = -1,mni = -1;
        int sz = nums.size();
        for(int r = 0,l=0; r<sz; r++){
            int x = nums[r];
            if(x < minK || x > maxK){
                l = r+1;
                continue;
            }
            if(x == maxK) mxi = r;
            if(x == minK) mni = r;

            ans+=max((min(mxi, mni)-l+1),0);
        }

        return ans;
    }
};

int main(){
    
}