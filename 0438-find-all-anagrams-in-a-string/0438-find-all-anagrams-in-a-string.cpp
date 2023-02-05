class Solution {
public:
    
        vector<int> findAnagrams(string s, string p) {
        int s1 = s.length();
        int p1 = p.length();
        
        if(s.size() < p.size()) return {};
        
        vector<int> freq_p(26,0);
        vector<int> window(26,0);
        
        
        for(int i=0;i<p1;i++){
            freq_p[p[i]-'a']++;
            window[s[i]-'a']++;
        }
        
        vector<int> ans;
        if(freq_p == window) ans.push_back(0);
        
        for(int i=p1;i<s1;i++){
            window[s[i-p1] - 'a']--;
            window[s[i] - 'a']++;
            
            if(freq_p == window) ans.push_back(i-p1+1);
        }
        return ans;
    }
    
};