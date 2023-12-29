class Solution {
public:
    int f(int i,vector<int>& nums, int target,vector<vector<int>>& dp){
        if(target==0) return 0;
         if (target < 0) return INT_MIN;
        if (i >= nums.size()) return INT_MIN;
        
        // int a=0,b=0;
        if(dp[i][target]!=-1) return dp[i][target];
        
            int take=1+f(i+1,nums,target-nums[i],dp);
            
            int nottake=f(i+1,nums,target,dp);
            dp[i][target]=max(take,nottake);
        
        return dp[i][target];
    }
    
    int lengthOfLongestSubsequence(vector<int>& nums, int target) {
        int n=nums.size();
        vector<vector<int>>dp(n,vector<int>(target+1,-1));
        int res= f(0,nums,target,dp);
        if(res<=0) return -1;
        return res;
    }
};