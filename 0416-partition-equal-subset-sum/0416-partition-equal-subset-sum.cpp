// class Solution {
// public:
//     bool f(int k,vector<int>& nums){
//         int n=nums.size();
//         vector<vector<int>>dp(n,vector<int>(k+1,0));
//         for(int i=0;i<n;i++) dp[i][0]=true;
//         // if(nums[0]>=k) 
//             dp[0][nums[0]]=true;
//         for(int j=1;j<n;j++){
//             for(int target=1;target<=k;target++){
//                 bool notTake=dp[j-1][target];
//                 bool take=false;
//                 if(nums[j]<=target)
//                     take=dp[j-1][target-nums[j]];
                
//                 dp[j][target]=take||notTake;
//             }
//         }
//         return dp[n-1][k];
//     }
    
//     bool canPartition(vector<int>& nums) {
//         int sum=0;
//         for(int i=0;i<nums.size();i++) sum+=nums[i];
//         if(sum%2) return false;
//         int target=sum/2;
//         return f(target,nums);
//     }
// };

class Solution {
public:
    bool spaceoptimise2(vector<int> &nums,int target){
        vector<bool> curr(target+1,0);
        curr[0]=1;
        int n=nums.size();
         for(int index=n-1;index>=1;index--){
                for(int t=target;t>=0;t--){
                    bool include=0;
                if(t-nums[index]>=0)
                    include=curr[t-nums[index]];
                    bool exclude=curr[t];
                    curr[t]=(include|| exclude);
                }
            }
            return curr[target];
    }
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        if(sum & 1)
            return false;
        int target=sum/2;
        int index=0;
        return spaceoptimise2(nums,target);
    }
};