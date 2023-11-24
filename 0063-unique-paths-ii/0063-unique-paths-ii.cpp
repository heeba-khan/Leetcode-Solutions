class Solution {
public:
vector<vector<int>>memo;
    int helper(vector<vector<int>>&grid,int i,int j){
        if(i<0||j<0||i>=grid.size()||j>=grid[0].size()||grid[i][j])return 0;
        if(i==grid.size()-1&&j==grid[0].size()-1)return 1;
        if(memo[i][j]!=-1)return memo[i][j];
        int a=helper(grid,i,j+1);
        int b=helper(grid,i+1,j);
        return memo[i][j]= a+b;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        memo.resize(obstacleGrid.size(),vector<int>(obstacleGrid[0].size(),-1));
        return helper(obstacleGrid,0,0);
    }
};

