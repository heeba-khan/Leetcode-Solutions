class Solution {
public:
    int f(string s,int i,int j){
        int cnt=0;
        
        while(i>=0&&j<s.length()&&s[i]==s[j]){
            cnt++;
            i--;
            j++;
        }
        return cnt;
    }
    
    int countSubstrings(string s) {
        int cnt=0;
        int n=s.length();
        
        for(int i=0;i<n;i++){
            int odd=f(s,i,i);
            cnt+=odd;
            
            int even=f(s,i,i+1);
            cnt+=even;
        }
        return cnt;
    }
};