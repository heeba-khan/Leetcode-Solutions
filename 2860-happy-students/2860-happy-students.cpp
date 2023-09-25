class Solution {
public:
    int countWays(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=0,n=nums.size(),cnt=0;
        
        if(nums[0]!=0) ans=1;
        
        for(int i=0;i<n;i++){
            cnt++;
            if(cnt>nums[i]){
                if(i+1<n&&cnt<nums[i+1])
                    ans++;
                else if(i+1==n) ans++;
            }
        }
        return ans;
    }
};