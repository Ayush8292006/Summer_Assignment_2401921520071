class Codec {
public:

    // Serialize Helper
    void solve(TreeNode* root, string &ans) {
        if (root == NULL) {
            ans += "N,";
            return;
        }

        ans += to_string(root->val) + ",";
        solve(root->left, ans);
        solve(root->right, ans);
    }

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        string ans = "";
        solve(root, ans);
        return ans;
    }

    // Deserialize Helper
    TreeNode* build(vector<string> &arr, int &idx) {

        if (arr[idx] == "N") {
            idx++;
            return NULL;
        }

        TreeNode* root = new TreeNode(stoi(arr[idx]));
        idx++;

        root->left = build(arr, idx);
        root->right = build(arr, idx);

        return root;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {

        vector<string> arr;
        string temp = "";

        for (char ch : data) {
            if (ch == ',') {
                arr.push_back(temp);
                temp = "";
            } else {
                temp += ch;
            }
        }

        int idx = 0;
        return build(arr, idx);
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(ro