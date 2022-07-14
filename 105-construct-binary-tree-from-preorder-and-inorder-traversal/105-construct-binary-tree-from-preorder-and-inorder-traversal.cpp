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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int prst=0, inst=0, inend=inorder.size()-1;
        unordered_map<int,int>mp;
        for(int i=0;i<inorder.size();i++)
        {
            mp[inorder[i]]=i;
        }
        return help(preorder, mp, prst, inst, inend);
    }
    
   TreeNode* help(vector<int>& preorder, unordered_map<int,int> &mp, int &prst, int inst, int inend)
    {
        if(inst>inend)
            return NULL;
        int pos=mp[preorder[prst]];
        TreeNode* root= new TreeNode(preorder[prst]);
        prst++;
        root->left=help(preorder, mp, prst, inst, pos-1);
        root->right=help(preorder, mp, prst, pos+1, inend);
        return root;
    }
};