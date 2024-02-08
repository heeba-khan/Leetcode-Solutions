class Solution {
public:
    int mod=1e9+7;
    int f(int num,int rem,int &x,vector<vector<int>>& dp){
        if(rem==0) return 1;
        if(rem<0) return 0; 
        
        int power=pow(num,x);
        if(power>rem) return 0;
        
        if(dp[num][rem]!=-1) return dp[num][rem];
        int pick=0;
        pick=f(num+1,rem-power,x,dp)%mod;
        int notpick=f(num+1,rem,x,dp)%mod;
        
        return dp[num][rem]=(pick+notpick)%mod;
    }
    
    int numberOfWays(int n, int x) {
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return f(1,n,x,dp);
    }
};