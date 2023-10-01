class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int n=nums.size();
        
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        
        int cnt=0;
        for(auto x:mp){
           cnt+=x.second/2;
        }
        return (cnt==n/2);
    }
};