class Solution {
public:
    vector<int> lastVisitedIntegers(vector<string>& words) {
        vector<int>v;
        vector<int>ans;
        int cnt=0;
        int n=words.size();
        
        for(int i=0;i<n;i++){
            if(words[i]=="prev"){
                cnt++;
                if(cnt>v.size()){
                    ans.push_back(-1);
                }
                else{
                    ans.push_back(v[v.size()-cnt]);
                }
            }
            else{
                cnt=0;
                v.push_back(stoi(words[i]));
            }
        }
        return ans;
    
    }
};