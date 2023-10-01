class Solution {
public:
    string reverseWords(string s) {
        for(int j=0,i=0;j<=s.size();j++){
            if(s[j]==' '||s[j]=='\0'){
                reverse(s.begin()+i,s.begin()+j);
                i=j+1;
            }
        }
        return s;
    }
};

