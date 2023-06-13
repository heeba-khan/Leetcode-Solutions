class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int row=grid.size();
        int cnt=0;
        
        vector<vector<int>> p=grid;
        
        for(int i=0;i<row;i++){
            for(int j=i;j<row;j++){
                swap(grid[i][j],grid[j][i]);
            }
        }
        for(int i=0;i<row;i++){
            for(int j=0;j<row;j++){
                if(p[i]==grid[j])
                    cnt++;
            }
        }
        return cnt;
    }
};