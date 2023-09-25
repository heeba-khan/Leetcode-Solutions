class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        int ans=INT_MAX;
        vector<int>v;
        
        int n=timePoints.size();
        for(int i=0;i<n;i++){
            string s=timePoints[i];
            int hour=stoi(s.substr(0,2));
            int minute=stoi(s.substr(3,2));
            int total=hour*60+minute;
            v.push_back(total);
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size()-1;i++){
            int diff=v[i+1]-v[i];
            ans=min(diff,ans);
        }
        int last=(v[0]+1440)-v[n-1];
        ans=min(ans,last);
        return ans;
    }
};