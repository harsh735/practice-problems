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
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        
        // (｡◕‿‿◕｡) ਮੇਰੀ ਬੱਤਖ ਨੂੰ ਪਾਦਣਾ ਪਸੰਦ ਹੈ
        
        return solve(root1,root2);   
    }
    
    TreeNode* solve(TreeNode*&root1, TreeNode*&root2) {
        
        if(root1 == 0 && root2 == 0) return NULL;
        if(root1 == NULL) return root2;
        if(root2 == NULL) return root1;
        
        
        //using preorder traversal
        TreeNode* ans = new TreeNode(root1->val + root2->val);
        ans->left = solve(root1->left,root2->left);
        ans->right = solve(root1->right,root2->right);
        return ans;
    }
};