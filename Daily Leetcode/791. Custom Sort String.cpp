#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char,int> mp;
        string str = "";
        for(char c : s){
            mp[c]++;
        }
        for(char a : order){
            if(mp.find(a) != mp.end()){
                while(mp[a]){
                    str.push_back(a);
                    mp[a]--;
                }
                
            }
        }

        for(auto& v : mp){
            if(v.second != 0){
                while(v.second){
                    str.push_back(v.first);
                    v.second--;
                }
            }
        }


        return str;
    }
};

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;



}
