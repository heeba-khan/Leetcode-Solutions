class Solution {
public:
    string makeGood(string s) {
        if(s.size()==1) return s;
        while(1){
        stack<char>st;
        
        st.push(s[0]);
        int index=0;
        int n=s.size();
        
        for(int i=1;i<n;i++){
            if(s[i]+32==st.top()||s[i]-32==st.top()){
                s.erase(s.begin()+i);
                s.erase(s.begin()+index);
                st.pop();
            }
                index=i;
                st.push(s[i]);
            
        }
        if(n==s.size()) return s;
        }
        return "";
    }
};
