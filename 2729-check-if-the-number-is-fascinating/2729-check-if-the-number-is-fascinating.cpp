class Solution {
public:
    bool isFascinating(int n) {
        string a=to_string(n);
        string b=to_string(2*n);
        string c=to_string(3*n);
        
        string ans=a+b+c;
        sort(ans.begin(),ans.end());
       
        for(int i=0;i<ans.length()-1;i++){
            if(ans[i]=='0'||ans[i]==ans[i+1])
                return false;
        }
        return true;
    }
};