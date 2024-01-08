

void solve(BinaryTreeNode<int>* root, vector<int> &ans, int level){
    if(root == nullptr){
        return;
    }
    if(level == ans.size()){
        ans.push_back(root -> data);
    }
    solve(root -> left, ans, level+1);
    solve(root -> right, ans, level+1);
}

vector<int> printLeftView(BinaryTreeNode<int>* root) {
    if(root == nullptr){
      return {};
    }
    if(root -> left == nullptr && root -> right == nullptr){
        return {root -> data};
    }
    vector<int> ans;
    solve(root, ans, 0); // 0 for level
    return ans;
}
