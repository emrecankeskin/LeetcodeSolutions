#include <bits/stdc++.h>

using namespace std;



struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
private:
    int size(ListNode* node){
        int c = 0;
        while(node){
            c++;
            node = node->next;
        }
        return c;
    }
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        ListNode* ptr = head;
        int count = size(temp);
        count /= 2;
        while(count){
            count--;
            ptr = ptr->next;
        }
        return ptr;
    }

};

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;



}
