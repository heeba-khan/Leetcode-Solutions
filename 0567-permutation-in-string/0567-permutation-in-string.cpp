class Solution {
public:
    bool checkInclusion(string s1, string s2) {
     int n1=s1.length();
     int n2=s2.length();

     if(n1>n2) return false;

     unordered_map<char,int>mp1;
     for(auto c:s1)  mp1[c]++;

     unordered_map<char,int>mp2;

     int i=0;
     while(i<n1)
        mp2[s2[i++]]++;
    
    int j=0;

    while(i<n2){
        if(mp1==mp2) return 1;

        mp2[s2[i]]++;
        i++;

        mp2[s2[j]]--;
        if(mp2[s2[j]]==0)
            mp2.erase(s2[j]);
        j++;
    }
        return mp1==mp2;
    }
};