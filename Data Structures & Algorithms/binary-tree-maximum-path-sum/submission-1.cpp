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
int pathsum(TreeNode* root,int &ans)
{
        if(!root)
        {
                return 0;
        }
       
        int op2=pathsum(root->left,ans);
        int op3=pathsum(root->right,ans);
        ans=max(ans,max(root->val,max(op2+root->val,max(root->val+op3,root->val+op2+op3))));
        return max(root->val,max(root->val+op2,root->val+op3));
        
}
    int maxPathSum(TreeNode* root) {

        int ans=INT_MIN;
        pathsum(root,ans);
        return ans;

    }
};
