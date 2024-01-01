class Solution {
public:
    int f(int start,int end,vector<vector<int>>&dp){
        if(start>=end) return 0;
        if(dp[start][end]!=-1) return dp[start][end];
        int ans=INT_MAX;
        
        for(int i=start;i<=end;i++){
            int h=f(i+1,end,dp);
            int l=f(start,i-1,dp);
            ans=min(ans,i+max(h,l));
            
            dp[start][end]=ans;
        }
        return dp[start][end];
    }
    int getMoneyAmount(int n) {
      vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return f(1,n,dp);
    }
};