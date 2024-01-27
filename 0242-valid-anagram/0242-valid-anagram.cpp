class Solution {
public:
    bool isAnagram(string s, string t) {
        // unordered_map
        if(t.length()<s.length()) return false;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        
        for(int i=0;i<t.length();i++){
            if(t[i]!=s[i])return false;
        }
        return true;
    }
};