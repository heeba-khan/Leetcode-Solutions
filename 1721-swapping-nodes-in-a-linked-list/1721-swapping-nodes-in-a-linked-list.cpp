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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *p=head,*q=head;
        for(int i=0;i<k-1;i++){
            q=q->next;
        }
        
        ListNode *end=q;
        while(q->next){
            p=p->next;
            q=q->next;
        }
        swap(p->val,end->val);
        return head;
        
    }
};