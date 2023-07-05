class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double ans=0;
        int n=nums.size();
        double currsum=0,avg=0,maxavg=INT_MIN;
        
        for(int i=0;i<n;i++){
            currsum+=nums[i];
            if(i>=(k-1)){
                avg=currsum/k;
                maxavg=max(avg,maxavg);
                currsum-=nums[i-(k-1)];
            }
        }
        return maxavg;
    }
};