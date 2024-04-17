#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    struct eval_pair{
        string node;
        double cost;
    };
    double bfs(unordered_map<string, vector<eval_pair>>& adj, vector<string>& query){
        unordered_set<string> vis;
        string start = query[0];
        string end = query[1];
        queue<eval_pair> q;
        q.push({start,1.0});
        vis.insert(start);
        while(!q.empty()){
            int sz = q.size();
            for(int i = 0; i<sz; ++i){
                auto p = q.front();q.pop();
                if(!adj.count(p.node)) continue;
                if(p.node == end) return p.cost;
                for(auto& a : adj[p.node]){
                    if(!vis.count(a.node)){
                        q.push({a.node,p.cost*a.cost});
                        vis.insert(p.node);
                    }
                }
            }
        }
        return -1.0;
    }
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        vector<double> ans;
        unordered_map<string, vector<eval_pair>> adj;
        for(int i = 0; i<equations.size(); ++i){
            adj[equations[i][0]].push_back(eval_pair{equations[i][1],values[i]});
            adj[equations[i][1]].push_back(eval_pair{equations[i][0],1.0/values[i]});
        }
        for(vector<string>& q : queries){
            ans.push_back(bfs(adj,q));
        }



        return ans;
    }
};

int main(){
    
}