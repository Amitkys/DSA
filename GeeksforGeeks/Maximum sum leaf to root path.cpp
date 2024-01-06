class Solution{
    public:
    int solve(Node* root){
        if(root == nullptr){
            return 0;
        }
        int left = solve(root-> left);
        int right = solve(root ->right);
        
        if(root -> left == nullptr && root -> right == nullptr){
            return root -> data;
        }
        if(root -> left == nullptr){
            return root -> data + right;
        }
        if(root -> right == nullptr){
            return root -> data + left;
        }
        
        return max(left, right) + root -> data;
    }
    int maxPathSum(Node* root)
    {
        return solve(root);
    }
};
