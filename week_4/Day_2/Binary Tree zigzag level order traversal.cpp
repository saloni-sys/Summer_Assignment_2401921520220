class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        queue<TreeNode*>q;
        vector<vector<int>>ans;
        if(root==NULL){
            return ans;
        }
        q.push(root);
        bool L_TO_R=true;
        while(!q.empty()){
            int size=q.size();
            vector<int>row(size);
            for(int i=0;i<size;i++){
                TreeNode*node=q.front();
                q.pop();

                int idx=(L_TO_R)?i:(size-1-i);
                row[idx]=node->val;

         if(node->left)
    q.push(node->left);

if(node->right)
    q.push(node->right);
            }
            L_TO_R=!L_TO_R;
            ans.push_back(row);
        }
        return ans;
    }
};
