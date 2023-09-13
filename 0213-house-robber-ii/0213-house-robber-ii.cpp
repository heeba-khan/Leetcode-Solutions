class Solution {
public:
    int fun(vector<int>& nums){
        int n=nums.size();
        
        vector<int>v(n);
        
        v[0]=nums[0];
        v[1]=max(nums[0],nums[1]);
        
        for(int i=2;i<n;i++){
            v[i]=max(v[i-1],v[i-2]+nums[i]);
        }
        return v.back();
    }
    
    int rob(vector<int>& nums) {
       int n=nums.size();
        
        if(n==1) return nums[0];
        
        else if(n==2) return max(nums[0],nums[1]);
        
        vector<int>nums1(nums.begin()+1,nums.end());
        vector<int>nums2(nums.begin(),nums.end()-1);
        
        return max(fun(nums1),fun(nums2));
        
        
    }
};