class Solution {
public:
    int maxProduct(vector<int>& nums) {
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            v.push_back(nums[i]-1);
        }
        
        // int a=*max_element(v.begin(),v.end());
        // int b=*min_element(v.begin(),v.end());
        
        sort(v.begin(),v.end());
        // int prod=1;
        int n=v.size();
        
        int prod=v[n-1]*v[n-2];
        
        return prod;
    }
};