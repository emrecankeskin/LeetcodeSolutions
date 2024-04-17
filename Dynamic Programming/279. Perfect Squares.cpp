#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int numSquares(int n) {
        vector<long long> arr(n+1,INT_MAX);
        arr[0] = 0;
        int count = 1;
        while(count*count<=n){
            int val = count*count;
            for(int i = val; i<n+1; ++i){
                arr[i] = min(arr[i-val]+1,arr[i]);
            }
            count++;
        }

        return arr[n];
    }
};
int main(){
    
}