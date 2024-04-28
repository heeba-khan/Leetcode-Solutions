class Solution {
public:
    int countKeyChanges(string s) {
        // int n=s.size();
        // int cnt=0;
        // for(int i=0;i<n-1;i++){
        //     if(s[i]!=s[i+1]+32)
        //         cnt++;
        // }
        // return cnt;
        
        char prev=s[0];
        int cnt=0;
        for(auto x:s){
            if(x!=prev&&x+32!=prev&&x-32!=prev)
            {
                prev=x;
                cnt++;
            }
        }
        return cnt;
    }
};