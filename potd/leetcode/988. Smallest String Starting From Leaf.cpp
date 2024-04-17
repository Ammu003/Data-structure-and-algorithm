#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string small="";
    void dfs(TreeNode* root, string &s)
    {
        if(root==NULL) return ;

        s.push_back('a'+root->val);
        if(root->left==NULL and root->right==NULL)
        {
            reverse(s.begin(),s.end());
            if(small=="")small=s;
            else small=min(small,s);
            reverse(s.begin(),s.end());
        }
        dfs(root->left,s);
        dfs(root->right,s);
        s.pop_back();
       // return ;
    }
    string smallestFromLeaf(TreeNode* root) {
        string s="";
        
        dfs(root,s);
        return small;
    }
};