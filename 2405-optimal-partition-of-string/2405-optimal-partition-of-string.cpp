class Solution {
public:
    int partitionString(string s) {
       unordered_set<char>st;
       int cnt=1;

       for(int i=0;i<s.size();i++){
           if(st.find(s[i])!=st.end()){
               cnt++;
               st.clear();
           }
           st.insert(s[i]);
       }
    return cnt;
    }
};