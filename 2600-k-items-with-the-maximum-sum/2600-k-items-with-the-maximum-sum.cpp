class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
        
        int sum=0;
        
      priority_queue<int>pq;
        while(numOnes--) pq.push(1);
        while(numZeros--) pq.push(0);
        while(numNegOnes--) pq.push(-1);
        
        while(k--){
         sum+=pq.top();
            pq.pop();
        }
        return sum;
    }
};