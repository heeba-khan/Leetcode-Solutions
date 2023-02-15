class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int n=num.size()-1;
        while(k>0&&n>=0){
            num[n]+=k;
            k=num[n]/10;
            num[n]%=10;
            n--;
        }
        while(k>0){
            num.insert(num.begin(),k%10);
            k=k/10;
        }
        return num;
    }
};

 