#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int sz = nums.size();
        int ans = 0;
        vector<int> pre(sz+1);
        unordered_map<int,int> mp;
        pre[0] = 0;
        for(int i = 0;i<sz; ++i){
            if(nums[i] == 0){
                nums[i] = -1;
            }
        }
        for(int i = 0; i<sz; ++i){
            pre[i+1] = pre[i] + nums[i];
        }
        for(int i = 0; i<pre.size(); ++i){
            if(mp.find(pre[i]) != mp.end()){
                ans = max(ans,i-mp[pre[i]]);
            }else{
                mp[pre[i]] = i;
            }
        }

        return ans;

    }
};

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;



}
