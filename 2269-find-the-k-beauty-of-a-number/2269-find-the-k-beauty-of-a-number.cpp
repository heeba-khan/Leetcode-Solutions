// class Solution {
// public:
//     int divisorSubstrings(int num, int k) {
//       int i=0,j=0;
//       string str=to_string(num);
//         int n=str.length();
//         int cnt=0;
        
//         while(j<n){
//             if(j-i+1<k){
//                 j++;
//             }
//             else if(j-i+1==k){
//                 string s=str.substr(i,k);
//                 int p=stoi(s);
//                 if(p!=0&&num%p==0){
//                     cnt++;
//                      i++;
//             j++;
//                 }
//             }
           
//         }
//         return cnt;
//     }
// };
class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string str = to_string(num);
        int i = 0, j = 0, n = str.length();
        int ind = 0;
        
        while(j < n)
        {
            if(j - i + 1 < k)
            {
			// increment j till we get the window size
                ++j;
            }
            else if(j - i + 1 == k)
            {
			// on hiting the window size
			// extract window string and convert to int
			// check if it follows the given condition
                string s = str.substr(i,k);
                int n = stoi(s);
                if(n != 0 && num % n == 0 )
                    ++ind;
                
				// shift the window by ++j;
				// remove previous calculation by ++i
                ++i;
                ++j;
            }
                
        }
        
        return ind;
    }
};