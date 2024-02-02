class Solution {
public:
    long long distributeCandies(int n, int limit) {
       long long ans=0;
        
        int firstmin=max(0,n-2*limit);
        int firstmax=min(n,limit);
        for(int i=firstmin;i<=firstmax;i++){
            int secmin=max(0,n-i-limit);
            int secmax=min(n-i,limit);
            
            ans+=secmax-secmin+1;
        }
        return ans;
    }
};