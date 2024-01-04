class Solution {
public:
    int getMaxLen(vector<int>& nums) {
        int pos=0,neg=0,ans=0;
        for(int i:nums){
            if(i==0) pos=0,neg=0;
            else{
                if(i<0) swap(pos,neg);
                if(pos>0||i>0) ++pos;
                if(neg>0||i<0) ++neg;
            }
            ans=max(ans,pos);
        }
        return ans;
    }
};