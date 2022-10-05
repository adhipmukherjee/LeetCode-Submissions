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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(!root) return root;
        if(depth == 1){ // NEW ROOT VALUE
            TreeNode*newNode = new TreeNode(val);
            newNode->left = root; //  OLD ROOT SHIFTED TO LEFT SIDE OF THE NEW ROOT
                return newNode; // RETURN NEW NODE CREATED
        }
        TreeNode* left = root->left;
        TreeNode* right = root->right;
        if(depth-1 == 1){ // AT DEPTH=2
            root->left = new TreeNode(val); // INSERTING ROOT->LEFT->VAL
            root->left->left = left; // SHIFTING THE PREVIOUS ROOT->LEFT->VAL TO NEW ROOT->LEFT->LEFT->VAL
            root->right = new TreeNode(val); // INSERTING ROOT->RIGHT->VAL
            root->right->right = right; // SHIFTING THE PREVIOUS ROOT->RIGHT->VAL TO NEW ROOT->RIGHT->RIGHT->VAL
            return root; // RETURNING THE REFRESHED ROOT ARRAY
        }
        addOneRow(root->left, val, depth-1); // RECURSIVELY CALLING THE ADDONEROW FUNCTION FOR LEFT SIDE OF THE ROOT
        addOneRow(root->right, val, depth-1); // RECURSIVELY CALLING TH ADDONEROW FUNCTION FOR RIGHT SIDE OF THE ROOT
        return root; // RETURNING THE REFRESHED ROOT ARRAY
    }
};