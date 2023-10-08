class Solution {
public:
    bool fun(int &n){
        vector<int>v;
        while(n){
            v.push_back(n%10);
            n=n/10;
        }
        if(v.size()%2==0) return true;
        return false;
    }
    int findNumbers(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        for(int i=0;i<n;i++){
            if(fun(nums[i]))
                cnt++;
        }
        return cnt;
    }
};