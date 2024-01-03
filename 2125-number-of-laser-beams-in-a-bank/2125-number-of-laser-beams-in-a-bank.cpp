class Solution {
    int f(const string &s){
        int cnt=0;
        for(char c:s)cnt+=c-'0';
        
        return cnt;
    }
public:
    int numberOfBeams(vector<string>& bank) {
     int prev=0;
        int curr=0;
        int total=0;
        
        for(const string& row:bank){
            curr=f(row);
            if(curr==0) continue;
            
            total+=curr*prev;
            prev=curr;
        }
        return total;
    }
};