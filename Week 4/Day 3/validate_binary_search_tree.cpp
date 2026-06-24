class Solution {
public:
    bool solve(TreeNode* root, long long lb, long long ub) {
        // base case
        if (root == NULL) {
            return true;
        }

        if (root->val > lb && root->val < ub) {
            bool leftAns = solve(root->left, lb, root->val);
            bool rightAns = solve(root->right, root->val, ub);
            return leftAns && rightAns;
        } else {
            return false;
        }
    }

    bool isValidBST(TreeNode* root) {
        return solve(root, LLONG_MIN, LLONG_MAX);
    }
};
