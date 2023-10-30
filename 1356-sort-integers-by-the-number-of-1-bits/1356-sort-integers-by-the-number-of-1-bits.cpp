class Solution {
public:
    static bool compare(int a,int b){
        int builtA=__builtin_popcount(a);
        int builtB=__builtin_popcount(b);
        
        if(builtA==builtB) return a<b;
        
        return builtA<builtB;
    }
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(),arr.end(),compare);
        return arr;
    }
};

