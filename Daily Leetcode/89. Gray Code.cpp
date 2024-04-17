#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    long long _pow(long long a,long long b){
        long long res = 1;
        while(b){
            if(b & 1){
                res = res * a;
            }
            a = a * a;
            b >>= 1;
        }
        return res;
    }
    int gray(int n){
        return n ^(n>>1);
    }
    vector<int> grayCode(int n) {
        vector<int> arr;
        long long len = _pow(2,n);
        for(int i = 0; i<len; ++i){
            arr.push_back(gray(i));
        }

        return arr;
    }
};

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;



}
