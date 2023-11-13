class Solution {
public:
    bool isVowel(char c){
        string vow="aeiouAEIOU";
        for(auto i:vow){
            if(c==i) return 1;
        }
        return 0;
    }
    
    string sortVowels(string s) {
        string ans="";
        int n=s.length();
        
        for(int i=0;i<n;i++){
            if(isVowel(s[i]))
                ans.push_back(s[i]);
        }
        
        sort(ans.begin(),ans.end());
        
        int p=0;
        for(int i=0;i<n;i++){
            if(isVowel(s[i])){
                s[i]=ans[p++];
            }
        }
        return s;
    }
};