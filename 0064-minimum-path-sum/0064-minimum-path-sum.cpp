class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        // int ans=INT_MAX;
        int r=grid.size();
        int c=grid[0].size();
        // int i=0,j=0;
        // int sum=0;
       for(int i=1;i<r;i++){
           grid[i][0]+=grid[i-1][0];
       }
       
       for(int j=1;j<c;j++){
           grid[0][j]+=grid[0][j-1];
       }
       for(int i=1;i<r;i++){
           for(int j=1;j<c;j++){
               grid[i][j]+=min(grid[i-1][j],grid[i][j-1]);
           }
       }
       return grid[r-1][c-1];
    }
};