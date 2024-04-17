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
    int ans = 0;
    int dfs(TreeNode* root){
        if(!root) return 0;
        int l = dfs(root->left);
        int r = dfs(root->right);

        
        ans = max(ans,l+r);
        return 1+max(l,r);

    }
    int diameterOfBinaryTree(TreeNode* root) {

        dfs(root);
        return ans;
    }
};


int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;



}
