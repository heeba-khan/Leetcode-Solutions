class Solution {
public:
    int findMin(vector<int>& nums) {
        int mini=INT_MAX;
        int n=nums.size();
        for(int i=1;i<n;i++){
            if(nums[i]<nums[i-1])
                mini=min(mini,nums[i]);
        }
        if(mini>=INT_MAX)
            return nums[0];
        return mini;
    }
};