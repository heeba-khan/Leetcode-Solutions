class Solution {
public:
    int alternatingSubarray(vector<int>& nums) {
        int n=nums.size();
        // int ans=-1;
        int maxi=-1;
        
        for(int i=0;i<n;i++){
            int len=1;
            bool flag=true;
            
            for(int j=i+1;j<n;j++){
                if(nums[j]-nums[j-1]==1&&flag==true){
                    len++;
                    maxi=max(maxi,len);
                    flag=false;
                }
                else if(nums[j]-nums[j-1]==-1&&flag==false){
                    len++;
                    maxi=max(maxi,len);
                    flag=true;
                }
                
                else{
                    break;
                }
            }
        }
        return maxi;
    }
};
