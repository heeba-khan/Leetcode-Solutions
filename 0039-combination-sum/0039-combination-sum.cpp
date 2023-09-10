class Solution {
public:
    void sum(vector<int>& candidates, int target,vector<vector<int>>&ans,vector<int>&v,int i){
        if(target==0){
            ans.push_back(v);
            return;
        }    
        
        while(i<candidates.size()&&target-candidates[i]>=0){
            v.push_back(candidates[i]);
            
            sum(candidates,target-candidates[i],ans,v,i);
            ++i;
            
            v.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        candidates.erase(unique(candidates.begin(),candidates.end()),candidates.end());
        
        vector<vector<int>>ans;
        vector<int>v;
        
        sum(candidates,target,ans,v,0);
        
        return ans;
        
    }
};