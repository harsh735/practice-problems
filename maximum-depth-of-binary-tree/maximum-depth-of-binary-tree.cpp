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
    int maxDepth(TreeNode* root) {
        
        // im sorry
        
        return solve(root);
    }
    
    int solve(TreeNode*&root){
        if(root == NULL) return 0;
       
        int leftChild = solve(root->left);
        int rightChild = solve(root->right);
        
        return 1 + max(leftChild,rightChild);
    }
};