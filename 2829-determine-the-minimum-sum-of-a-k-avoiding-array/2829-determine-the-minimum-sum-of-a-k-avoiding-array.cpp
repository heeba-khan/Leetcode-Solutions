class Solution {
public:
    int minimumSum(int n, int k) {
        int num=1;
        unordered_map<int,int>mp;
        vector<int>v;
        
        while(v.size()<n){
            if(mp.find(num)==mp.end()){
                v.push_back(num);
                mp[k-num]++;
            }
            num++;
        }
        return accumulate(v.begin(),v.end(),0);
    }
};