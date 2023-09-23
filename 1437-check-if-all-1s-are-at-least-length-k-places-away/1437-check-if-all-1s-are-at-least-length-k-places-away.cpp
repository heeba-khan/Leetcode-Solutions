class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(!nums[i])
                continue;
        
        int j=i+1;
        while(j<n&&nums[j]!=1) ++j;
            if(j<n&&j-i-1<k)return false;
            i=j-1;
        }
        return true;
    }
};

