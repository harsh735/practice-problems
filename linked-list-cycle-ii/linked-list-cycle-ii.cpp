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
    ListNode *detectCycle(ListNode *head) {
        
        // :/
        
        ListNode* slow = head;
        ListNode* fast = head;
        int check = 0;
        while(fast != NULL && fast->next != NULL){
            fast = fast->next->next;
            slow = slow->next;
            
            if(fast == slow){
                check = 1;
                break;
            }
        }
        
        if(!check) return nullptr;
        
        slow = head;
        while (fast != slow){
            slow = slow->next;
            fast = fast->next;
        }
        return slow;
    }
};