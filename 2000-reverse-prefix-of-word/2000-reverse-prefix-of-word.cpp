class Solution {
public:
    string reversePrefix(string word, char ch) {
//         string a="";
//         string b="";
//         int n=word.size();
        
//         for(int i=0;i<n;i++){
//             if(word[i]==ch){
//                 a+=word.substr(0,i+1);
//                 reverse(a.begin(),a.end());
//                 b+=word.substr(i+1,n);
//                 break;
//             }
//             else if(word[i]!=ch){
//                 return word;
//             }
//         }
//         return a+b;
        int j=word.find(ch);
        if(j!=-1){
            reverse(word.begin(),word.begin()+j+1);
        }
        return word;
    }
};