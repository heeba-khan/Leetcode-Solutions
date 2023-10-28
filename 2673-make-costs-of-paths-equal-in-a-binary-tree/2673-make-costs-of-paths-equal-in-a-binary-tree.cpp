class Solution {
public:
    int minIncrements(int n, vector<int>& cost) {
        int cnt=0;
        for(int i=n-1;i;i-=2){
            cnt+=abs(cost[i]-cost[i-1]);
            cost[(i-1)>>1]+=max(cost[i],cost[i-1]);
        }
        return cnt;
    }
};

