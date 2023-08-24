class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string>ans;
        
        for(int i=0;i<words.size();i++){
            for(int j=0;j<words.size();j++){
                if(i!=j&&(words[i].find(words[j])!=string::npos)){
                    ans.push_back(words[j]);
                }
            }
        }
        set<string>s;
        for(int k=0;k<ans.size();k++){
            s.insert(ans[k]);
        }
        ans.clear();
        
        for(auto x:s){
            ans.push_back(x);
        }
        return ans;
    }
};