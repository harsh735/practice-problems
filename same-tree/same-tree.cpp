/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        
        // ਜੱਫੀ ਪਾ ਦੇ ʕ•ᴥ•ʔ
        
        return solve(p,q);
    }
    
    bool solve(TreeNode*&p, TreeNode*&q) {
        
        if(p == NULL && q == NULL) return true;
        if(p == NULL || q == NULL) return false;
        if(p->val != q->val) return false;
        
        int left = solve(p->left,q->left);
        int right = solve(p->right,q->right);
        
        return left && right;
    }
};