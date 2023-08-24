class Solution {
public:
    string reorderSpaces(string text) {
        int space = 0;
        int word = 0;

        int i = 0;
        bool flag = false;
        vector< string> v;
        while(i<text.size()){
            if(text[i]!=' ' and !flag){
                string temp = "";
                while(text[i]!=' ' and i<text.size()){
                    temp+=text[i];
                    i++;
                }
                v.push_back(temp);
                word++;
                flag = true;
            }
            else if(text[i] == ' '){
                space++;
                flag = false;
                i++;
            }
        }
        int tS = 0;
        int rS = 0;
        if(word == 1){
            string t = v[0];
            cout<<space<<endl;
            for(int i = 0;i<space;i++){
                t+=" ";
            }
            return t;
        }else{
            tS = (space/(word-1));
            rS = space%(word-1);
        }
        

        string ans = "";
        for(int i = 0; i<v.size(); i++){
            ans +=v[i];
            if(i == v.size()-1) break;
            for(int j = 0; j<tS; j++){
                ans+=" ";
            }
        }
        for(int i = 0; i<rS; i++){
            ans+=" ";
        }
        cout<<space<<" "<<word;
        return ans;
    }
};