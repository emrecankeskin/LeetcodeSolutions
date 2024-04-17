#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        int sz = nums.size();
        for(int i = 0; i<sz; ++i){
            mp[nums[i]]++;
            if(mp[nums[i]]>1){
                return nums[i];
            }
        }
        
    }
};

int main(){
    
}