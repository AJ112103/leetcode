#include <iostream>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    TreeNode* LCA(TreeNode* root, TreeNode* x, TreeNode* y) {
        if(root == NULL){
            return nullptr;
        }

        if(root->val >= x->val && root->val <= y->val || root->val <= x->val && root->val >= y->val){
            return root;
        }

        if(root->val > x->val && root->val > y->val){
            return LCA(root->left, x, y);
        } else {
            return LCA(root->right, x, y);
        }
    };
};