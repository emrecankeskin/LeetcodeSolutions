#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    
    int lengthOfLastWord(string s) {
        int ptr = s.size()-1,ans = 0;
        while(ptr >= 0 && s[ptr] == ' '){
            ptr--;
        }
        while(ptr >=0 && s[ptr] != ' '){
            ptr--;
            ans++;
        }

        return ans;
    }   
};

int main(){
    Solution sol;
    cout<<sol.lengthOfLastWord("   fly me   to   the moon  ");
}