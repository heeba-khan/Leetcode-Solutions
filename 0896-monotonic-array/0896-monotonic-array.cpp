class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n=nums.size();
        if(n<2) return true;
        
        int d=0;
        for(int i=1;i<n;i++){
            if(nums[i]>nums[i-1])
            {
                if(d==0) d=1;
                else if(d==-1) return false;
            }
            else if(nums[i]<nums[i-1]){
                if(d==0) d=-1;
                else if(d==1) return false;
            }
        }
        
        return true;
    }
};