class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        sort(nums.rbegin(),nums.rend());
        int a=nums[0];
        int b=nums[1];
        
        int p=(a-1)*(b-1);
        return p;
    }
};