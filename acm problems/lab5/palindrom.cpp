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
    ListNode *reverseLinkedList(ListNode* head){
        ListNode *current = head, *prev = NULL, *next = NULL;
        while (true){
            prev = current->next;
            current->next = next;
            next = current;
            if(prev != NULL)
                current = prev;
            else
                break;
        }
        return current;
    }
    
    void print (ListNode *head) {
        ListNode *current = head;
        while (current != NULL) {
            cout << current->val << " ";
            current = current->next;
        }
    }
    
    int getLength(ListNode *head){
        ListNode *current = head;
        int count = 0;
        while(current != NULL){
            count++;
            current = current->next;
        }
        return count;
    }
    
    bool isPalindrome(ListNode* head) {
        if(head == NULL)
            return true;
        int count = getLength(head);
        if(count == 1)
            return true;
        ListNode *current = head;
        int i = 1;
        while (i < (count + 1) / 2 + 1) {
            i++;
            current = current->next;
        }
        ListNode *R = reverseLinkedList(current);
        ListNode *L = head;
        i = 1;
        while (i <= count / 2){
            if(L->val != R->val)
                return false;
            else{
                L = L->next;
                R = R->next;
                i++;
            }
        }
        return true;
     }
};