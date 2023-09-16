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
// class Solution {
// public:
//     ListNode* insertGreatestCommonDivisors(ListNode* head) {
//         ListNode* prev=head;
        
//         for(auto p=head;p!=NULL;p=p->next){
//             int t=__gcd(prev->val,p->val);
//             ListNode* node=new ListNode(t,p);
//             prev->next=node;
//             prev=p;
//             continue;
//         }
        
//         return head;
                
//     }
// };

class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* p= head;
        ListNode* q=head->next;
        while(q!=NULL){
           int x = gcd(q->val,p->val);
            ListNode* node =new ListNode(x);
            p->next=node;
            node->next=q;
            p=q;
            q=q->next;
        }
        return head;
    }
};
























