class Solution {
  public:
    void solveLeft(Node* root, vector<int> &ans){
        if(!root || (!root->left && !root->right)) return;
        
        ans.push_back(root->data);
        
        if(root->left){
            solveLeft(root->left,ans);
        }
        else{
            solveLeft(root->right,ans);
        }
    }
    
    void solveLeaf(Node* root, vector<int> &ans){
        if(!root) return;
        
        if(!root->left && !root->right){
            ans.push_back(root->data);
        }
        
        solveLeaf(root->left,ans);
        solveLeaf(root->right,ans);
    }
    
    void solveRight(Node* root, vector<int> &ans){
        if(!root || (!root->left && !root->right)) return;
        
        // first traverse then push
        if(root->right){
            solveRight(root->right,ans);
        }
        else{
            solveRight(root->left,ans);
        }
        ans.push_back(root->data);
    }
    vector<int> boundaryTraversal(Node *root) {
        // code here
        vector<int> ans;
        
        if(!root) return ans;
        
        // push the main root
        ans.push_back(root->data);
        
        // left nodes
        solveLeft(root->left,ans);
        
        // get leaf nodes
        solveLeaf(root->left,ans);
        solveLeaf(root->right,ans);
        
        // right nodes
        solveRight(root->right,ans);
        
        return ans;
    }
