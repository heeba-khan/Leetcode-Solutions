class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int>mp;
        
        for(int x=0;x<s.size();x++){
            mp[s[x]]++;
        }
        int cnt=mp[s[0]];
        for(auto i:mp){
            if(i.second!=cnt)
                return false;
        }
            return true;
    }
};