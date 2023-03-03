class Solution {
public:
    int strStr(string haystack, string needle) {
        int h=haystack.size();
        int n=needle.size();

        if(h<n){return -1;}
        int j=0;
        for(int i=0;i<h-n+1;i++){
            if(haystack[i]==needle[j]){
                int p=i;
                while(j<n&&haystack[p]==needle[j]){
                    p++;
                    j++;
                }
                if(j==n){ return i;}
            }
            j=0;
        }
        return -1;        
    }
};