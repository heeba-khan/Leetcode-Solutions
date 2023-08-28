class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        
        map<int,int>mp;
        
          for(auto &i:nums1) mp[i]++;
        for(auto &i:nums2) mp[i]++;
        
        int a=*min_element(nums1.begin(),nums1.end());
        int b=*min_element(nums2.begin(),nums2.end());
        
        for(auto x:mp){
            if(x.second>1) return x.first;
        }
        string s;
        
        if(a<b) s= to_string(a)+to_string(b);
        else
            s= to_string(b)+to_string(a);
        
        return stoi(s);
        
    }
};