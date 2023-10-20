class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        vector<bool>seen(n);
        
        for(int i:nums){
            int cnt=0;
            while(!seen[i]){
                seen[i]=true;
                cnt++;
                i=nums[i];
            }
            ans=max(ans,cnt);
        }
        return ans;
    }
};