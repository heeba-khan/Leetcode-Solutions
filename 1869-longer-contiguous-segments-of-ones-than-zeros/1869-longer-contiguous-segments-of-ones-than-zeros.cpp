class Solution {
public:
    bool checkZeroOnes(string s) {
       int one=0;
        int one_max=0;
        int zero=0;
        int zero_max=0;
        
        for(int i=0;i<s.length();i++){
            if(s[i]=='1'){
                one++;
                one_max=max(one_max,one);
                zero=0;
            }
            if(s[i]=='0'){
                zero++;
                zero_max=max(zero_max,zero);
                one=0;
            }
        }
        return one_max>zero_max;
    }
};

