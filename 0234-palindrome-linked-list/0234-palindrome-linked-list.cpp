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
    bool isPalindrome(ListNode* head) {
        vector<int>v1;
        ListNode* p=head;
        while(p){
            v1.push_back(p->val);
            p=p->next;
        }
        vector<int>v2;
        for(int i=0;i<v1.size();i++){
            v2.push_back(v1[i]);
        }
        reverse(v2.begin(),v2.end());
        if(v2==v1) return true;
        return false;
    
    }
};