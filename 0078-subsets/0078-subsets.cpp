class Solution {
public:
    void fun(vector<vector<int>>& ans, vector<int>&v,vector<int>&nums, int i){
        if(i==nums.size()){
            ans.push_back(v);
            return;
        }
        v.push_back(nums[i]);
        fun(ans,v,nums,i+1);
        v.pop_back();
        fun(ans,v,nums,i+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>v;
        
        // ans.push_back({});
        
        fun(ans,v,nums,0);
        
        return ans;
        
        
    }
};