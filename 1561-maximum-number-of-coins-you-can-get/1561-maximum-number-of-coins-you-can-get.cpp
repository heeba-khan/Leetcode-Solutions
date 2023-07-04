class Solution {
public:
    int maxCoins(vector<int>& piles) {
        // int alice=0;
        // int me=0;
        int ans=0;
        sort(piles.begin(),piles.end(),greater<int>());
        int n=piles.size();
        for(int i=0;i<n;i+=2){
            ans+=piles[i+1];
            n=n-1;
        }
        return ans;
    }
};