#include <bits/stdc++.h>

using namespace std;


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mn = prices[0];
        int mx = 0;
        for(int i = 1; i<prices.size(); ++i){
            if(prices[i] < mn){
                mn = prices[i];
            }else{
                mx = max(prices[i]-mn,mx);
            }
        }

        return mx;

    }
};

int main(){
    
}