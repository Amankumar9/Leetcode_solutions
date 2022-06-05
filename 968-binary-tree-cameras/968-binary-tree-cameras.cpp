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
    int cnt=0;
    int minCameraCover(TreeNode* root) {
        int tmp=helper(root);
        if(tmp==-1)
            cnt++;
        return cnt;
    }
     
    int helper(TreeNode* root)
    {
        if(root==NULL)
            return 1;
        int l=helper(root->left);
        int r=helper(root->right);
        if(l==-1 || r==-1)
        {
            cnt++;
            return 0;
        }
        else if(l==0 || r==0)
            return 1;
        else
            return -1;
    }
};