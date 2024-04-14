#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int sumOfLeftLeaves(Node* root) {
       if (!root)
        return 0;

    int sum = 0;
    if (root->left && !root->left->left && !root->left->right)
        sum += root->left->val;
    
    sum+=sumOfLeftLeaves(root->left);
    sum+=sumOfLeftLeaves(root->right);

    return sum; 
    }
};
