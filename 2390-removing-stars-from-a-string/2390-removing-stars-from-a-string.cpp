class Solution {
public:
    string removeStars(string s) {
        // for(int i=0;i<s.length();i++){
        //     if(s[i]=='*'){
        //         // s.erase(s.begin()+i);
        //         int j=i-1;
        //         s.erase(s.begin()+j);
        //     }
        //     // s.erase(s.begin()+i);
        // }
        // string str=s;
        // for(int i=0;i<str.length();i++){
        //     if(str[i]=='*'){
        //         str.erase(str.begin()+i);
        //     }
        // }
        // return str;

        stack<char>t;
        string ans="";
        for(int i=0;i<s.length();i++){
            if(s[i]=='*'){
                if(!t.empty()){
                    t.pop();
                }
            }
                else{
                    t.push(s[i]);
                }
            }
        while(!t.empty()){
            ans+=t.top();
            t.pop();
        }
       reverse(ans.begin(),ans.end());
       return ans;
    }
};