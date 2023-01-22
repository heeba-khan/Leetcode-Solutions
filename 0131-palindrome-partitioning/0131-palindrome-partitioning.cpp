class Solution {
public:
    bool isPalindrome(string s){
       string t=s;
       reverse(t.begin(),t.end());
       return s==t;
    }

    void fun(string s,vector<string>v, vector<vector<string>>& ans){
        if(s.size()==0){
            ans.push_back(v);
            return;
        }

        
        for(int len=1;len<=s.size();len++){
            string x=s.substr(0,len);

            if(isPalindrome(x)){
                v.push_back(x);
                string y=s.substr(len,s.size()-len);
                fun(y,v,ans);
                v.pop_back();
            }
        }

    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> v={};
        fun(s,v,ans);
        return ans;
    }
};