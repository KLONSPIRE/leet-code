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
    vector<int> in1, in2, pre1, pre2;

    void inorder(TreeNode* x, vector<int>& y){
        if(x){
            inorder(x -> left, y);
            y.push_back(x -> val);
            inorder(x -> right, y);
        }
    }

    void preorder(TreeNode* x, vector<int>& y){
        if(x){
            y.push_back(x -> val);
            preorder(x -> left, y);
            preorder(x -> right, y);
        }
    }
    
    bool isSameTree(TreeNode* p, TreeNode* q) {
        inorder(p, in1);
        inorder(q, in2);

        if(in1.size() != in2.size())
            return false;

        preorder(p, pre1);
        preorder(q, pre2);

        if(pre1.size() != pre2.size())
            return false;

        for(int i = 0; i < in1.size(); i++)
            if(in1[i] != in2[i] || pre1[i] != pre2[i])
                return false;
            
        return true;
    }
};