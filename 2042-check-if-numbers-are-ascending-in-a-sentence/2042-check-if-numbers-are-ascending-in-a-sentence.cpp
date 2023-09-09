class Solution {
public:
    bool areNumbersAscending(string s) {
        vector<int>v;
        for(int i=0;i<s.size();i++){
            if(isdigit(s[i]))
            {
                string temp;
                while(i<s.size()&&isdigit(s[i])){
                    temp+=s[i++];
                }
                    v.push_back(stoi(temp));
                
            }
        }
        
        for(int i=0;i<v.size()-1;i++){
            if(v[i]>=v[i+1])
                return false;
        }
        return true;
    }
};

