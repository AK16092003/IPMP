
class Solution {
  public:
    // Function to return the diameter of a Binary Tree.
    
    int answer(Node * root , int &ht)
    {
        if(root == NULL) 
        {
            ht = 0;
            return 0;
        }
        
        int hl = 0 , hr = 0;
        int d1 = answer(root->left , hl);
        int d2 = answer(root->right , hr);
        
        ht = max(hl , hr) + 1;
        return max(hl+hr+1 , max(d1,d2));
    }
    
    int diameter(Node* root) {
        // Your code here
    
        int ht = 0;
        return answer(root , ht);
        
    }
};
