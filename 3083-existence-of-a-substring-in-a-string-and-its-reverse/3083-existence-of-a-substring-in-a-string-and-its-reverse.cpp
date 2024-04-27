class Solution {
public:
    bool isSubstringPresent(string s) {
       unordered_set<string>v;
        
        int n=s.size();
        
        for(int i=0;i<n-1;i++){
            v.insert(s.substr(i,2));
        }
        reverse(s.begin(),s.end());
        for(int i=0;i<n-1;i++){
            string x=s.substr(i,2);
            if(v.count(x))
                return true;
        }
        return false;
    }
};