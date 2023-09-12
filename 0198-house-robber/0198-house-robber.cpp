class Solution {
public:
    int rob(vector<int>& nums) {
      int n=nums.size();
        
        vector<int>v(n+1,0);
        
        for(int i=1;i<n+1;i++){
            if(i>1){
                v[i]=max(nums[i-1]+v[i-2],v[i-1]);
            }
            else
                v[i]=max(nums[i-1],v[i-1]);
        }
        return v[n];
    }
};