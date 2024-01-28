class Solution {
public:
//     string f(string &s){
        
//         string str="";
//         for(int i=0;i<s.length();i++){
//             if(s[i]>='A'&&s[i]<='Z')
//                 str+=tolower(s[i]);
//             else if(s[i]>='a'&&s[i]<='z')
//                 str+=tolower(s[i]);
//         }
//                     return str;
//     }
    bool isPalindrome(string s) {
        int n=s.length();
        int i=0,j=n-1;
        // string st=f(s);
        
      while(i<=j){
          if(!isalnum(s[i])){
              i++;
              continue;
          }
          if(!isalnum(s[j])){
              j--;
              continue;
          }
          if(tolower(s[i])!=tolower(s[j])){
              return false;
          }
          else{
              i++;
              j--;
          }
          
      }
        return true;
    }
};