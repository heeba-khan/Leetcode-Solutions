class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>v1(n,0),v2(n,0);
        vector<int>ans(n,0);
        
        unordered_map<int,int>x,y;
        for(int i=0;i<n;i++){
                x[nums[i]]=1;
            y[nums[n-i-1]]=1;
            v1[i]=x.size();
            v2[n-i-1]=y.size();
        }
        for(int i=0;i<n-1;i++){
            ans[i]=v1[i]-v2[i+1];
        }
        ans[n-1]=v1[n-1];
        return ans;
    }
};
