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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* i = l1;
        ListNode* j = l2;
        ListNode *head = NULL;
        ListNode *current = NULL;
        while(i != NULL || j != NULL){
            ListNode* node = NULL;
            if(i != NULL && j != NULL) {
               if(i->val < j->val) {
                    node = new ListNode(i->val, NULL);
                   i = i->next;
               }else{
                   node = new ListNode(j->val, NULL);
                   j = j->next;
               }
            }else if(i == NULL) {
                node = new ListNode(j->val, NULL);
                j = j->next;
            }else{
                node = new ListNode(i->val, NULL);
                i = i->next; 
            }
            
            if(head == NULL){
                head = node;
                current = head; 
            }else{
                current->next = node;
                current = node;
            }
        }
        
        return head;
    }
};