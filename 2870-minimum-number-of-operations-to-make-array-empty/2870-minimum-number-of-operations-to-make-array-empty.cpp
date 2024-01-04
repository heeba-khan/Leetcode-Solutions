class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        
        unordered_map<int,int>mp;
        
        for(auto i:nums){
            mp[i]++;
        }
        
        for(auto x:mp){
            int t=x.second;
            if(t==1) return -1;
            ans+=t/3+(t%3+1)/2;
        }
        return ans;
    }
};