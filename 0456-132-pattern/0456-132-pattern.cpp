class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int n=nums.size();
        
//         for(int i=0;i<n;i++){
//             for(int j=i+1;j<n;j++){
//                 for(int k=i+2;k<n;k++){
//                     if(nums[i]<nums[k]&&nums[k]<nums[j])
//                         return true;
//                 }
//             }
//         }
        // return false;
        
        stack<int>s;
        int p=INT_MIN;
        
        for(int i=n-1;i>=0;i--){
            if(nums[i]<p) return true;
            
            while(!s.empty()&&s.top()<nums[i]){
                p=s.top();
                s.pop();
            }
            s.push(nums[i]);
        }
        return false;
    }
};