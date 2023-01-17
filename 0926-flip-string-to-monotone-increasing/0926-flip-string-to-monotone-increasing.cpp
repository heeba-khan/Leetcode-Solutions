class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int c1=0,c2=0;
        for(auto i:s){
            if(i=='1')
            c1++;
            else{
                c2++;
                c2=min(c1,c2);
            }
        }
        return c2;
    }
};