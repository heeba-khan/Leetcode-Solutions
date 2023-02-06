class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        //TLE

        // vector<int>ans;
        // // int n=nums.size()/2;
        // int i=0,j=n;
        // while(i<n&&j<nums.size()){
        //     ans.push_back(nums[i]);
        //     ans.push_back(nums[j]);
        // }i++,j++;
        // return nums;

        //Optimized
        vector<int>ans;
        for(int i=0,j=n;i<n,j<nums.size();i++,j++ ){
            ans.push_back(nums[i]);
            ans.push_back(nums[i+n]);
        }
        return ans;
    }
};