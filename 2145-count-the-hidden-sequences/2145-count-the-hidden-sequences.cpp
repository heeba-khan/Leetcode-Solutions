class Solution {
public:
    int numberOfArrays(vector<int>& differences, int lower, int upper) {
        long long sum=0,mini=sum,maxi=sum;
        
        for(int i=0;i<differences.size();i++){
            sum+=differences[i];
            mini=min(mini,sum);
            maxi=max(maxi,sum);
        }
        long ub=upper-maxi;
        long lb=lower-mini;
        if((ub-lb+1)>0)
            return ub-lb+1;
        return 0;
    }
};