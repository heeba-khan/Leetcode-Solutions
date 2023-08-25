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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
//         vector<int>v;
//         ListNode* p=head;
//         while(p){
//             v.push_back(p->val);
//             p=p->next;
//         }
//         v.erase(v.end()-n);
        
//         p=head;
//         for(int i=0;i<v.size();i++){
            
//                 p->val=v[i];
//                 p=p->next;
            
//         }
//         return head;
        
        ListNode* q=head, *p=head;
        for(int i=0;i<n;i++){
            p=p->next;
        }
        if(p==NULL) return head->next;
        
        while(p->next){
            q=q->next;
            p=p->next;
        }
        q->next=q->next->next;
        
        return head;
        
    }
};

