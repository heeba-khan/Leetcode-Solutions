class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
     vector<int>v;
        int p=0;
        map<int,int> mp;
        for(auto x: nums){ mp[x]++; }
        // while(p!=0)
        
             for(auto i=mp.begin();i!=mp.end();i++){
            if(i->second==1){
                v.push_back(i->first);
                p++;
                if(p==2){
                     return v;
                }
               
            }
        }
        
        return {};
    }
};