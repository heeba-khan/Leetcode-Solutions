class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people) {
        vector<int>start,ended;
        
        for(auto &t:flowers){
            start.push_back(t[0]);
            ended.push_back(t[1]);
        }
        
        sort(start.begin(),start.end());
        sort(ended.begin(),ended.end());
        
        vector<int>res;
        
        for(int t:people){
            int s=upper_bound(start.begin(),start.end(),t)-start.begin();
            int e=lower_bound(ended.begin(),ended.end(),t)-ended.begin();
            res.push_back(s-e);
        }
        return res;
    }
};