#include <iostream>

using namespace std;

struct TreeNode {
int val;
TreeNode *left;
TreeNode *right;
TreeNode() : val(0), left(nullptr), right(nullptr) {}
TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    bool isValidBST(TreeNode* root) {
        return validHelp(root, -1000000000000000000, 1000000000000000000);
    }

    bool validHelp(TreeNode* x, long long min, long long max){
        if(x == NULL){return true;}
        if(x->val >= max || x->val <= min){
            return false;
        }

        return validHelp(x->left, min, x->val) && validHelp(x->right, x->val, max);
    }

};


// Given the root of a binary tree, determine if it is a valid binary search tree (BST).

// A valid BST is defined as follows:

// The left 
// subtree
//  of a node contains only nodes with keys less than the node's key.
// The right subtree of a node contains only nodes with keys greater than the node's key.
// Both the left and right subtrees must also be binary search trees.
