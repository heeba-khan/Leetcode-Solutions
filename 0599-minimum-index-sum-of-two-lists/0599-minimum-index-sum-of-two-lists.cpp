class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        int ans=INT_MAX;
        vector<string>v;
        int p=-1;
        for(int i=0;i<list1.size();i++){
            for(int j=0;j<list2.size();j++){
                if(list1[i]==list2[j]){
                    if(i+j<ans){
                        ans=i+j;
                        v.clear();
                        v.push_back(list1[i]);
                    }
                    else if(i+j==ans)
                        v.push_back(list1[i]);
                }
            }
        }
        
        return v;
    }
};