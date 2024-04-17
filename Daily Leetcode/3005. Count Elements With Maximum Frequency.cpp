#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int arr[101] = {0};
        int mx = 0;
        int count = 0;
        for(int i : nums){
            arr[i]++;
            mx = max(mx,arr[i]);
        }
        for(int i = 1; i<=100; ++i){
            if(arr[i] == mx){
                count += arr[i];
            }
        }

        return count;
    }
};


int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;




}
