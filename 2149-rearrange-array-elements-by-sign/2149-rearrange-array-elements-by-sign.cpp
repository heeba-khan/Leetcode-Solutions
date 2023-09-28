class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
       vector<int>neg;
        vector<int>pos;
        vector<int>v;
        
        for(int i=0;i<n;i++){
            if(nums[i]>0) pos.push_back(nums[i]);
            else
                neg.push_back(nums[i]);
        }
        
        int nIdx=0;
        int pIdx=0;
        
        while(nIdx<neg.size()&&pIdx<pos.size()){
            v.push_back(pos[pIdx++]);
            v.push_back(neg[nIdx++]);
        }
        return v;
    }
};