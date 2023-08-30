class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int>q;
        int count=0,i=0;
        
        for(auto s:students) q.push(s);
        
        while(count<q.size()&&i<sandwiches.size()){
            if(q.front()==sandwiches[i]){
                q.pop();
                count=0;
                i++;
            }
            else{
                q.push(q.front());
                q.pop();
                count++;
            }
        }
        return count;
    
    }
};