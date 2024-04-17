#include <bits/stdc++.h>

using namespace std;


// dijkstra with stops
// if stops become -1 it means it exceeded the limit so dont go over the road
class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<vector<pair<int,int>>> adj(n);
        // stop src cost
        priority_queue<pair<int,pair<int,int>>> q;
        vector<bool> vis(n,false);
        vector<int> dist(n,INT_MAX);
        for(int i = 0; i<flights.size(); ++i){
            adj[flights[i][0]].push_back({flights[i][1],flights[i][2]});
        }
        dist[src] = 0;
        q.push({k,{src,0}});
        while(!q.empty()){
            int stop = q.top().first;
            int src = q.top().second.first;
            int cost = q.top().second.second;
            q.pop();
            if(stop == -1){
                continue;
            } 

            for(auto& u : adj[src]){
                if(  cost + u.second < dist[u.first] ){
                    dist[u.first] = cost + u.second;
                    q.push({stop-1,{u.first,dist[u.first]}});
                }
            }

        }
        if(dist[dst] == INT_MAX){
            return -1;
        }

        return dist[dst];
    }
};

int main(){
    
}