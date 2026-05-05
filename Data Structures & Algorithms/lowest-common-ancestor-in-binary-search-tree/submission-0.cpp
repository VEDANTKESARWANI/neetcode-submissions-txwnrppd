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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root)
        {
                return nullptr;
        }
        if(root->val==p->val or root->val==q->val)
        {
                return root;
        }
        TreeNode*left_ans=lowestCommonAncestor(root->left,p,q);
        TreeNode*right_ans=lowestCommonAncestor(root->right,p,q);
        if(left_ans and right_ans)
        {
                return root;
        }
        if(!right_ans)
        {
                return left_ans;
        }
        return right_ans;

      
    }
};
