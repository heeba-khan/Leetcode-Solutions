class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        int n=nums.size();
        long long sum=0;
        
        int i=0,j=n-1;
        
        while(i<j){
            string a=to_string(nums[i])+to_string(nums[j]);
            i++;
            j--;
            sum+=stoll(a);
        }
        if(n%2==1) sum+=nums[i];
        
        return sum;
    }
};