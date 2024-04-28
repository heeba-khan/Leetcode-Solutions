class Solution {
public:
    bool fun(string &a,string &b){
        int n=a.length();
        int m=b.length();
        if(m<n)
            return false;
        string x=b.substr(0,n);
        string y=b.substr(m-n);
        return a==x&&a==y;
    }
    int countPrefixSuffixPairs(vector<string>& words) {
        int n=words.size();
        int cnt=0;
        
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(fun(words[i],words[j]))
                    cnt++;
            }
        }
        return cnt;
        
    }
};