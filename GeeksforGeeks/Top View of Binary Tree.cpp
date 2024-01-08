class Solution
{
    public:
    
    vector<int> topView(Node *root)
    {
        vector<int> ans;
        if(root == nullptr){
            return {ans};
        }
        if(root -> left == nullptr && root -> right == nullptr){
            return {root -> data};
        }
        map<int, int> mp;
        queue<pair<Node*,int > > q;
        
        q.push({root, 0});
        
        while(!q.empty()){
            Node* temp = q.front().first;
            int level = q.front().second;
            q.pop();
            if(mp.find(level) == mp.end()){
                mp[level] = temp -> data;
            }
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
