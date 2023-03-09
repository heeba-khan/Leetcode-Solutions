/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *p=head;
        ListNode *q=head;
        while(p && p->next){
            p=p->next->next;
            q=q->next;
            if(p==q) 
            break;
        }
        while(!(p && p->next)) return NULL;
        while(head!=q)
        {
            head=head->next;
            q=q->next;
        }
        return q;
    }
};