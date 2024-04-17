#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        if(n<=3) return n;
        int a = 2; // 
        int b = 3;
        int curr = a+b;
        for(int i = 0; i<n-3; ++i){
            
            curr = a+b;
            a = b;
            b = curr;
        }

        return curr;
    }
};

int main(){
    
}