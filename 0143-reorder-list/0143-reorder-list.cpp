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
    vector<int> fun(ListNode* head){
        vector<int>v;
        ListNode* p=head;
        
        while(p){
            v.push_back(p->val);
            p=p->next;
        }
        return v;
    }
    
    void reorderList(ListNode* head) {
        vector<int>v=fun(head);
        
        int first=0;
        int last=v.size()-1;
        int cnt=0;
        ListNode* p=head;
        
        while(p){
            if(cnt%2==0){
                p->val=v[first];
                first++;
            }
            else{
                p->val=v[last];
                last--;
            }
            cnt++;
            p=p->next;
        }
        // return head;
    }
};



























