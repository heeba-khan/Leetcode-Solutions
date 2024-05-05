class Solution {
public:
    int subarrayBitwiseORs(vector<int>& arr) {
        int n=arr.size();
        if(n==0) return 0;
        
        set<int>ans;
        set<int>prev;
        
        ans.insert(arr[0]);
        prev.insert(arr[0]);
        
        for(int i=1;i<n;i++){
            set<int>curr;
            ans.insert(arr[i]);
            prev.insert(arr[i]);
            
            for(auto a:prev){
                curr.insert(a|arr[i]);
                ans.insert(a|arr[i]);
            }
            prev=curr;
        }
        return ans.size();
    }
};