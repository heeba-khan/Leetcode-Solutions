class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
       int it=0;
       int count=0;
       for(int i=1;i<=arr.back();i++){
           if(arr[it]==i)
           {
               it++;
           }
           else {
               count++;
           }
       if(count==k) return i;
       }
       return arr.back()+k-count;
    }
};