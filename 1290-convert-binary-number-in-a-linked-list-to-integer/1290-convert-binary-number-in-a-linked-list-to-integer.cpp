/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int decimal=0;
        int power=0;
        
        vector<int>arr;
        
        while(head){
            arr.push_back(head->val);
            head=head->next;
        }
        reverse(arr.begin(),arr.end());
        
        for(int i=0;i<arr.size();i++){
                
                decimal+=pow(2,i)*arr[i];
                
            
            // power++;
        }
        return decimal;
    }
};