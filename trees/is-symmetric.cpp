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
    bool isSymmetric(TreeNode* root) {
        
        if(root == NULL){
            return true;
        }

        return isSymmetricHelper(root->left, root->right);
    }
    bool isSymmetricHelper(TreeNode* x, TreeNode* y){
        if(x == NULL && y == NULL){
            return true;
        }

        if(x == NULL || y == NULL){
            return false;
        }

        if(x->val != y->val){
            return false;
        }

        return isSymmetricHelper(x->left, y->right) && isSymmetricHelper(x->right, y->left);
    }
};