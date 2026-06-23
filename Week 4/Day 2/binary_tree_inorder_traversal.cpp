class Solution {
public:
    void solve(TreeNode* root, vector<int>& ans) {
        if(root == NULL) return;
        solve(root->left, ans);        // Left
         ans.push_back(root->val);      // Root
        solve(root->right, ans);       // Right
    }

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        solve(root, ans);
        return ans;
    }
};