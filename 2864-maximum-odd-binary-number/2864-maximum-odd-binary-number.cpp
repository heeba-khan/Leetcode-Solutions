class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n=s.size();
        int ones=0;
        
        for(int i=0;i<n;i++){
            ones+=s[i]-'0';
        }
        
        int zeroes=n-ones;
        string res="";
        
        for(int i=0;i<ones-1;i++){
            res.push_back('1');    
        }
        
        
        for(int i=0;i<zeroes;i++){
            res.push_back('0');    
        }
        
        res.push_back('1');
        
        return res;
        
    }
};