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
    vector<int> left, right;

    void inorder1(TreeNode* x){
        if(x){
            inorder1(x -> left);
            left.push_back(x -> val);
            inorder1(x -> right);
        }
        left.push_back(-1);
    }

    void inorder2(TreeNode* x){
        if(x){
            inorder2(x -> right);
            right.push_back(x -> val);
            inorder2(x -> left);
        }
        right.push_back(-1);
    }

    bool isSymmetric(TreeNode* root) {
        inorder1(root -> left);
        inorder2(root -> right);

        if(left.size() != right.size())
            return false;

        for(int i = 0; i < left.size(); i++)
            if(left[i] != right[i])
                return false;    

        return true;
    }
};