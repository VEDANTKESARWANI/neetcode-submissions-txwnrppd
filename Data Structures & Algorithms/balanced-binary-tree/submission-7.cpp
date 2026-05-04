class Solution {
public:
    int height(TreeNode* root)
    {
        if(!root)
        {
            return 0;
        }
        return 1 + max(height(root->left), height(root->right));
    }

    bool isBalanced(TreeNode* root) {
        if(!root)
        {
            return true;
        }

        int h1 = height(root->left);
        int h2 = height(root->right);

        if(abs(h1 - h2) <= 1 
           && isBalanced(root->left) 
           && isBalanced(root->right))
        {
            return true;
        }

        return false;
    }
};