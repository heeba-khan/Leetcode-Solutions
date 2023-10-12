class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
       int c1=0,c2=0;
        
        for(auto it:moves){
            if(it=='L'){c1--;c2--;}
            else if(it=='_'){c1--;c2++;}
            else if(it=='R'){c1++;c2++;}
        }
        return max(abs(c1),abs(c2));
            
    }
};