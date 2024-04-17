#include <bits/stdc++.h>

using namespace std;

class Solution {
    const int mxN = 1*1e5;
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        int count = 0,sz = 0;
        unordered_map<int,int> mp;
        vector<int> v;
        for(int a : arr){
            mp[a]++;
        }
        for(auto a : mp){
            v.push_back(a.second);
        }
        sort(v.begin(),v.end());
        sz = v.size();
        for(int i = 0; i<sz; ++i){
            if(v[i] <= k){
                k = k - v[i];
                v[i] = 0;
            }
        }
        for(int i : v){
            if(i > 0){
                count++;
            }
        }




        return count;

    }
};

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;



}