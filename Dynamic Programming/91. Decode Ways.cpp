#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int numDecodings(string s) {
        int sz = s.size();

        if(sz == 0 || s[0] == '0') return 0;


        int l = 1,r = 1,ans = 0;
        for(int i = 1; i<sz; ++i){
            ans = 0;
            if(s[i] != '0') ans += r;

            string str = s.substr(i-1,2);
            if(str >= "10" && str<= "26"){
                ans += l;
            }
            l = r;
            r = ans;
        }

        return r;
    }
};

int main(){
    
}