class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>v;
        map<int,int>mp;
       for(int i=0;i<n;i++){
           mp[nums[i]]++;
       }
       multimap<int,int>mp1;
       for(auto it:mp){
           mp1.insert({it.second,it.first});
       }
       for(auto it=mp1.rbegin();it!=mp1.rend();it++){
           if(k>0){
               v.push_back(it->second);
               k--;
           }
       }
       return v;
    }
};

