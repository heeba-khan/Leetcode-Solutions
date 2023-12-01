class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s1="",s2="";
        int n=word1.size();
        int m=word2.size();
        
        for(int i=0;i<n;i++) s1+=word1[i];
        for(int j=0;j<m;j++) s2+=word2[j];
        
//         for(int i=0;i<s1.size();i++){
//             for(int j=0;j<s2.size();j++){
//                 if(s1[i]!=s2[j])
//                     return false;
//             }
//         }
        
//         return true;
        return (s1==s2);
    }
};