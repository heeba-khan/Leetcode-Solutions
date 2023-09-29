class Solution {
public:
    string finalString(string s) {
        vector<char>v;
        for(int i=0;i<s.size();i++){
            if(s[i]!='i')
                v.push_back(s[i]);
            else
                reverse(v.begin(),v.end());
        }
        
        string ans="";
        for(int i=0;i<v.size();i++){
            ans+=v[i];
        }
        return ans;
    }
};