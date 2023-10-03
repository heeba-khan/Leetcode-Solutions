class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        
        unordered_map<int,int>mp;
        
        for(auto i:nums){
            cnt+=mp[i]++;
        }
//         int p=0;
//         for(auto x:mp){
//             if(x.second==1){
//                 cnt+=p;
//                 x.second++;
//                 p++;
//             }
            
//         }
        return cnt;
    }
};