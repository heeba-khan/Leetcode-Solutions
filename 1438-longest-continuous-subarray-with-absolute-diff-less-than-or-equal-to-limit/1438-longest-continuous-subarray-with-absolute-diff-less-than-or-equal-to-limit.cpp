class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        int n=nums.size();
        deque<int>dec;
        deque<int>inc;
        int left=0,ans=0;
        
        for(int right=0;right<n;right++){
            int num=nums[right];
            
            while(!dec.empty()&&num>dec.back()){
                dec.pop_back();
            }
            dec.push_back(num);
            while(!inc.empty()&&num<inc.back()){
                inc.pop_back();
             
            }
               inc.push_back(num);
            while(dec.front()-inc.front()>limit){
                if(dec.front()==nums[left])
                    dec.pop_front();
                if(inc.front()==nums[left])
                    inc.pop_front();
                
                left++;
            }
            
            ans=max(ans,right-left+1);
        }
        return ans;
    }
};