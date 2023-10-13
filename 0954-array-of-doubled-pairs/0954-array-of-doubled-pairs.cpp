class Solution {
public:
    bool canReorderDoubled(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        unordered_map<int,int>mp;
        
        for(int x:arr) mp[x]++;
        
        for(int x:arr){
            if(mp[x]==0) continue;
            if(x<0&&x%2!=0) return false;
            int y=x>0?x*2:x/2;
            
            if(mp[y]==0) return false;
            mp[x]--;
            mp[y]--;
        }
        return true;
    }
};