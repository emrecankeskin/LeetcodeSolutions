#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxDepth(string s) {
        int left = 0;
        int mx = INT_MIN;
        for(char c: s){
            if(c == '('){
                left++;
            }else if(c == ')'){
                left--;
            }else if(c >= '0' && c <= '9'){
                mx = max(mx,left);
            }
        }


        return mx;
        
    }
};

int main(){
    
}