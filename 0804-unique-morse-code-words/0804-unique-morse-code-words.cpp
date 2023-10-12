class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string>morseCode={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        unordered_set<string>unique;
        
        for(auto& word:words){
            string morse="";
            for(char c:word){
                morse+=morseCode[c-'a'];
            }
            unique.insert(morse);
        }
        return unique.size();
    }
};

