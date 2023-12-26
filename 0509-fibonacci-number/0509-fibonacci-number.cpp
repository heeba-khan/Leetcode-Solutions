class Solution {
    int fun(vector<int>& dp,int n){
        if(n<=1) return n;
        if(dp[n]!=-1) return dp[n];
        
        return dp[n]=fun(dp,n-1)+fun(dp,n-2);
    }
public:
    int fib(int n) {
     vector<int>dp(n+1,-1);
        return fun(dp,n);
    }
};