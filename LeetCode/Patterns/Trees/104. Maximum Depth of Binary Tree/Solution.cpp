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
    int max = 0;

    int postorder(TreeNode* root, int count){
        int left = 0;
        int right = 0;
        if(root){
            count++;
            left = postorder(root -> left, 0);
            right = postorder(root -> right, 0);
        }
        if(left > right)
            count += left;
        else
            count += right;
        return count;
    }

    int maxDepth(TreeNode* root) {
        return postorder(root, 0);
    }
};