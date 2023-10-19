class Solution {
public:
    int minOperations(vector<string>& logs) {
        int cnt=0;
        int n=logs.size();
        
        for(int i=0;i<n;i++){
            // if(logs[i]=="x/") cnt++;
            if(logs[i]=="../"&&cnt>0) cnt--;
            else if(logs[i]!="./"&&logs[i]!="../") cnt++;
        }
        return cnt;
    }
};