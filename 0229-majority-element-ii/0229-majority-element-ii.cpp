class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int m=n/3;
        
        vector<int>v;
        
        // if(n==1||n==2) return nums;
        
        unordered_map<int,int>mp;
        
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(auto it:mp){
            // if(it.second>m) v.push_back(it.first);
            int element=it.first;
            int cnt=it.second;
            
            if(cnt>m) v.push_back(element);
        }
        return v;
    }
};