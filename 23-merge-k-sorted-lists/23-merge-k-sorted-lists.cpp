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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int k = lists.size(); 
        if(k == 0) return nullptr;
        
        vector<pair<int, ListNode*>> ans; 
        for(int i = 0; i < k; i++) {
            ListNode* curr_list = lists[i];
            
            while(curr_list != NULL) {
                ans.push_back({curr_list -> val, curr_list}); 
                curr_list = curr_list -> next;
            }
        }
        if(ans.size() == 0) 
            return NULL;
        
        sort(ans.begin(), ans.end()); 
        for(int i = 0; i < ans.size() - 1; i++){
            ans[i].second -> next = ans[i + 1].second;
        }
        
        ans[ans.size() - 1].second -> next = NULL;
        
        return ans[0].second;
    }
};