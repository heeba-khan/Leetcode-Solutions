class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int total_sum=0, c1=0,c2=0,maxsum_subarray=INT_MIN, minsum_subarray=INT_MAX;
        for(auto i:nums){
            total_sum+=i;
            c1+=i;
            c2+=i;
            maxsum_subarray=max(maxsum_subarray,c1);
            if(c1<0) c1=0;
            minsum_subarray=min(minsum_subarray,c2);
            if(c2>0) c2=0;
        }
        return (total_sum==minsum_subarray)?maxsum_subarray:max(maxsum_subarray,total_sum-minsum_subarray);
    }
};