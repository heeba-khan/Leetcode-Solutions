class Solution {
public:
    bool makeEqual(vector<string>& words) {
        int n=words.size();
        if(n==1) return true;
        
        int cnt=0;
        
        for(const string &s:words){
            cnt+=s.length();
        }
        
        if(cnt%n!=0) return false;
        
        vector<int>v(26,0);
        
        for(const string &s:words){
            for(char c:s){
                v[c-'a']++;
            }
        }
        
        for(auto i:v){
            if(i%n!=0) return false;
        }
        return true;
    }
};