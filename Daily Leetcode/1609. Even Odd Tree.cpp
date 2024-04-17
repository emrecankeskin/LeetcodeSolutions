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
    bool isEvenOddTree(TreeNode* root) {
        if(!root) return false;
        bool turn = true;
        int prev = 0,size;
        TreeNode* nd;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            if(turn){
                prev = 0;
            }else{
                prev = INT_MAX;
            }
            size = q.size();
            for(int i = 0;i<size; ++i){
                nd = q.front();q.pop();
                if(turn){
                    if(nd->val <= prev ||  nd->val % 2 == 0){
                        return false;
                    }
                }else{
                    if(nd->val >= prev || nd->val % 2 == 1){
                        return false;
                    }
                }

                prev = nd->val;
                if(nd->left){
                    q.push(nd->left);
                }
                if(nd->right){
                    q.push(nd->right);
                }
            }
            turn = !turn;
        }

        return true;

                
    }
};


int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;



}
