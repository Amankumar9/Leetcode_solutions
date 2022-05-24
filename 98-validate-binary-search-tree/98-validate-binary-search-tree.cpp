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
    bool isValidBST(TreeNode* root) {
        return find(root, LONG_MIN,LONG_MAX);
    }
    bool find(TreeNode* root, long l, long r)
    {
        if(root==NULL)
            return true;
        if(root->val<=l || root->val>=r)
            return false;
        bool lft=find(root->left,l,root->val);
        bool rht=find(root->right,root->val,r);
        return lft && rht;
    }
};