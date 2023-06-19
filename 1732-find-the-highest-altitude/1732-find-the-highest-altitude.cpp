class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        gain.insert(gain.begin(),0);
        vector<int>v;
        // v.push_back(0);
        int sum=0;
      for(int i=0;i<gain.size();i++){
          v.push_back(sum+gain[i]);
          sum+=gain[i];
      }
        int p=*max_element(v.begin(),v.end());
        return p;
    }
};