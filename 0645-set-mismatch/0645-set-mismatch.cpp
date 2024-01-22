class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int dup=-1,mis=-1;
        
        int n=nums.size();
        for(int i=1;i<=n;i++){
            int cnt=0;
            for(int j=0;j<n;j++){
                if(nums[j]==i){
                    cnt++;
                }
            }
                if(cnt==2)
                    dup=i;
                else if(cnt==0)
                    mis=i;
            
        }
        return {dup,mis};
    }
};