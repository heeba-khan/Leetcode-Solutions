class Solution {
public:
    bool fun(string s,char x){
        for(int i=0;i<s.size();i++){
            if(x==s[i])
                return true;
        }
        return false;
    }
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>v;
        int n=words.size();
        for(int i=0;i<n;i++){
            if(fun(words[i],x))
                v.push_back(i);
        }
        return v;
    }
};