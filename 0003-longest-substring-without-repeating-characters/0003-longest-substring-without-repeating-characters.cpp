class Solution {
public:

    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int ans=0;
        int left=0;
        
        unordered_set<char>st;
        
        for(int right=0;right<n;right++){
            
            if(st.count(s[right])==0){
                st.insert(s[right]);
                ans=max(ans,right-left+1);
            }
            else{
                
                while(st.count(s[right])){
                    st.erase(s[left]);
                    left++;
                }
                st.insert(s[right]);
            }
        }
        return ans;
    }
};

 