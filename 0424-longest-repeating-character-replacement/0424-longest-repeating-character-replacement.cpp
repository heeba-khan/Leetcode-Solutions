class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int>mp;
        int ans=0,left=0,right=0,cnt=0;
        
        for(int right=0;right<s.length();right++){
            mp[s[right]]++;
            
            cnt=max(cnt,mp[s[right]]);
            
            if((right-left+1)-cnt>k){
                mp[s[left]]--;
                left++;
            }
            else{
                ans=max(ans,right-left+1);
            }
        }
        return ans;
    }
};