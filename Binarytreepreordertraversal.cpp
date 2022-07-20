1st approach -> Recursive approach
class Solution {
public:
    void help(TreeNode* root, vector<int>& ans){
        if(root == NULL)return;
        ans.push_back(root->val);
        help(root->left,ans);
        help(root->right,ans);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        help(root,ans);
        return ans;
    }
};

2nd approach -> Iterative approach
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        stack<TreeNode*> s;
        vector<int> ans;
        if(root == NULL)return ans;
        s.push(root);
        while(s.size()){
            auto a = s.top();
            s.pop();
            ans.push_back(a->val);
            if(a->right)s.push(a->right);
            if(a->left)s.push(a->left);
        }
        return ans;
    }
};
