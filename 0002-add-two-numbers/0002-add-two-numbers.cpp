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
//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//         // vector<int>v1;
//         // vector<int>v2;
//         // vector<int>v3;
//         string a="";
//         string b="";
//         ListNode* p=l1;
//         ListNode* q=l2;
        
//         while(p){
//             string a=a+to_string(p->val);
//             p=p->next;
//         }
//         while(q){
//             string b=b+to_string(q->val);
//             q=q->next;
//         }
//         int num1=stoi(a);
//         int num2=stoi(b);
//         int num3=num1+num2;
        
//         vector<ListNode*>v3;
//         while(num3){
//             v3.push_back(num3%10);
//             num=num/10;
//         }
        
        
        
//     }
// };


class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int s=0;
        int c=0;
        ListNode *dummy = new ListNode (-1);
        ListNode * p=dummy;
        while(l1 || l2 || c){
            if(l1){
                s+=l1->val;
                l1=l1->next;
            }
            if(l2){
                s+=l2->val;
                l2=l2->next;
            }
            s+=c;
            c=s/10;
            p->next = new ListNode(s%10);
            p=p->next;
            s=0;
        }
        ListNode *tmp = dummy;
        dummy=dummy->next;
        delete tmp;
        return dummy;
    }
};

















