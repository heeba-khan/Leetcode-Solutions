class Solution {
public:
    bool f(string &s,int i,int j){
       
        
        while(i<=j){
        if(s[i]!=s[j])
            return false;
            else{
                i++;j--;
            }
        }
        return true;
    }
    bool validPalindrome(string s) {
        int i=0,j=s.length()-1;
        // bool flag=false;
        while(i<=j){
            if(s[i]!=s[j])
                 return f(s,i+1,j)||f(s,i,j-1);
            else{
                i++;j--;
            }
        }
        return true;
    }
};
