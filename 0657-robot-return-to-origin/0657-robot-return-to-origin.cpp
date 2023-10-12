class Solution {
public:
    bool judgeCircle(string moves) {
        int c1=0,c2=0;
        
        for(auto it:moves){
            if(it=='U'){c1++;}
            else if(it=='D'){c1--;}
            else if(it=='L') {c2++;}
            else if(it=='R'){c2--;}
        }
        if(c1==0&&c2==0) return true;
        return false;
    }
};