class Solution {
public:
    bool fun(vector<int>&nums,int m,int x){
        int n=nums.size();
        set<int>s;
        
        for(int i=n-x-1;i>=0;i--){
            s.insert(nums[i+x]);
            auto it=s.lower_bound(nums[i]);
            
            if(it==s.begin()){
                if(abs(*it-nums[i])<=m) return true;
            }
            else{
                if(it!=s.end()&&abs(*it-nums[i])<=m) return true;
                it--;
                
                if(abs(*it-nums[i])<=m) return true;
            }
        }
        return false;
    }
    
    int minAbsoluteDifference(vector<int>& nums, int x) {
        int n=nums.size();
        int maxi=*max_element(nums.begin(),nums.end());
        int mini=*min_element(nums.begin(),nums.end());
        int l=0,r=maxi-mini;int ans=-1;
        
        while(l<=r){
            int mid=l+(r-l)/2;
            if(fun(nums,mid,x)){
                ans=mid;
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        return ans;
    }
};