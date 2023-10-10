
class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int i = 0, ans = 0, prod = 1;
        for(int j = 0; j<nums.size(); j++)
        {
            prod *= nums[j];
            while(prod>=k && i<=j)
                prod /= nums[i++];
            if(prod<k)
                ans += j - i + 1;
        }
        return ans;
    }
};