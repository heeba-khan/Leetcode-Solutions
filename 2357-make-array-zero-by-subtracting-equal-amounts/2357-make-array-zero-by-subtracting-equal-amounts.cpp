class Solution {
public:
   
    
    int minimumOperations(vector<int>& nums) {
       int n=nums.size();
        int mini=INT_MAX;
        int cnt=0;
        
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                continue;
            }
            else{
                for(int j=i+1;j<n;j++){
                    mini=min(nums[i],nums[j]);
                }
                for(int j=i;j<n;j++){
                    nums[j]-=mini;
                }
                cnt++;
            }
        }
        return cnt;
    }
};