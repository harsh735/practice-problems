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
    vector<int> inorderTraversal(TreeNode* root) {
        
        // ਹੌਂਸਲਾ ਰੱਖ 
        
        vector<int> arr = {};
        solve(root,arr);
        return arr;
    }
    
    void solve(TreeNode*&root, vector<int>& arr) {
        
        if(root == NULL) return;
        
        solve(root->left,arr);
        arr.push_back(root->val);
        solve(root->right,arr);
        return;
    }
};