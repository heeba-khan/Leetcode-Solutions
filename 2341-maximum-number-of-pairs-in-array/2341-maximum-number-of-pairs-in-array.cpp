class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        int n=nums.size();
        int cnt=0,left=0;
        
        unordered_map<int,int>mp;
        
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(auto x:mp){
            if(x.second%2==1) left++;
            cnt+=(x.second/2);
        }
        return {cnt,left};
    }
};
