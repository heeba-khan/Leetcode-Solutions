class Solution {
public:
    // string fun(vector<char>v,char seperator){
    //     vector<char>a;
    //     vector<char>b;
    //     for(int i=0;i<v.size();i++){
    //         if(v[i]==seperator)
    //             b.push_back(v[i]);
    //         else
    //             a.push_back(v[i]);
    //     }    
    //     string ans="";
    //     for(int i=0;i<a.size();i++){
    //         ans+=a[i];
    //     }
    //     return ans;
    // }
    
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        int n=words.size();
        // string temp="";
        vector<string>ans;
       for(int i=0;i<n;i++){
           string s=words[i];
           string temp="";
           
           for(auto x:s){
               if(x!=separator){
                   temp+=x;
               }
               else if(x==separator&&temp!=""){
                   ans.push_back(temp);
                   temp="";
               }
           }
           if(temp!="") ans.push_back(temp);
       }
        return ans;
    }
};