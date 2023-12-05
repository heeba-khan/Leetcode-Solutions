class Solution {
public:
    int numberOfMatches(int n) {
  int sum=0;
        int rev=0;
        
        while(n>1){
            sum+=n/2;
            rev=n/2;
            n=n-rev;
        }
        return sum;
    }
};