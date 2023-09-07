class Solution {
public:
    // long long pow(int m,int n){
    //     // if(n==0) return 1;
    //     return pow(m,n-1)*m;
    // }
    bool isPowerOfThree(int n) {
       if(n==0) return false;
        while(n%3==0){
            n=n/3;
        }
        if(n==1) return true;
        return false;
    }
};