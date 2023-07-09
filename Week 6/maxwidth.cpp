
class Solution {
  public:
    // Function to get the maximum width of a binary tree.
    int getMaxWidth(Node* root) {

        // Your code here
        
        if(root == NULL) return 0;
        
        queue<Node *> qq;
        qq.push(root);
        int ans = 1;
        
        while(qq.size())
        {
            queue<Node *> childqueue;
            int cur = 0;
            while(qq.size())
            {
                if(qq.front() == NULL)
                {
                    qq.pop();
                    continue;
                }
                
                cur++;
                childqueue.push(qq.front()->left);
                childqueue.push(qq.front()->right);
                qq.pop();
            }
            ans = max(ans , cur);
            qq = childqueue;
        }
        
        
        return ans;
        
    }
};
