class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        int n=pref.size();
        if(n==1) return pref;
        int a=pref[0],b;
        for(int i=1;i<n;i++){
            b=pref[i];
            pref[i]=pref[i]^a;
            a=b;
        }
        return pref;
    }
};