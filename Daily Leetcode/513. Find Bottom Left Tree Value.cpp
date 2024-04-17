#include <bits/stdc++.h>

using namespace std;






struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
    public:
        int findBottomLeftValue(TreeNode* root) {
        if(!root) return 0;
        int val;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            auto node = q.front();q.pop();
            val = node->val;
            if(node->left){
                q.push(node->left);
            }
            if(node->right){
                q.push(node->right);
            }
        }

        return val;
    }
};


int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;



}
