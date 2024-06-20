class Solution {
    
    bool fun(const vector<int>&arr,int dist,int balls){
        int cntballs=1;
        int lastplaced=arr[0];
        for(int i=1;i<arr.size();i++){
            if(arr[i]-lastplaced>=dist){
                lastplaced=arr[i];
                cntballs++;
            }
            
            if(cntballs>=balls)
                
                return true;
        }
        return false;
    }
public:
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int n=position.size();
        int ans=1;
        int low=1,high=(position[n-1]-position[0])/(m-1);
        while(low<=high){
            int mid=low+(high-low)/2;
            
            if(fun(position,mid,m)){
                ans=mid;
                low=mid+1;
            }
            else
                high=mid-1;
        }
        return ans;
    }
};