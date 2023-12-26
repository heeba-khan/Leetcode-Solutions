class Solution {
    
public:
    long long f(long long n){
        if(n<=0) return 1e9;
        
        if(n==1) return 0;
     if(n&1) return 1+min(f(n-1),f(n+1));
        else
            return 1+f(n/2);
                         
    }
    int integerReplacement(int n) {
        return f(n);
    }
};