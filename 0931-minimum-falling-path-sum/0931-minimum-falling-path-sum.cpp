class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
//         int r=matrix.size();
//         int c=matrix[0].size();
        
//         int sum=0;
//         int mini=INT_MAX;
        
//         for(int i=1;i<r;i++){
//             for(int j=1;j<c;j++){
//                 if(!matrix[i+1][j-1]){
//                     sum+=matrix[i][j]+min(matrix[i+1][j],matrix[i+1][j+1]);
//                     mini=min(mini,sum);
//                 }
//                 else if(!matrix[i+1][j+1]){
//                     sum+=matrix[i][j]+min(matrix[i+1][j],matrix[i+1][j-1]);
//                     mini=min(mini,sum);
//                 }
//                 else if(!matrix[i+1][j+1]&&!matrix[i+1][j-1]&&!matrix[i+1][j]){
//                     sum+=matrix[i][j];
//                     mini=min(mini,sum);
//                 }
//                 else{
//                     sum+=matrix[i][j]+min(matrix[i+1][j],min(matrix[i+1][j+1],matrix[i+1][j-1]));
//                     mini=min(mini,sum);
//                 }
//             }
//         }
//         return mini;
         int n = matrix.size();

//     // Create a DP table to store the minimum falling path sum
//     vector<vector<int>> dp(n, vector<int>(n, INT_MAX));

//     // Initialize the first row of the DP table with the values from the matrix
//     for (int j = 0; j < n; ++j) {
//         dp[0][j] = matrix[0][j];
//     }

//     // Iterate through the matrix starting from the second row
//     for (int i = 1; i < n; ++i) {
//         for (int j = 0; j < n; ++j) {
//             // Find the minimum falling path sum for each cell
//             int minPrev = dp[i - 1][j];
//             if (j > 0) {
//                 minPrev = min(minPrev, dp[i - 1][j - 1]);
//             }
//             if (j < n - 1) {
//                 minPrev = min(minPrev, dp[i - 1][j + 1]);
//             }

//             // Update the DP table with the minimum falling path sum
//             dp[i][j] = matrix[i][j] + minPrev;
//         }
//     }

//     // Find the minimum falling path sum in the last row
//     int result = INT_MAX;
//     for (int j = 0; j < n; ++j) {
//         result = min(result, dp[n - 1][j]);
//     }

//     return result;
        
        vector<vector<int>>dp(n,vector<int>(n,INT_MAX));
        
        for(int j=0;j<n;j++) dp[0][j]=matrix[0][j];
        
        for(int i=1;i<n;i++){
            for(int j=0;j<n;j++){
                int mini=dp[i-1][j];
                
                if(j>0){
                    mini=min(mini,dp[i-1][j-1]);
                }
                if(j<n-1){
                    mini=min(mini,dp[i-1][j+1]);
                }
                
                dp[i][j]=matrix[i][j]+mini;
            }
        }
        int res=INT_MAX;
        for(int j=0;j<n;j++){
            res=min(res,dp[n-1][j]);
        }
        return res;
    }
};