class Solution {
public:
    double average(vector<int>& salary) {
       sort(salary.begin(),salary.end());
       salary.pop_back();
       salary.erase(salary.begin());
       int n=salary.size();
    //    int res=(accumulate(salary.begin(),salary.end()))/n;
    double sum=0;
    for(int i=0;i<salary.size();i++){
        sum+=salary[i];
    }
    return sum/n;
    }
};