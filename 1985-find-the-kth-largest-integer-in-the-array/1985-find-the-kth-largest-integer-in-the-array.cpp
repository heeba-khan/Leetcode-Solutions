class Solution {
public:
     bool static comp(string &a, string &b){
           return (a.size()!=b.size())?(a.size()>b.size()):(a>b);
       }
    string kthLargestNumber(vector<string>& nums, int k) {
        sort(nums.begin(),nums.end(),comp);
        return nums[k-1];
    }
};