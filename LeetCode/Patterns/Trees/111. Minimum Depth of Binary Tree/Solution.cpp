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

    int postorder(TreeNode* root, int count){
        int left = 0;
        int right = 0;
        if(root){
            count++;
            left = postorder(root -> left, 0);

            right = postorder(root -> right, 0);
        }
        if(left == 0)
            count += right;
        else if(right == 0)
            count += left;
        else
            if(left < right)
                count += left;
            else
                count += right;
        return count;
    }

    int minDepth(TreeNode* root) {
        return postorder(root, 0);
    }
};