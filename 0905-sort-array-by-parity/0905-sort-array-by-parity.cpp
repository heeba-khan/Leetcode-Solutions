class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int>v1;
        vector<int>v2;
        int n=nums.size();
        
        for(int i=0;i<n;i++){
            if(nums[i]%2==0)
                v1.push_back(nums[i]);
            else if(nums[i]%2!=0)
                v2.push_back(nums[i]);
        }
        
        for(int i=0;i<v2.size();i++){
            v1.push_back(v2[i]);
        }
        return v1;
    }
};