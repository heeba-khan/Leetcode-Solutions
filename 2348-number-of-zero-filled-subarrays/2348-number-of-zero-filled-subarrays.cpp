class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long cnt=0,ans=0;
        for(int n:nums){
            if(n==0){
                ans+=++cnt;
            }
            else{
                cnt=0;
            }
        }
        return ans;
    }
};