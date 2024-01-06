class Solution {
  public:
  int solve(Node* root, int &ans){
      if(root == nullptr){
          return 0;
      }
      
      int left = max(0, solve(root -> left, ans));
      int right = max(0, solve(root -> right, ans));
      
      ans = max(ans, (left + right + root -> data));
      
      return max(left, right) + root -> data;
  }
    int findMaxSum(Node* root)
    {
        int ans =  INT_MIN;
        solve(root, ans);
        return ans;
    }
};
