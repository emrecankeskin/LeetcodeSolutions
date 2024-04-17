#include <bits/stdc++.h>

using namespace std;


class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int count = 0;
        int len = s.size();
        int ptr = 0;
        string str(len,'0');
        for(char c : s){
            if(c == '1'){
                count++;
            }
        }
        str[len-1] = '1';
        count--;
        while(count--){
            str[ptr] = '1';
            ptr++;
        }

        return str;

    }
};


int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;



}
