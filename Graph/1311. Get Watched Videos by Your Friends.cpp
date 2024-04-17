#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<string> bfs(vector<vector<int>>& adj, vector<vector<string>>& vid ,int id,int level){
        unordered_map<string,int> mp;
        unordered_set<int> vis;
        queue<int> q;
        vector<pair<string,int>> temp;
        vector<string> ans;
        q.push(id);
        while(level--){
            int sz = q.size();
            for(int i = 0;i<sz; ++i){
                int n = q.front();q.pop();
                
                for(auto& i : adj[n]){
                    if(vis.find(i) == vis.end()){
                        vis.insert(i);
                        q.push(i);
                    }
                }
            }
        }
        while(!q.empty()){
            int a = q.front();q.pop();
            if(a != id){
                for(auto str : vid[a]){
                    mp[str]++;
                }
            }
            
        }
        for(auto& p : mp){
            temp.push_back(p);
        }
        sort(temp.begin(),temp.end(),[](const auto& a,const auto& b){
            if(a.second == b.second){
                return a.first < b.first;
            }else{
                return a.second <b.second;
            }
        });
        for(auto& p : temp){
            ans.push_back(p.first);
        }
        return ans;
    }
    vector<string> watchedVideosByFriends(vector<vector<string>>& watchedVideos, vector<vector<int>>& friends, int id, int level) {
        vector<vector<int>> adj(100);
        vector<string> ans;
        for(int i = 0; i<friends.size(); ++i){
            for(int j = 0; j<friends[i].size(); ++j){
                adj[i].push_back(friends[i][j]);
            }
        }
        ans = bfs(adj,watchedVideos,id,level);

        return ans;
    }
};

int main(){
    
}