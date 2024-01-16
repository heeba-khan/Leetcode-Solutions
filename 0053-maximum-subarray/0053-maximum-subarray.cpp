class Solution {
public:
    int f(vector<int>& nums,int i,bool flag, vector<vector<int>>& dp){
        int n=nums.size();
        if(i>=n) return flag?0:-1e5;
        if(dp[flag][i]!=-1) return dp[flag][i];
        
        if(flag)
            return dp[flag][i]=max(0,nums[i]+f(nums,i+1,true,dp));
            
            
            return dp[flag][i]=max(f(nums,i+1,false,dp),nums[i]+f(nums,i+1,true,dp));
        
        
        // return dp[flag][i];
    }
    
    int maxSubArray(vector<int>& nums) {
     int n=nums.size();
        vector<vector<int>>dp(2,vector<int>(n,-1));
        return f(nums,0,false,dp);
    }
};

// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {    
//         vector<vector<int>> dp(2, vector<int>(size(nums), -1));
//         return solve(nums, 0, false, dp);
//     }
//     int solve(vector<int>& A, int i, bool mustPick, vector<vector<int>>& dp) {
//         if(i >= size(A)) return mustPick ? 0 : -1e5;
//         if(dp[mustPick][i] != -1) return dp[mustPick][i];
//         if(mustPick)
//             return dp[mustPick][i] = max(0, A[i] + solve(A, i+1, true, dp));
//         return dp[mustPick][i] = max(solve(A, i+1, false, dp), A[i] + solve(A, i+1, true, dp));
//     }
// };