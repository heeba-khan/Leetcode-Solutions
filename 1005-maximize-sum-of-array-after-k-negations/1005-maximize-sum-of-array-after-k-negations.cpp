class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
       int sum=0;
        
        while(k>0){
            nums[0]=-nums[0];
            sort(nums.begin(),nums.end());
            k--;
        }
        
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        return sum;
    }
};