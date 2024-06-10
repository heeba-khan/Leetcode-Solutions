class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int n=heights.size();
        vector<int>v(n);
        int cnt=0;
        
        for(int i=0;i<n;i++){
            v[i]=heights[i];
        }
        sort(heights.begin(),heights.end());
        
        for(int i=0;i<n;i++){
            if(heights[i]!=v[i])
                cnt++;
        }
        return cnt;
    }
};