class Solution {
public:
    int bestClosingTime(string customers) {
        int max_score=0,time=-1,score=0;
        for(int i=0;i<customers.size();i++){
            score += (customers[i] == 'Y') ? 1 : -1;
            if(score>max_score){
                max_score=score;
                time=i;
            }
        }
        return time+1;
    }
};


