class Solution {
public:
    int minimumRightShifts(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        int ans=0;
        
        for(int i=0;i<n;i++){
            if(nums[i]>nums[(i+1)%n]){
                cnt++;
                ans=n-i-1;
            }
        }
        if(cnt<2)   
            return ans;
        return -1;
    }
};