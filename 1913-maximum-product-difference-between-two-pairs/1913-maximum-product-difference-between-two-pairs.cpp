class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
       int n=nums.size();
        if(n<4) return -1;
        
        sort(nums.begin(),nums.end());
        
        int a=nums[0]*nums[1];
        int b=nums[n-1]*nums[n-2];
        
        return b-a;
    }
};