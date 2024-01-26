class Solution {
public:
    int dp[51][51][51];
    int mod=1000000007;
    
    
    long f(int m, int n, int maxMove,int i,int j){
        if(i<0||i>=m||j<0||j>=n) return 1;
        
        if(maxMove<=0) return 0;
        
        if(dp[i][j][maxMove]!=-1) return dp[i][j][maxMove];
        
        long res=0;
        res+=f(m,n,maxMove-1,i+1,j);
         res+=f(m,n,maxMove-1,i-1,j);
         res+=f(m,n,maxMove-1,i,j+1);
         res+=f(m,n,maxMove-1,i,j-1);
        
        return dp[i][j][maxMove]=res%mod;
    }
    
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        memset(dp,-1,sizeof(dp));
        return f(m,n,maxMove,startRow,startColumn)%mod;
    }
};