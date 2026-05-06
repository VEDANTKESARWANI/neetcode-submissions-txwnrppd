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
    vector<int>ans;
     void solve(TreeNode*root,int m)
     {
        if(!root)
        {
            return;
        }
        if(root->val>=m)
        {
            ans.push_back(root->val);
            m=root->val;
        }
        solve(root->left,m);
        solve(root->right,m);

     }
    int goodNodes(TreeNode* root) {
        int m=INT_MIN;
        solve(root,m);
        return ans.size();
       
    }
};
