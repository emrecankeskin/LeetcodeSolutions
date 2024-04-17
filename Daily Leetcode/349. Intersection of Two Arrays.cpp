#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> arr(1001,0);
        set<int> st;
        for(int i = 0; i<nums1.size(); ++i){
            arr[nums1[i]]++;
        }
        for(int i = 0; i<nums2.size(); ++i){
            if(arr[nums2[i]] >= 1){
                st.insert(nums2[i]);
            }
        }
        vector<int> ans(st.begin(),st.end());
        
        return ans;
    }
};

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;



}
