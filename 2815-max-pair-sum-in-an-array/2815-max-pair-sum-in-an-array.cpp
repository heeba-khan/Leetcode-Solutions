class Solution {
public:
    int fun(int num){
        int mx=0;
        while(num!=0){
            mx=max(mx,num%10);
            num=num/10;
        }
        return mx;
    }
    
    int maxSum(vector<int>& nums) {
        int n=nums.size();
        int ans=-1;
        int sum=0;
        
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int a=nums[i],b=nums[j];
                if(fun(a)==fun(b))
                    ans=max(ans,a+b);
            }
        }
         return ans;
    }
};