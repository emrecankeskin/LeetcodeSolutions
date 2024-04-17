#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<int> dist(n,INT_MAX);
        vector<bool> vis(n,false);
        vector<vector<pair<long long,long long>>> adj(n);
        priority_queue<pair<long long,long long>> q;
        int mx = INT_MIN;
        for(int i = 0; i<times.size(); ++i){
            adj[times[i][0]-1].push_back({times[i][1]-1,times[i][2]});
        }
        dist[k-1] = 0;
        vis[k-1] = true;
        q.push({0,k-1});
        while(!q.empty()){
            auto a = q.top();q.pop();
            if(vis[a.second]) continue;
            vis[a.second] = true;
            for(auto u : adj[a.second]){
                long long v = u.second;
                long long w = u.first;
                if(dist[a.second] + w < dist[v]){
                    dist[v] = dist[a.second] + w;
                    q.push({-dist[v],v});
                }
            }
        }
        for(int i = 0; i<n; ++i){
            if(dist[i] == INT_MAX){
                return -1;
            }
            mx = max(mx,dist[i]);
        }

        return mx;
    }
};

int main(){
    
}