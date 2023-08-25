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
//     ListNode* deleteMiddle(ListNode* head) {
//         if(head==NULL||head->next==NULL){
//             return NULL;
//         }
//          ListNode* q=NULL;
//         ListNode* p=head;
        
//         int cnt=0;
//         while(p){
//             cnt++;
//             p=p->next;
//         }
//         int pos=cnt/2;
        
//         for(int i=0;i<pos;i++){
//             q=p;
//            p=p->next;
           
//         }
//          q->next=p->next;
        
        
        
//         return head;
//     }
// };

class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
       if(!head || !head->next){
            return NULL;
        }
        ListNode* slow=head;
        ListNode* fast=head->next;
        while(fast){
            fast=fast->next;
            if(!fast ||!fast->next){
                break;
            }
            fast=fast->next;
            slow=slow->next;
        }
        slow->next=slow->next->next;
        return head;
    } 
};