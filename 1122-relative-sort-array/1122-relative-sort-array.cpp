class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int>v;
//         unordered_map<int,int>mp;
        
//         for(auto num:arr1)
//             mp[num]++;
        
//         for(auto x:arr2){
//             if(mp.count(x)){
//                 for(int i=0;i<mp[x];i++){
//                     v.push_back(x);
//                 }
//                 mp.erase(x);
//             }
//         }
//         return v;
        
        for(int i=0;i<arr2.size();i++){
            for(int j=0;j<arr1.size();j++){
                if(arr1[j]==arr2[i])
                   { v.push_back(arr1[j]);
                
                arr1[j]=-1;}
            }
        }
        
        sort(arr1.begin(),arr1.end());
        
        
        for(int i=0;i<arr1.size();i++){
            if(arr1[i]!=-1)
                v.push_back(arr1[i]);
        }
        return v;
    }
};