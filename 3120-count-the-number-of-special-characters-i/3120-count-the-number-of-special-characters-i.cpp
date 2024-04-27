class Solution {
public:
    int numberOfSpecialChars(string word) {
       set<char>seen;
        int cnt=0;
        for(char ch:word){
            if(islower(ch)){
                char chup=ch-32;
                if(word.find(chup)!=string::npos&&!seen.count(chup))
                    cnt++;
                seen.insert(chup);
            }
            else if(isupper(ch)){
                char chlo=ch+32;
                if(word.find(chlo)!=string::npos&&!seen.count(chlo))
                    cnt++;
                seen.insert(chlo);
            }
        }
        return cnt/2;
    }
};