class Solution {
public:
 bool isIdentical(TreeNode* r1, TreeNode* r2) {
        // code here
        if(r1==NULL && r2==NULL){
            return true;
        }
        
        if(r1==NULL && r2!=NULL){
            return false;
        }
        
        if(r1!=NULL && r2==NULL){
            return false;
        }
        
        bool left=isIdentical(r1->left,r2->right);
        bool right=isIdentical(r1->right,r2->left);
        
        bool value=(r1->val==r2->val);
        
        if(left && right && value){
            return true;
        }
        else{
            return false;
        }
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL && (root->left==NULL && root->right==NULL)){
            return true;
        }
        TreeNode* r1=root->left;
        TreeNode* r2=root->right;
        

        return isIdentical(r1,r2);


    }
};