class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        
        vector<int>rowone(m,0);
        vector<int>colone(n,0);
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                rowone[i]+=grid[i][j];
                colone[j]+=grid[i][j];
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                grid[i][j]=2*(rowone[i]+colone[j])-m-n;
            }
        }
        return grid;
    }
};