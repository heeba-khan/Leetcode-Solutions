class Solution {
public:
    int longestPalindrome(string s) {
        int oddcnt=0;
        int n=s.length();
        unordered_map<char,int>mp;
        for(auto i:s){
            mp[i]++;
            
            if(mp[i]%2==1)
                oddcnt++;
            else
                oddcnt--;
        }
        
        
        
        if(oddcnt>1)
            return n-oddcnt+1;
        
        return n;
        
    }
};
