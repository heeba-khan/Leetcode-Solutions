class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
      int cnt=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]>=nums[i]){
                cnt++;
            
            if(cnt>1){
                return false;
            }
            
            if(i>1&&nums[i]<=nums[i-2]){
                nums[i]=nums[i-1];
            }
            else{
                nums[i-1]=nums[i];
            }
        }
        }
        return true;
    }
};