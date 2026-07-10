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
    bool issame(TreeNode* root, TreeNode* subRoot){
        if(root == NULL && subRoot== NULL) return true;
        if(root==NULL || subRoot==NULL) return false;
        if(root->val!=subRoot->val) return false;
        bool l = issame(root->left,subRoot->left);
        bool r = issame(root->right,subRoot->right);
        if(l==true && r == true) return true;
        else return false;
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root==NULL) return false;
        if(issame(root,subRoot)) return true;
        return isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot);
    }
};