class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        map<int,int>mp;
        
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        
        priority_queue<pair<int,int>>h;
        for(auto it:mp){
            h.push({-it.second,it.first});
        }
        
        vector<int>ans;
        
        while(!h.empty()){
            int x=h.top().first;
            for(int i=0;i<abs(x);i++){
                ans.push_back(h.top().second);
            }
            h.pop();
        }
        return ans;
    }
};