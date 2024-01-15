class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int,int>mp;
        
        int n=matches.size();
        
        for(int i=0;i<n;i++){
            int lost=matches[i][1];
            mp[lost]++;
        }
        
        vector<int>w;vector<int>l;
        
        for(int i=0;i<n;i++){
            int win=matches[i][0];
            int lose=matches[i][1];
            
            if(mp.find(win)==mp.end()){
                w.push_back(win);
                mp[win]=2;
            }
            if(mp[lose]==1){
                l.push_back(lose);
            }
        }
        sort(w.begin(),w.end());
        sort(l.begin(),l.end());
        
        
        return {w,l};
    }
};