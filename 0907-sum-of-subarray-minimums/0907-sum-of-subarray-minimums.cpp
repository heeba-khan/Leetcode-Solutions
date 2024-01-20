class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n=arr.size();
       int mod=1e9+7;
        vector<int>left(n),right(n);
        
         stack<int>lst;
        lst.push(0);
        left[0]=1;
        
        for(int i=1;i<n;i++){
            while(!lst.empty()&&arr[lst.top()]>arr[i])
                lst.pop();
            
            if(lst.empty())
                left[i]=i+1;
            
            else
                left[i]=i-lst.top();
            
            lst.push(i);
        }
        
          stack<int>rst;
        rst.push(n-1);
        right[n-1]=1;
        
        for(int i=n-2;i>=0;i--){
            while(!rst.empty()&&arr[rst.top()]>=arr[i])
                rst.pop();
            
            if(rst.empty())
                right[i]=n-i;
            
            else
                right[i]=rst.top()-i;
            
            rst.push(i);
        }
     long long int res=0;
        for(int i=0;i<n;i++){
            long long prod=(left[i]*right[i])%mod;
            long long net=arr[i]*prod;
            res=(res+net)%mod;
        }
        return res;
    }
};



















