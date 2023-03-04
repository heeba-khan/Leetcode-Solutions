class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        int n=nums.size();
        int left=-1,minn=-1,maxx=-1;
        long long cnt=0;
        for(int i=0;i<n;i++){
            if(nums[i]>=minK&&nums[i]<=maxK){
                minn=(nums[i]==minK)?i:minn;
                maxx=(nums[i]==maxK)?i:maxx;
                cnt+= max(0, min(minn, maxx) - left);
            }
            else
            {
                left=i;
                minn=-1,maxx=-1;
            }
        }
        return cnt;
    }
};