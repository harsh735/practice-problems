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
    unordered_set<int> memo = {};
    vector<int> rightSideView(TreeNode* root) {
        
        // may u finish all ur deadlines and i appear in ur dreams ok thx bai >/////<
        
        vector<int> ans = {};
        solve(root,0,ans);
        return ans;
    }
    
    void solve(TreeNode*&root,int currLevel, vector<int>& ans) {
    
        if(root == NULL) return;
    
        if(memo.find(currLevel) == memo.end()) {
            ans.push_back(root->val);
            memo.insert(currLevel);
        }
        
        solve(root->right,currLevel + 1, ans);    
        solve(root->left,currLevel + 1, ans);
    
        return;
    }
};