class Solution {
public:
    string addBinary(string a, string b) {
        int m=a.length();
        int n=b.length();
        int carry=0;
        int i=0;

        string ans="";

        while(i<m || i<n || carry!=0){
            int x=0;
            if(i<m && a[m-i-1]=='1'){
            x=1;
            }
            int y=0;
            if(i<n && b[n-i-1]=='1'){
                y=1;
            }
            ans=to_string((x+y+carry)%2)+ans;
            carry=(x+y+carry)/2;
            i+=1;
        }
        return ans;
    }
};