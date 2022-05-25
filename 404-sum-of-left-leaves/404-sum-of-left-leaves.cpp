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
    int sumOfLeftLeaves(TreeNode* root) 
    {
        bool fl=false;
        int res=0;
        help(root, fl,res);
        return res;
    }
    
    void help(TreeNode* root, bool fl, int & res)
    {
      if(root==NULL)
          return;
      if(root->left==NULL && root->right==NULL && fl==true)
      {
        res+=root->val;
        return;
      }
      help(root->left, true, res);
      help(root->right, false, res);
    }
};