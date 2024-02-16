// problem link : https://www.geeksforgeeks.org/problems/flatten-bst-to-sorted-list--111950/1
class Solution
{
public:
    Node *dummy = new Node(-1);
    Node *temp = dummy;
    
    Node *flattenBST(Node *root)
    {
        // code here
        if(root==NULL)
            return NULL;
        flattenBST(root->left);

        temp->right = root;
        temp = root;
        temp->left = NULL;

        flattenBST(root->right);  
        return dummy->right;   
    }
};