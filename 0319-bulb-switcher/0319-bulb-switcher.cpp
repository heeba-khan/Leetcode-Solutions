class Solution {
public:
    int bulbSwitch(int n) {
        // if(n==1) return 1;
        int p;
        for(int i=1;i*i<=n;i++)
        {
            p++;
        }
        return p;
    }
};