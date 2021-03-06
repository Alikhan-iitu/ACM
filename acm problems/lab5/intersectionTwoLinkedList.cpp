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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (headA == NULL || headB == NULL)
            return NULL;
        ListNode * pa = headA;
        ListNode * pb = headB;
        ListNode * lastA = NULL;
        ListNode * lastB = NULL;
        
        while(pa->next != NULL){
            pa = pa->next;
        }
        lastA = pa;
        
        while (pb->next != NULL){
            pb = pb->next;
        }
        lastB = pb;
        
        if(lastA == lastB){
            pa = headA;
            pb = headB;
            while (pa != pb){
                if(pa->next != NULL)
                    pa = pa->next;
                else 
                    pa = headB;
                
                if(pb->next != NULL)
                     pb = pb->next;
                else 
                    pb = headA;
            }
            return pa;
        }
        return NULL;
    }
};