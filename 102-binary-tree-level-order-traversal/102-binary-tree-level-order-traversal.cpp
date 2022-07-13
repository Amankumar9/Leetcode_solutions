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
    vector<vector<int>>levelOrder(TreeNode* root) {
        vector<vector<int>>res;
        if(root==NULL)
          return res;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            int sz=q.size();
            vector<int>v;
            for(int i=0;i<sz;i++)
            {
                TreeNode* tmp=q.front();
                q.pop();
                v.push_back(tmp->val);
                if(tmp->left!=NULL)
                  q.push(tmp->left);
                if(tmp->right!=NULL)
                  q.push(tmp->right);  
            }
            res.push_back(v);
            v.resize(0);
        }
        return res;
    }
};