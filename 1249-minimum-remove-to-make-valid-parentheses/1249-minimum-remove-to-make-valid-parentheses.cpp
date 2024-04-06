class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int left=0,right=0;
        stack<char>st;
        
        for(char ch:s){
            if(ch=='(')
                left++;
            else if(ch==')')
                right++;
            
             if(right>left){
            right--;
            continue;
        }
        else{
            st.push(ch);
        }
        }
        string res="";
       while(!st.empty()){
           char curr=st.top();
           st.pop();
           
           if(left>right&&curr=='('){
               left--;
           }
           else
               res+=curr;
       }
        reverse(res.begin(),res.end());
        return res;
    }
};