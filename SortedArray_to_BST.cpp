CODE:-
  '''
class Solution {
public:
    TreeNode* BST(vector<int>&g,int l,int r){
        if(l>r){
            return NULL;
        }
        else{
            int mid=l+(r-l)/2;
            TreeNode*temp=new TreeNode(g[mid]);
            temp->left=BST(g,l,mid-1);
            temp->right=BST(g,mid+1,r);
            return temp;
        }
        
    }
    TreeNode* sortedArrayToBST(vector<int>&s) {
        int l=0, r=s.size()-1;
        return BST(s,l,r);
    }
};
//This is the Function which we have used in Leetcode 


  '''
