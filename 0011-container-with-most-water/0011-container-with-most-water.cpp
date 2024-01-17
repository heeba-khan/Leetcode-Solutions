class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int left=0;
        int right=n-1;
        int maxArea=INT_MIN;
        
       
            while(left<right){
                int curr=min(height[left],height[right]);
                int area=curr*(right-left);
                maxArea=max(area,maxArea);
                
                if(height[left]<height[right]){
                    left++;
                }
                else
                    right--;
            }
        
        return maxArea;
    }
};