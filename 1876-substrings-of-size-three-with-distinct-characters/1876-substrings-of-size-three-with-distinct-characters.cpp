class Solution {
public:
    int countGoodSubstrings(string s) {
//         int cnt=0;
//         int n=s.size();
//         int ans=0;
        
//         int i=0,j=1;
//         while(i<n-1&&j<n){
//             if(s[i]==s[j]){
//                 i=i-1;
//                 j=j-1;
//             }
//             else{
//                 cnt++;
//                 if(cnt==3)
//                 {ans++;
//                 cnt=0;
//                 }
//             }
//         }
//         return ans;
        
        int ans=0;
        int n=s.size();
        
        for(int i=0;i<=n-3;i++){
            if(s[i]!=s[i+1]&&s[i]!=s[i+2]&&s[i+1]!=s[i+2])
                ans++;
        }
        return ans;
    }
};