class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        // int i=0,j=1;
        // int n=nums.size();
        // int ans=0;
        // while(i<n-1&&j<n){
        //     if((nums[i]+nums[j])<target){
        //         ans++;
        //     }
        //     j++;
        // }
        // i++;
        // return ans;
        int ans=0;
        int i, j;
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]+nums[j]<target)
                    ans++;
            }
        }
        return ans;
    }
};