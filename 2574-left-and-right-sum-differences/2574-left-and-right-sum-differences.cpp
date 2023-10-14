// class Solution {
// public:
//     vector<int> leftRightDifference(vector<int>& nums) {
//         int n=nums.size();
//         vector<int>ans;
//         int leftsum=0;
//         int rightsum=accumulate(nums.begin()+1,nums.end(),0);
        
//         for(int i=0;i<n-1;i++){
//             ans.push_back(abs(leftsum-rightsum));
//             leftsum+=nums[i];
//             rightsum-=nums[i+1];
//         }
//         return ans;
//     }
// };

class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int left = 0;
        int right = 0;
        vector<int> ans;
        for(auto it : nums){
            right += it;
        }
        for(int i = 0; i < nums.size(); i++){
            right -= nums[i];
            if(right >= left)
                ans.push_back(right - left);
            else
                ans.push_back(left - right);

            left += nums[i];
        }
    return ans;
    }
};