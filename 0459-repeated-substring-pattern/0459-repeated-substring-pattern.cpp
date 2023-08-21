class Solution {
public:
    bool repeatedSubstringPattern(string s) {
      string a=s+s;
        string b=s;
        int pos=a.find(b,1);
        if(pos!=-1&&pos<s.size()){
            return true;
        }
        return false;
    }
};