class Solution {
    const int MOD=1e9+7;
public:
    int countOrders(int n) {
        long long cnt=1;
        for(int i=2;i<=n;i++){
            cnt=(cnt*(2*i-1)*i)%MOD;
        }
        return int(cnt);
    }
};