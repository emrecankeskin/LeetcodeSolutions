#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k == 0){
            return k;
        }
        int count = 0;
        int l = 0,r=0;
        int sz = nums.size();
        long long product = 1;

        while(r < sz){
            product = product * nums[r++];
            while(l < r && product >= k){
                product /= nums[l++];
            }
            count += r-l;

        }
        return count;
    }
};

int main(){
    vector<int> arr = {10,5,2,6};
    Solution sol;
    cout<<sol.numSubarrayProductLessThanK(arr,100);
}