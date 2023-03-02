class Solution {
public:
    int compress(vector<char>& chars) {
        int count=1;
        int n=chars.size();
        if(n==1) return 1;
        int i=0,j=0;
        while(i<n)
        {
            int count=1;
            while(i<n-1&&chars[i]==chars[i+1])
            {
                count++;
                i++;
            }
            chars[j++]=chars[i++];
            if(count>1){
                string st=to_string(count);
                for(char s:st){
                    chars[j++]=s;
                }
            }
        }
        return j;
    }
};