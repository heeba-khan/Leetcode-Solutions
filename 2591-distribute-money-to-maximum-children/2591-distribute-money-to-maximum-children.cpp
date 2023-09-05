class Solution {
public:
    int distMoney(int money, int children) {
        if(money<children) return -1;
        
        int ans=0;
        
        for(int i=1;i<=children;i++){
            int rem=money-i*8;
            
            if(rem<children-i) continue;
            if(rem>0&&(children-i)==0) continue;
            if(rem==4&&(children-i)==1) continue;
            if(rem==0&&(children-i)>0) continue;
            else ans=i;
            
        }
        return ans;
    }
};