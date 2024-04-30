class Solution {
public:
    int findMinimumOperations(string s1, string s2, string s3) {
        int cnt=0;
        
        int s=min(s1.size(),s2.size());
        s=min(s2.size(),s3.size());
        
        for(int i=0;i<s;i++){
            if(s1[i]!=s2[i]||s2[i]!=s3[i]||s1[i]!=s3[i]){
                break;
            }
            cnt++;
            
           
        }
         if(cnt!=0){
                return s1.size()+s2.size()+s3.size()-3*cnt;
            }
        else
        return -1;
    }
};