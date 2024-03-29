class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int l=0;
        int h=n-1;
        int pos=-1;
        while(l<=h){
            int m=l+(h-l)/2;
        
            if(nums[m]==target){pos=m;break;}
            else if(nums[m]>target){h=m-1;}
            else
            l=m+1;
        }
        return pos;
    }
};