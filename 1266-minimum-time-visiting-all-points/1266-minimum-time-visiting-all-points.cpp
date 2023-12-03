class Solution {
public:
    int fun(vector<int>a,vector<int>b){
        int x=abs(a[0]-b[0]);
        int y=abs(a[1]-b[1]);
        return max(x,y);
    }
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int ans=0;
        int n=points.size();
        for(int i=1;i<n;i++){
            ans+=fun(points[i-1],points[i]);
        }
        return ans;
    }
};