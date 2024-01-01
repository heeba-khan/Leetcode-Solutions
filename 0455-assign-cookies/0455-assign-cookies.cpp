class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int n=s.size();
        
        int j=n-1;int i=g.size()-1;
        if(n==0) return 0;
        int cnt=0;
        
        while(i>=0&&j>=0){
            if(s[j]>=g[i]){
                cnt++;
                i--;j--;
            }
            else{
                i--;
            }
        }
        return cnt;
    }
};