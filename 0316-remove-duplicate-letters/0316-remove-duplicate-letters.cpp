class Solution {
public:
    string removeDuplicateLetters(string s) {
       stack<char>st;
        unordered_set<char>seen;
        unordered_map<char,int>mp;
        
        int n=s.size();
        
        for(int i=0;i<n;i++){
            mp[s[i]]=i;
        }
        
        for(int i=0;i<n;i++){
            char c=s[i];
            if(seen.find(c)==seen.end()){
                while(!st.empty()&&c<st.top()&&i<mp[st.top()]){
                    seen.erase(st.top());
                    st.pop();
                }
                seen.insert(c);
                st.push(c);
            }
        }
        string res="";
        while(!st.empty()){
            res=st.top()+res;
            st.pop();
        }
        return res;
    }
};