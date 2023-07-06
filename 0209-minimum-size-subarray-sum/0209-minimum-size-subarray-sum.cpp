class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int i=0,j=0,sum=0;
        int len=INT_MAX;
        while(j<n){
            sum+=nums[j];
            while(sum>=target){
                sum-=nums[i];
                len=min(len,j-i+1);
                i++;
            }
            j++;
        }
        if(len==INT_MAX)
            return 0;
        return len;
    }
};