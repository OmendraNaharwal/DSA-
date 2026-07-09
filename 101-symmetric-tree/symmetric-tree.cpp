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
    bool mirror(TreeNode* a , TreeNode* b){
        if(a==NULL && b==NULL) return true;
        if(a==NULL || b==NULL) return false;
        if(a->val != b->val) return false;
        bool r1 = mirror(a->left,b->right);
        bool r2 = mirror(a->right,b->left);
        if(r1==true && r2==true) return true;
        else return false;
    }

    bool isSymmetric(TreeNode* root) {
        if(root==NULL)return false;
        return mirror(root->left,root->right);
    }
};