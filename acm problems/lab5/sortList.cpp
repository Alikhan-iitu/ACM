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
    ListNode* sortList(ListNode* head) {
        for(ListNode *i = head; i != NULL; i = i->next){
            for(ListNode *j = i->next; j != NULL; j = j->next){
                if(i->val > j->val){
                    swap(i->val, j->val);
                }
            }
        }
        return head;
    }
};