class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r1=matrix.size();
        int c1=matrix[0].size();
        int i=0,j=0;
        int row=0,col=c1-1;
        while (row < r1 && col > -1) {
            int cur = matrix[row][col];
            if (cur == target) return true;
            if (target > cur) row++;
            else col--;
        }
        return false;
    }
};