class Solution {
    private:
        int fun(vector<int>& nums,int low,int high,int target){
            while(low<=high){
                int mid=(low+high)>>1;
                if(nums[mid]<target){
                    low=mid+1;
                }
                else {
                    high=mid-1;
                }
            }
            return low;
        }

public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low=0,high=nums.size()-1;
        int start=fun(nums,low,high,target);
        int end=fun(nums,low,high,target+1)-1;
        if(start<nums.size()&&nums[start]==target){
            return {start,end};
        }
        return {-1,-1};
    }
};