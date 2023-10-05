class Solution {
public:
    int countCollisions(string directions) {
        int n=directions.size();
        int i=0,j=n-1;
        while(i<n&&directions[i]=='L') i++;
        if(i==n) return 0;
        
        while(j>i&&directions[j]=='R') j--;
        if(i==j) return 0;
        
        n=j-i+1;
        
        int rl=0,sum=0;
        
        for(int k=i;k<=j;k++){
            if(directions[k]=='S') sum++;
        }
        return n-sum;
    }
};