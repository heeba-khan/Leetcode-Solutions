class Solution {
public:
    int countBinarySubstrings(string s) {
       int prevCnt=0;
        int currCnt=1;
        int cnt=0;
        
        for(int i=1;i<s.length();i++){
            if(s[i]==s[i-1]){
                currCnt++;
            }
            else{
                prevCnt=currCnt;
                currCnt=1;
            }
            if(prevCnt>=currCnt){
                cnt++;
            }
        }
        return cnt;
    }
};