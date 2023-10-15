class Solution {
public:
    vector<int> circularGameLosers(int n, int k) {
        vector<int>vis(n+1,0);
        vis[1]=1;
        int p=1;
        
        for(int i=1;i<=n;i++){
            p=(p+i*k)%n;
            if(p==0){
                p=n;
            }
            if(vis[p]==1) break;
            vis[p]=1;
        }
        
        vector<int>ans;
        
        for(int i=1;i<=n;i++){
            if(vis[i]==0)ans.push_back(i);
        }
        return ans;
    }
};