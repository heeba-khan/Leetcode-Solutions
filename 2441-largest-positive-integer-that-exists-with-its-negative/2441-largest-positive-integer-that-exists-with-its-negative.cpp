class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int i=0,j=n-1;
        int maxi=INT_MIN;
        // int sum=0;
        while(i<j){
            int sum=nums[i]+nums[j];
            if(sum==0){
                maxi=max(maxi,nums[j]);
                i++;
                j--;
            }
            else if(sum<0)
                i++;
            else
                j--;
        }
       if(maxi!=INT_MIN)
           return maxi;
        return -1;
    }
};













