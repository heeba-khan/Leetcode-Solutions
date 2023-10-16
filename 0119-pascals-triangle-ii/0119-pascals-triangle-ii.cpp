class Solution {
public:
    vector<int> getRow(int rowIndex) {
       vector<int>ans(1,1);
        long long prev=1;
        for(int k=1;k<=rowIndex;k++){
            long long next=prev*(rowIndex-k+1)/k;
            ans.push_back(next);
            prev=next;
        }
        return ans;
    }
};