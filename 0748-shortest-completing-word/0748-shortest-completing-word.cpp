class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
            vector<int>v(26,0);
            
            for(auto ch:licensePlate){
                if(isalpha(ch)){
                    ++v[tolower(ch)-'a'];
                }
            }   
        int mini=INT_MAX;
        string res;
        
        for(auto& str:words){
            vector<int>v2(26,0);
            for(auto ch:str){
                ++v2[ch-'a'];
            }
            
            bool complete=true;
            for(int i=0;i<26;i++){
                if(v2[i]<v[i]){
                    complete=false;
                    break;
                }
            }
            if(complete&&str.size()<mini){
                res=str;
                mini=str.length();
            }
            
        }
    return res;
    }
};