class Solution {
public:
    int hammingWeight(uint32_t n) {
        int cnt=0;
        string str=bitset<32>(n).to_string();
        
        for(auto c:str){
            if(c=='1')
                cnt++;
        }
        return cnt;
    }
};