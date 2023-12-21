class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        sort(points.begin(),points.end(),[](const auto &a, const auto &b){
            return a[0]<b[0];
        });
        int maxWidth=INT_MIN;
        for(int i=1;i<points.size();i++){
            int width=points[i][0]-points[i-1][0];
            maxWidth=max(maxWidth,width);
        }
        return maxWidth;
    }
};