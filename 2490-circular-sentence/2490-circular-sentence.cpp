class Solution {
public:
    bool isCircularSentence(string sentence) {
        int n=sentence.size();
       int flag=0;
        for(int i=1;i<n-1;i++){
            if(sentence[i]!=' ') continue;
            else if(sentence[i]==' '){
                if(sentence[i-1]==sentence[i+1]){
                    flag=0;
                }
                else{
                    flag=1;
                    break;
                }
            }
        }
        if(sentence[0]==sentence[n-1]&&flag!=1)
            return true;
        return false;
    }
};