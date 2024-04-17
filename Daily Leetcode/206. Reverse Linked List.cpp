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
    ListNode* reverseList(ListNode* head) {
        if(!head) return head;
        ListNode* prev = nullptr;
        ListNode* ptr = head;
        ListNode* next = nullptr;
        while(ptr){
            next = ptr->next;
            ptr->next = prev;
            prev = ptr;
            ptr = next;
        }        

        return prev;
    }
};

int main(){
    
}