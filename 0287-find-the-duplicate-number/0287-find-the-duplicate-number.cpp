class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int>m;
        int n=nums.size();
        int d=-1;
        
        for(int i=0;i<n;i++)
            m[nums[i]]++;
        
        for(auto x:m){
            if(x.second>1){
                d=x.first;
                break;
            }
        }
        return d;
    }
};