class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long high=0;
        long long high_diff=0;
        long long ans=0;
        
        for(long long num:nums){
            ans=max(ans,high_diff*num);
            high_diff=max(high_diff,high-num);
            high=max(high,num);
        }
        return ans;
    }
};