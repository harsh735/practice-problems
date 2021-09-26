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
    
    ListNode* reverse(ListNode* head){
        ListNode* prev = NULL;
        ListNode* c = head;
        ListNode* n;
        while(c != NULL){
            n = c->next;
            c->next = prev;
            prev = c;
            c = n;
        }
        return head = prev;
    }
    
    
    
    ListNode* reverseBetween(ListNode* head, int left, int right) {
                
        //(◕‿◕✿) BOBOBOBOBOBOB
        
        
        ListNode* previous = NULL;
        ListNode* current = head;
        int count = 1;
        
        //appending count to reach the point where we have to start reversing
        while(count != left){
            previous = current;
            current = current->next;
            count++;
        }
        
        //starting of the ll we have to reverse from left to right
        ListNode*start = current;
        
        //reaching the end of the list we have to reverse
        while(count!=right){
            current = current->next;
            count++;
        }
        
        ListNode*rest = current->next;
        current->next = NULL;
        
        ListNode*newHead = reverse(start);
        
        //setting the link for first element to the new head of reversed ll 
        if(previous != NULL){
            previous->next = newHead;
        }
        
        
        //joining the end part from right to end of list
        current = newHead;
        while(current->next!=NULL){
            current= current->next;
        }
        current->next = rest;
        
        
        if(left == 1){
            return newHead;
        }
        else{
            return head;
        }        
        
    }
};