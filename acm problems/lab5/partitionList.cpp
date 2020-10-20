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
    ListNode* partition(ListNode* head, int x) {
        ListNode *before_head;
        ListNode *before = before_head;
        ListNode *after_head;
        ListNode *after = after_head;
        
        while(head != NULL){
            if(head->val < x){
                before->next = head;
                before = before->next;
            }else{
                after->next = head;
                after = before->next;
            }
             head = head->next;
        }
            after->next = NULL;
        before->next = after_head;
        return before_head->next;
        
    }
};