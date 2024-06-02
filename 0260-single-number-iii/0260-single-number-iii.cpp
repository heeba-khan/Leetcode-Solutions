class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
       int p=0;
        for(int num:nums)
        p^=num;
        
        unsigned int lowestbit=p&-(unsigned int)p;
        
        vector<int>v(2,0);
        
        for(int num:nums){
            if((lowestbit & num)==0)
                v[0]^=num;
            
            else 
                v[1]^=num;
        }
        return v;
    }
};

