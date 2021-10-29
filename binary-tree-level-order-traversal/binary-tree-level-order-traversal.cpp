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
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        //sorry for anxiety im scared youll lash out and just idk feels weird to be scared of you
        
        vector<vector<int>> ans;        
        if(root == NULL) return ans;
        
        queue<TreeNode*> q;
        q.push(root);
        
        while(q.size() > 0) {
            int currSize = q.size();
            vector<int> tempAns;
            
            while(currSize > 0) {
                TreeNode* currNode = q.front();
                q.pop();
                tempAns.push_back(currNode->val);
                
                if(currNode->left != NULL) q.push(currNode->left);
                
                if(currNode->right != NULL) q.push(currNode->right);
                
                currSize -= 1;
            }
            ans.push_back(tempAns);
        }
        return ans;
    }
    
};