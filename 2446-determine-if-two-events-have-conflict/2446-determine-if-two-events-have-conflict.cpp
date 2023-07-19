class Solution {
public:
    bool haveConflict(vector<string>& event1, vector<string>& event2) {
        string a1=event1[0];
        string b1=event1[1];
        
        string a2=event2[0];
        string b2=event2[1];
        
        if((b1>=a2&&b1<=b2)||(b2>=a1&&b2<=b1)){
            return true;
        }
        return false;
    }
};