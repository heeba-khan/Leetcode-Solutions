class Solution {
public:
    bool winnerOfGame(string colors) {
        int n=colors.size();
        
       int alice=0,bob=0,cnt=0;
        
        for(int i=1;i<n;i++){
            if(colors[i]==colors[i-1]){
                cnt++;
            }else{
                if(colors[i-1]=='A')
                    alice+=max(0,cnt-1);
                else
                    bob+=max(0,cnt-1);
                cnt=0;
            }
            
        }
        
        if(colors.back()=='A')
            alice+=max(0,cnt-1);
        else
            bob+=max(0,cnt-1);
        
        return alice>bob;
    }
};