class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        unordered_map<int,int>mp;
        
        for(vector<int>s:nums)
            mp[s[0]]=max(s[1],mp[s[0]]);
            
        int ptr=0,cnt=0;
        
        for(int i=1;i<=100;i++){
            ptr=max(ptr,mp[i]);
            
            if(i<=ptr) cnt++;
            
            if(i==ptr) ptr=0;
        }
        return cnt;
    }
};






