class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans="";
        while(columnNumber>0){
            columnNumber--;
            char rem='A'+(columnNumber%26);
            // ans=char('A'+rem)+ans;
            ans=rem+ans;
            columnNumber/=26;
        }
        return ans;
    }
};