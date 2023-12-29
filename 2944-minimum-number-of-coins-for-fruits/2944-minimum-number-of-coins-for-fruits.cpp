class Solution {
public:
    
    int dp[1001][2001];
    int solve(vector<int> &arr,int i,int j)
    {
        if(i>=arr.size()) return 0;
        
        if(dp[i][j+1]!=-1) return dp[i][j+1];
        int ans = 0;
        
        if(i>j)
        {
            return dp[i][j+1] = arr[i]+solve(arr,i+1,i+i+1);
        }
        
        
        int c1 = solve(arr,i+1,j);
        int c2 = arr[i]+solve(arr,i+1,i+i+1);
         
        
        return dp[i][j+1] = min(c1,c2);  
    }
    int minimumCoins(vector<int>& arr) {
        memset(dp,-1,sizeof(dp));
        return solve(arr,0,-1);
        
    }
};