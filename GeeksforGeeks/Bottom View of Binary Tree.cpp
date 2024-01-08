class Solution {
  public:
    vector <int> bottomView(Node *root) {
       if(root == nullptr){
           return {};
       }
       vector<int> ans;
       if(root -> left == nullptr && root -> right == nullptr){
           return {root -> data};
       }
       map<int, int> mp;
       queue<pair<Node*, int>> q;
       q.push({root, 0});
       while(!q.empty()){
           Node* temp = q.front().first;
           int level = q.front().second;
           q.pop();
           mp[level] = temp -> data;
           if(temp -> left){
               q.push({temp -> left, level-1});
           }
           if(temp -> right){
               q.push({temp -> right, level+1});
           }
           
       }
       for(auto i : mp){
           ans.push_back(i.second);
       }
       return ans;
    }
};
