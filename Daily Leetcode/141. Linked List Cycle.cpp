#include <bits/stdc++.h>

using namespace std;



struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head){
            return false;
        }
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(slow && fast){
            if(slow->val == fast->val){
                return true;
            }
            slow = slow->next;
            if(fast->next->next){
                fast = fast->next->next;
            }else{
                fast = nullptr;
            }
        }

        return false;
    }
};

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;



}
