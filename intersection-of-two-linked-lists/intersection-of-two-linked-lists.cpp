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
       
        // ~O~
        
        ListNode *tempA=headA;
        ListNode *tempB=headB;
        while(tempA != tempB) 
        {
            tempA = (tempA==NULL) ? tempA=headB : tempA=tempA->next; // if null change head to opposite list
            tempB = (tempB==NULL) ? tempB=headA : tempB=tempB->next; // else iterate
        }
        return tempA;
        
    }
};