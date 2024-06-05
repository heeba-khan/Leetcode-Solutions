class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int>minfreq(26,INT_MAX);
        
        for(auto word:words){
            vector<int>charcnt(26,0);
            for(auto c:word){
                charcnt[c-'a']++;
            }
            for(int i=0;i<26;i++){
                minfreq[i]=min(minfreq[i],charcnt[i]);
            }
        }
        vector<string>res;
        for(int i=0;i<26;i++){
            while(minfreq[i]>0){
                res.push_back(string(1,i+'a'));
                minfreq[i]--;
            }
        }
        return res;
    }
};