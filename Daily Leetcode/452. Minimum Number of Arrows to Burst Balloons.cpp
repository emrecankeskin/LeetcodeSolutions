#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        if(points.size() < 2){
            return points.size();
        }
        sort(points.begin(),points.end(),[](auto a,auto b){
            return a[1] < b[1];
        });

        int count = 0;
        long long end = LLONG_MIN;
        for(auto a : points){
            if(end < a[0]){
                end = a[1];
                count++;
            }
        }

        return count;
    }
};

int main(){

}