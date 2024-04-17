#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int ptr1 = 0;
        int ptr2 = 0;
        while(ptr1 < nums1.size() && ptr2 < nums2.size()){
            if(nums1[ptr1] == nums2[ptr2]){
                return nums1[ptr1];
            }else if(nums1[ptr1] < nums2[ptr2]){
                ptr1++;
            }else{
                ptr2++;
            }
        }

        return -1;
    }
};

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;



}
