class Solution {
public:
    string reorganizeString(string s) {
        int n=s.length();
        vector<int>freq(26,0);
        for(auto c:s){
            freq[c-'a']++;
        }
        
        priority_queue<pair<int,char>>maxheap;
        for(int i=0;i<26;i++){
            if(freq[i]>0){
                maxheap.push(make_pair(freq[i],'a'+i));
            }
        }
        string result="";
        pair<int,char> prev=make_pair(-1,'#');
        
        while(!maxheap.empty()){
            auto current=maxheap.top();
            maxheap.pop();
            
            result+=current.second;
            --current.first;
            
            if(prev.first>0){
                maxheap.push(prev);
            }
            prev=current;
        }
        if(result.length()!=n){
            return "";
        }
        return result;
    }
};