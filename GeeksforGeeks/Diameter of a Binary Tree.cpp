class Solution {
  public:
    int solve(Node* root, int &ans){
        if(root == nullptr){
            return 0;
        }
        int left = solve(root -> left, ans);
        int right = solve(root -> right, ans);
        ans = max(ans, left + right);
        return 1+max(left, right);
        
    }
    int diameter(Node* root) {
       int ans = 0;
       solve(root, ans);
       return ans+1;
    }
};
