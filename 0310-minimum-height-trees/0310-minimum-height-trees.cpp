class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        if(n==1) return {0};
        
        vector<vector<int>>adj(n);
        vector<int> indegree(n,0);
        vector<int>ans;
        
        for(const auto& e:edges ){
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
            indegree[e[0]]++;
            indegree[e[1]]++;
        }
        
        queue<int>q;
        
        for(int i=0;i<n;++i){
            if(indegree[i]==1)
                q.push(i);
        }
        
        while(!q.empty()){
            int s=q.size();
            ans.clear();
            
            for(int i=0;i<s;++i){
                int node=q.front();
                q.pop();
                ans.push_back(node);
                
                for(int p:adj[node]){
                    if(--indegree[p]==1)
                        q.push(p);
                }
            }
            
            
        }
        return ans;
    }
};




























