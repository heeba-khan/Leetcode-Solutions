class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(),satisfaction.end(),greater<int>());
        int n=satisfaction.size();
        int pre=0,ans=0;
        for(int i=0;i<n;i++){
            pre+=satisfaction[i];
            if(pre<0){
                break;
            }
            ans+=pre;
        }
        return ans;
    }
};