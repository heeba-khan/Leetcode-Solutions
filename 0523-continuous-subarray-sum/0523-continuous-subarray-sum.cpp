class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
//         int len=2;
//         //size>=len&&accumulate(arr.bgein(),arr.end())%k==0
        
//         int i=0;
//         int j=i+1;
        
//         int cnt=0;
//         vector<int>v;
        
//         while(i<n-1&&j<n){
//             v.push_back(nums[i]);
//             v.push_back(nums[j]);
            
//             int sum=accumulate(v.begin(),v.end(),0);
            
//             if(v.size()>=len&&sum%k==0) return true;;
//             v.clear();
//             i++;
//             j++;
            
//         }
//         return false;
        
        unordered_map<int,int>mp;
        mp[0]=-1;
        int sum=0;
        
        for(int i=0;i<n;i++){
            sum+=nums[i];
            sum%=k;
            if(mp.find(sum)!=mp.end()){
                if(i-mp[sum]>1) return true;
            }
           else mp[sum]=i;
        }
        return false;
    }
};

