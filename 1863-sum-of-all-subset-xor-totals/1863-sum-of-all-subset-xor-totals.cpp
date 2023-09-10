class Solution {
public:
    vector<int>ans;
    vector<int>v;
    
    void fun(vector<int>&nums, int index){
        int n=nums.size();
        if(index==n){
            int p=0;
            for(auto &i:v){
                p=p^i;
            }
            ans.push_back(p);
            return;
        }
        v.push_back(nums[index]);
        fun(nums,index+1);
        v.pop_back();
        fun(nums,index+1);
        
        
    }
    
    int subsetXORSum(vector<int>& nums) {
      int n=nums.size();
        fun(nums,0);
        return accumulate(ans.begin(),ans.end(),0);
    }
};