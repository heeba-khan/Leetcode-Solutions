class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string>v;
        string str="";
        
        for(int i=0;i<s.size();i++){
            if(s[i]==' ')
            {   v.push_back(str);
                str="";
            }
            else
                str+=s[i];
        }
        v.push_back(str);
        if(v.size()!=pattern.size()) return false;
        
        map<char,string>mp;
        map<string,bool>chk;
        
        for(auto i:v) chk[i]=false;
        
        for(auto i=0;i<pattern.length();i++){
            if(mp.find(pattern[i])==mp.end()){
                if(chk[v[i]]==false){
                    mp[pattern[i]]=v[i];
                    chk[v[i]]=true;
                }
                else
                    return false;
            }
            else{
                if(mp[pattern[i]]!=v[i]) return false;
            }
        }
        return true;
    }
};