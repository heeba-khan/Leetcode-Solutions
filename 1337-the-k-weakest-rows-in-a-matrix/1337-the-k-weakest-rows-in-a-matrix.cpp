class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int r=mat.size();
       vector<pair<int,int>>v;
        
        for(int i=0;i<r;i++){
            int strength=accumulate(mat[i].begin(),mat[i].end(),0);
            v.push_back({strength,i});
        }
        sort(v.begin(),v.end());
        
        vector<int>ans;
        
        for(int i=0;i<k;i++){
            ans.push_back(v[i].second);
        }
        return ans;
    }
};