#include <bits/stdc++.h>

using namespace std;


class Solution {
public:
    int pivotInteger(int n) {
        if(n == 1){
            return n;
        }
        int sum = ((n+1)*n) / 2;
        int x = 1;
        while(x != n){
            int left = ((x+1)*x) / 2;
            int right = sum - left + x;
            if(left == right){
                return x;
            }
            x++;
        }

        return -1;
    }
};


int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;



}
