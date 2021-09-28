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
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        // O,O
        
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* n = NULL;
    
        //size of linked list
        ListNode* temp = head;
        int size = 0;
        while(temp != NULL){
            temp = temp->next;
            size++; 
        }
        
        if(size < k) return head;
        if(!head) return NULL;
        
        
        //reversing in accordance to k
        int count = 0;   
        while(count < k && curr!= NULL){
            n = curr->next;
            curr->next = prev;
            prev = curr;
            curr = n;
            count++;
        }
        
        if(head != NULL) head->next = reverseKGroup(n,k);
        return prev;
    }
};