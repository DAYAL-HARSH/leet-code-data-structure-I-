class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root == NULL)
            return false;
        else if(root->val == targetSum && root->left == NULL && root->right == NULL){
            return true;
        }
        else{
            int newTarget = targetSum - root->val;  
            return hasPathSum(root->left,newTarget) || hasPathSum(root->right, newTarget);
        }
    }
};
