/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if(root==NULL) return 0;
        unsigned long long ans=0;
        queue<pair<TreeNode*,unsigned long long>>q;
        q.push({root,0});
        while(!q.empty()){
            int size=q.size();
            unsigned long long left=0;
            unsigned long long right=0;
            for(int i=0;i<size;i++){
                auto[node,index]=q.front();
                q.pop();
                if(i==0) left=index;
                if(i==size-1) right=index;
                if(node->left!=NULL)q.push({node->left,2*index+1});
                if(node->right!=NULL)q.push({node->right,2*index+2});

            }
            unsigned long long width=right-left+1;
            ans=max(width,ans);
        }
        return ans;
    }
};