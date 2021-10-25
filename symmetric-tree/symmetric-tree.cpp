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
    bool isSymmetric(TreeNode* root) {
        
        // want to cry because idk if youre ok or not 
        
        return solve(root->left,root->right);
    }
    
    bool solve(TreeNode*&p, TreeNode*&q) {
        
        if(p == NULL && q == NULL) return true;
        if(p == NULL || q == NULL) return false;
        if(p->val != q->val) return false;
                
        bool left = solve(p->left,q->right);
        bool right = solve(p->right,q->left);
        
        return left && right;
    }
};