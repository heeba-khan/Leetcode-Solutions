class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int curr_gas=0;
        int total_gas=0;
        int total_cost=0;
        for(int i=0;i<gas.size();i++){
            total_cost+=cost[i];
            total_gas+=gas[i];
          
        }
        if(total_cost>total_gas){return -1;} 
        int start=0;
        for(int i=0;i<gas.size();i++)
       {
           if(curr_gas<0){
           curr_gas=0;
           start=i;
        }
       curr_gas+=gas[i]-cost[i];
       }
      return start;
    }
};