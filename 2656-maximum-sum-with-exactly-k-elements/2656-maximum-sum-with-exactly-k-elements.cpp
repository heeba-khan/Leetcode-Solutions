// class Solution {
// public:
//     int maximizeSum(vector<int>& nums, int k) {
//         int n=nums.size();
// //         int p=-1;
//         sort(nums.begin(),nums.end());
// //         double sum=0;
        
// //         while(k!=0){
// //             p=nums[n-1];
// //             nums[n-1]=nums[n-1]+1;  
// //             sum+=p;
// //         }
// //         // int sum=accumulate(nums.begin(),nums.end(),0);
// //         return sum;
        
//         int p=nums[n-1];
//         int ans=nums[n-1];
//         for(int i=1;i<k;i++){
//             p+=1;
//             ans+=p;
//         }
//         return ans;
//     }
// };

class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        
        int n = nums[nums.size()-1];
        int ans = nums[nums.size()-1];
        for(int i = 1; i<k; i++){
            n+=1;
            ans+=n;
        }
        return ans;
    }
};