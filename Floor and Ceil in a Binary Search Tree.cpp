class Solution {
public:
    pair<int, int> floorAndCeil(TreeNode* root, int key) {
        int floor_val = -1;
        int ceil_val = -1;
        
        TreeNode* curr = root;
        while (curr != NULL) {
            if (curr->val == key) {
                floor_val = curr->val;
                break;
            } else if (curr->val < key) {
                floor_val = curr->val;
                curr = curr->right;
            } else {
                curr = curr->left;
            }
        }
        
        curr = root;
        while (curr != NULL) {
            if (curr->val == key) {
                ceil_val = curr->val;
                break;
            } else if (curr->val > key) {
                ceil_val = curr->val;
                curr = curr->left;
            } else {
                curr = curr->right;
            }
        }
        
        return {floor_val, ceil_val};
    }
};
