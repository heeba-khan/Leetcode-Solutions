class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>v;
        int mx=*max_element(candies.begin(),candies.end());
        for(int i=0;i<candies.size();i++){
            if(candies[i]+extraCandies>=mx)
            {
                v.push_back(1);
            }else{
            v.push_back(0);
            }
        }
        return v;
    }
};