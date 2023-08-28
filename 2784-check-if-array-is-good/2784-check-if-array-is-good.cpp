class Solution {
public:
    bool isGood(vector<int>& nums) {
        int a=*max_element(nums.begin(),nums.end());
        
        int n=nums.size();
        
        set<int>s(nums.begin(),nums.end());
        
        int flag=1;
        int k=1;
        
        for(auto x:s){
            if(x==k) k++;
            else
            {
            flag=0;    
            break;
            }
        }
        int cnt=count(nums.begin(),nums.end(),a);
        if(cnt==2&&n==a+1&&flag) return true;
        return false;
    }
};