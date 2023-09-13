class Solution {
public:
    int nthSuperUglyNumber(int n, vector<int>& primes) {
        long long ugly[n+1];
        ugly[0]=0;
        ugly[1]=1;
        
        vector<pair<int,int>>pi;
        
        for(int i=0;i<primes.size();i++){
            pi.push_back(make_pair(primes[i],1));
        }
        
        for(int i=2;i<=n;i++){
            long long nextugly=LLONG_MAX;
            for(int j=0;j<primes.size();j++){
                nextugly=min(nextugly,ugly[pi[j].second]*(long long)pi[j].first);
                
            }
            ugly[i]=nextugly;
            
             for (int j = 0; j < primes.size(); j++) {
                if (nextugly == ugly[pi[j].second] * (long long)pi[j].first) {
                    pi[j].second++;
                }
        }
        }
        return ugly[n];
    }
};
    
  