// class Solution {
// public:
//     int minMaxDifference(int num) {
//        string n=to_string(num);
//         string s=n;
        
//         for(int i=0;i<s.size();i++){
//             if(s[i]!='9');
//             {
//             char x=s[i];
//             for(int j=i;j<s.size();j++){
//                 if(s[j]==x)
//                     s[j]='9';
//             }
//                 break;
//             }
//         }
//         int h=stoi(s);
//         s=n;
        
         
//         for(int i=0;i<s.size();i++){
//             if(s[i]!='0');
//             {
//             char x=s[i];
//             for(int j=i;j<s.size();j++){
//                 if(s[j]==x)
//                     s[j]='0';
//             }
//                 break;
//             }
//         }
//         int l=stoi(s);
//         return h-l;
//     }
// };

class Solution {
public:
    int minMaxDifference(int num) 
    {
        string n = to_string(num);
        string s = n;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!='9')
            {
                char x = s[i];
                for(int j=i;j<s.size();j++)
                {
                    if(s[j]==x)
                    s[j] = '9';
                }
                break;
            }
        }
        int h = stoi(s);
        s = n;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!='0')
            {
                char x = s[i];
                for(int j=i;j<s.size();j++)
                {
                    if(s[j]==x)
                    s[j] = '0';
                }
                break;
            }
        }
        int l = stoi(s);
        return h-l;
    }
};