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
    ListNode* reverseList(ListNode* head) {
        
        //:3 BOBOBOBOBOBOBOB HEHE
        ListNode*Curr = head;
        ListNode*Prev = NULL;
        ListNode*New;
        
        while(Curr!=NULL){
            //save the next node
            New = Curr->next;
            
            //make the current node point to prev;
            Curr->next = Prev;
            
            //update prev and current by taking them 1 step forward
            Prev = Curr;
            Curr = New;
        }
        return head = Prev;
    }
};