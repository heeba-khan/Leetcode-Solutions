class Solution {
public:
    int cnt=0;
    
    void fun(vector<int>& amount){
        if(amount[0]+amount[1]+amount[2]==0) return;
        
        sort(amount.begin(),amount.end());
        
        if(amount[1]&&amount[2]){
            amount[1]--;
            amount[2]--;
            cnt++;
        }
        else{
            cnt+=amount[2];
            amount[2]=0;
        }
        fun(amount);
    }
    int fillCups(vector<int>& amount) {
       fun(amount);
        return cnt;
        
    }
};