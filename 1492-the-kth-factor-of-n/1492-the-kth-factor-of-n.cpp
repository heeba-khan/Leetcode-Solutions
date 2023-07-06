class Solution {
public:
    int kthFactor(int n, int k) {
//         vector<int>v;
//         int p;
//         v.push_back(1);
//         v.push_back(n);
       
//         if(n%2==0){
//             v.push_back(2);
//             v.push_back(4);
//         }
        int c=0;
        for(int i=1;i<=n;i++){
            if(n%i==0) c++;
            if(c==k)
                return i;
        }
        return -1;
        
        
        
//          sort(v.begin(),v.end());
        
//         for(int i=0;i<v.size();i++){
//             if(i+1==k)
//                 return v[i];
//         }
//         return -1;
    }
};