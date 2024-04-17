#include <bits/stdc++.h>

using namespace std;


class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int ct = 0;
        int max_freq = INT_MIN;
        int freq_count = 0;
        vector<int> arr(26,0);
        for(char& c : tasks){
            arr[c-'A']++;
            max_freq = max(max_freq,arr[c-'A']);
        }
        for(int i : arr){
            if( i == max_freq){
                freq_count++;
            }
        }

        return max((int)tasks.size(),((max_freq-1)*(n+1))+freq_count);
    }
};

int main(){
    
}