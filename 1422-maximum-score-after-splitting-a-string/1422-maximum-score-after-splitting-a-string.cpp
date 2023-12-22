class Solution {
public:
    int maxScore(string s) {
        int left=-1;int ones=0,zero=0;
        int n=s.size();
        
        for(int i=0;i<n-1;i++){
            if(s[i]=='0'){
                zero++;
            }
            else{
                ones++;
            }
            left=max(left,zero-ones);
        }
        ones+=s.back()=='1';
        
        return left+ones;
    }
};