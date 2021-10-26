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
    
    bool isUnivalTree(TreeNode* root) {
        int currVal = root->val;
        return solve(root,currVal);    
    }
    
    bool solve(TreeNode*& root, int currVal) {
        
        if(root == NULL) return true;
        if(root->val != currVal) return false;
        
        int left = solve(root->left,currVal);
        int right = solve(root->right,currVal);
        
        return left && right;
    }
};