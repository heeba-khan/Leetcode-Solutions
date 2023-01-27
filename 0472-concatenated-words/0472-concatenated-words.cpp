class Solution {
public:

    vector<string> findAllConcatenatedWordsInADict(vector<string>& words) {
        unordered_map<string,int>m;

        for(string word:words)
            m[word]++;

            vector<string>res;

            for(string word:words){
                int n=word.size();
                vector<int>dp(n+1,0);
                dp[0]=1;
                for(int i=0;i<n;i++){
                    if(!dp[i])
                        continue;
                    for(int j=i+1;j<=n;j++){
                        if(j-i<n&&m[(word.substr(i,j-i))]>0){
                            dp[j]=1;
                        }
                    }
                    if(dp[n]){
                        res.push_back(word);
                        break;
                    }
                }
            }
        
         return res;   
        }
        
};