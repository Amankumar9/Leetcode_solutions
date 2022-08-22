/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
      TreeNode* res=find(root,p,q);
      return res;  
    }
    
    TreeNode* find(TreeNode* root, TreeNode* p, TreeNode* q)
    {
        if(root==NULL)
            return NULL;
        if(root==p || root==q)
            return root;
        TreeNode *l=find(root->left,p,q);
        TreeNode *r=find(root->right,p,q);
        if(l&&r)
            return root;
        if(l)
            return l;
        if(r)
            return r;
        return NULL;
    }
};