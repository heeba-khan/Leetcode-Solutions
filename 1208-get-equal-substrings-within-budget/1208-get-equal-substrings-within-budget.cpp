class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int n=s.length();
        int ans=0,sum=0,i=0;
        
        for(int j=0;j<n;j++){
            sum+=abs(s[j]-t[j]);
            if(sum>maxCost){
                sum-=abs(t[i]-s[i]);
                i++;
            }
            ans=max(ans,j-i+1);
        }
        return ans;
    }
};