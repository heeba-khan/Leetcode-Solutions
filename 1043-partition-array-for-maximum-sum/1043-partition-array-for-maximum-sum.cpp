class Solution {
public:
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int n=arr.size();
        vector<int>dp(n+1,0);
        
        for(int ind=n-1;ind>=0;ind--){
            int len=0;
            int maxi=INT_MIN;
            int ans=INT_MIN;
            
            for(int j=ind;j<min(ind+k,n);j++){
                len++;
                maxi=max(maxi,arr[j]);
                int sum=len*maxi+dp[j+1];
                ans=max(ans,sum);
            }
            dp[ind]=ans;
        }
        return dp[0];
    }
};