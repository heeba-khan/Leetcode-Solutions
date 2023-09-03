class Solution {
    private:
    
        void dfs(int src, vector<int>adj[],vector<bool>&vis){
                    vis[src]=true;
            for(auto it:adj[src]){
                if(!vis[it]){
                    vis[it]=true;
                    dfs(it,adj,vis);
                }
            }
        }
    
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        int x=edges.size();
        vector<bool>vis(n+1,false);
        vector<int>adj[n];
        
        for(int i=0;i<x;i++){
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        
        for(int i=0;i<n;i++){
            if(!vis[i]){
                dfs(i,adj,vis);
                if(vis[source]&&!vis[destination]||!vis[source]&&vis[destination])
                    return false;
            }
        }
        return true;
    }
};