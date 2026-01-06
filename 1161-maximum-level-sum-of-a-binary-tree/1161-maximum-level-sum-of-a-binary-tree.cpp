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
    int maxLevelSum(TreeNode* root) {
        if(root==nullptr) return 0;
        int maximumSum=INT_MIN;
        queue<TreeNode*> q;
        q.push(root);
        int level=0;
        int ansLevel=0;
        while(!q.empty())
        {
            int size=q.size();
            int sum=0;
            for(int i=0;i<size;i++)
            {
                TreeNode* front=q.front();
                q.pop();
                sum+=front->val;
                if(front->left !=nullptr) q.push(front->left);
                if(front->right!=nullptr) q.push(front->right);
            }

            level++;
             if (sum > maximumSum) {
                maximumSum = sum;
                ansLevel = level;
            }
        }
        return ansLevel;
        
        
    }
};