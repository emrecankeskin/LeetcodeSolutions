#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        bitset<32> l(left);
        bitset<32> r(right);
        bitset<32> ans(0);
        for(int i = 31; i>=0; --i){
            if(l[i] != r[i]){
                break;
            }
            ans[i] = l[i];
        }
        
        return (int)ans.to_ullong();
    }
};


int main(){
    
}