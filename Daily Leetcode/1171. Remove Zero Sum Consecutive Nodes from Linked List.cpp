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
public:
    ListNode* removeZeroSumSublists(ListNode* head) {
        if(!head) {return head;}
        ListNode node = ListNode(0,head);
        unordered_map<int,ListNode*> mp;
        
        int pre = 0;
        mp[pre] = &node;
        while(head){
            pre += head->val;
            mp[pre] = head;
            head = head->next;
        }
        pre = 0;
        head = &node;
        while(head){
            pre += head->val;
            head->next = mp[pre]->next;
        }
        

        return node.next;
    }
};



int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;



}
