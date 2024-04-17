#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int score = 0,mx = 0;
        sort(tokens.begin(),tokens.end());
        int l = 0;
        int r = tokens.size()-1;
        while(l<=r){
            if(power >= tokens[l]){
                power -= tokens[l++];
                score++;
                mx = max(mx,score);
            }else if(score > 0){
                power += tokens[r--];
                score--;
            }else{
                break;
            }
        }
        return mx;
    }
};

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;



}
