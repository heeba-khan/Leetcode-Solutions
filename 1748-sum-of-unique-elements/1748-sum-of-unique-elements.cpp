class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<int>v;
        
//         int n=nums.size();
//         sort(nums.begin(),nums.end());
        
//         for(int i=0;i<n;i++){
//             if(nums[i]!=nums[i+1])
//                 v.push_back(nums[i]);
//         }
        
        for(auto x:nums){
            mp[x]++;
            
        }
        int sum=0;
        for(auto i:mp){
            if(i.second==1)
              sum+=i.first;
        }
        // int sum=accumulate(v.begin(),v.end(),0);
        return sum;
    }
};