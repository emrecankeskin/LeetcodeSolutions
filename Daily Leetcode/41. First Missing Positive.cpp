#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int k = 0;
        int sz = nums.size();
        while(k<sz){
            //puts the indexed of numbers
            if(k <= sz && nums[k] > 0 && nums[k] < sz && nums[nums[k]-1] != nums[k] ){
                swap(nums[nums[k]-1],nums[k]);
            }else{
                k++;
            }
        }
        for(int i = 0; i<sz; ++i){
            if(nums[i] != i+1){
                return i+1;
            }
        }
        return sz+1;
    }
};

int main(){
    
}