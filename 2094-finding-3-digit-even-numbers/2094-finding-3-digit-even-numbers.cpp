class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        int n=digits.size();
        vector<int>count(10,0);
        
        for(auto &d:digits) count[d]++;
        
        vector<int>res;
        
        for(int num=100;num<999;num+=2){
            vector<int>curr(10,0);
            int temp=num;
            
            while(temp){
                curr[temp%10]++;
                temp=temp/10;
            }
            
            bool flag=true;
            for(int i=0;i<10;i++){
                if(curr[i]>count[i]){
                    flag=false;
                    break;
                }
            }
            if(flag)
                res.push_back(num);
        }
        return res;
    }
};