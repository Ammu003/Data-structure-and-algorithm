#include<bits/stdc++.h>
using namespace std;
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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        TreeNode* newroot=new TreeNode(val);
        if(depth==1)
        {
            newroot->left=root;
            return newroot;
        }
        queue<TreeNode*>q;
        q.push(root);
        int currdep=1;
        while(!q.empty())
        {
            int size=q.size();
            
            for(int i=0;i<size;i++)
            {
                TreeNode* temp=q.front();
                q.pop(); 
                if(currdep==depth-1)
                {
                    TreeNode*lef=new TreeNode(val);
                    lef->left=temp->left;
                    temp->left=lef;
                    TreeNode*rig=new TreeNode(val);
                    rig->right=temp->right;
                    temp->right=rig;
                }
                else {
                    if(temp->left)q.push(temp->left);

                    if(temp->right)q.push(temp->right);
                }
                
            }
            currdep++;

        }
        return root;

    }
};