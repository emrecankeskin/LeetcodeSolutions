#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int left[n];
        int right[n];
        left[0] = nums[0];
        right[n-1] = nums[n-1];
        vector<int> ans;
        for(int i = 1; i<n; ++i){
            left[i] = left[i-1]*nums[i];
        }
        for(int i = n-2; i>=0; i--){
            right[i] = right[i+1]*nums[i];
        }
        ans.push_back(right[1]);
        for(int i = 1; i<n-1; ++i){
            ans.push_back(right[i+1]*left[i-1]);
        }
        ans.push_back(left[n-2]);

        return ans;

    }
};
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;



}
