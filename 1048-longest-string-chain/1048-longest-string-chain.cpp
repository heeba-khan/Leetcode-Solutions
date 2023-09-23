// class Solution {
// public:
//     static bool cmp(const string &s1,const string &s2){
//         return s1.length()>s2.length();
//     }
//     int longestStrChain(vector<string>& words) {
//         sort(words.begin(),words.end(),cmp);
//         unordered_map<string,int> mp;
//         int ans=0;
        
//         for(string w:words){
//             int longest=0;
//             for(int i=0;i<w.length();i++){
//                 string s=w;
//                 s.erase(i,1);
//                 longest=max(longest,mp[s]+1);
//             }
//             mp[w]=longest;
//             ans=max(ans,longest);
//         }
//         return ans;
//     }
// };

class Solution {
public:
        static bool cmp(const string &s1, const string &s2) {
        return s1.length() < s2.length();
    }

    int longestStrChain(vector<string>& words) {
        sort(words.begin(), words.end(), cmp);
        unordered_map<string, int> ump;
        int ans = 0;
        for (string w : words) {
            int longest=0;
            for (int i = 0; i < w.length(); i++) {
                string sub = w;
                sub.erase(i, 1);
                longest = max(longest,ump[sub]+1);
            }
            ump[w] = longest;
            ans = max(ans,longest);
        }
        return ans;
    }
}; 