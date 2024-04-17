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
    void reorderList(ListNode* head) {
        deque<int> dq;
        ListNode* ptr = head;
        ListNode* temp = head;
        int turn = 0;
        while(temp){
            dq.push_back(temp->val);
            temp = temp->next;
        }
        while(ptr){
            if(turn == 0){
                ptr->val = dq.front();
                dq.pop_front();
                turn = 1;
            }else{
                turn = 0;
                ptr->val = dq.back();
                dq.pop_back();
            }
            ptr = ptr->next;
        }

    }
};

int main(){
    
}