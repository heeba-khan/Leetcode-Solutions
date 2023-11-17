class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n=nums.size();
        int a=n/2;
        int b=(n/2)-1;
        vector<int>v;
        sort(nums.begin(),nums.end());
        for(;b>=0&&a<n;a++,b--){
            v.push_back(nums[a]+nums[b]);
        }
        return *max_element(v.begin(),v.end());
    }
};