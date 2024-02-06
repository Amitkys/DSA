// problem link : https://www.geeksforgeeks.org/problems/node-at-distance/1
// solution
class Solution
{
    public:
    //Function to return count of nodes at a given distance from leaf nodes.
    void help(Node*root,unordered_set<Node*>&s,vector<Node*>&ans,int k,int level){
        if(!root) return;
        if(!root->left&&!root->right){
            if(k==0){
                s.insert(root);
            }
            else if(level-k>=0){
                s.insert(ans[level-k]);
            }
            return;
        }
        ans.push_back(root);
        help(root->left,s,ans,k,level+1);
        help(root->right,s,ans,k,level+1);
        ans.pop_back();
    }
    int printKDistantfromLeaf(Node* root, int k)
    {
    	//Add your code here. 
    	unordered_set<Node*>s;
    	vector<Node*>ans;
    	help(root,s,ans,k,0);
    	return s.size();
    }
};