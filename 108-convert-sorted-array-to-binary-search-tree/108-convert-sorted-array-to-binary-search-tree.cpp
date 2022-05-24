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
    
    TreeNode* createBST(vector<int>& nums, int s, int e)
    {
        if(s>e)
            return NULL;
        int m=(s+e)/2;
        TreeNode* newnode= new TreeNode(nums[m]);
        newnode->left=createBST(nums,s,m-1);
        newnode->right=createBST(nums,m+1,e);
        return newnode;
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n=nums.size();
        if(n==0)
          return NULL;
        return createBST(nums, 0, n-1);
    }
};