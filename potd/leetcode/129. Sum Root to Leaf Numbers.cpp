#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    
    //This is the output.
    int total = 0;
    
    void DFS(TreeNode* current, int value){
        //If current == NULL, return.
        if (current == NULL){
            return;
        }
        
        //If current has no children add value*10+current->val to total. Then return.
        if (current->left == NULL && current->right == NULL){
            total += current->val;
            total += value*10;
            return;
        }
        
        //If not run DFS(current->left&right, (value*10)+current->val)
        DFS(current->left, (value*10)+current->val);
        DFS(current->right, (value*10)+current->val);  
    }
    
    int sumNumbers(TreeNode* root) {
        //Run DFS to change total.
        DFS(root, 0);
        //Return total.
        return total;
    }
};