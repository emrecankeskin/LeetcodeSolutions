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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* prev = head;
        ListNode* ptr = head;
        ListNode* temp = head;
        int count = len(temp);
        if(n == count){
            head = head->next;
            return head;
        }
        if(n == 1){
            while(count != 1){
                ptr = ptr->next;
                count--;
            }
            ptr = nullptr;
            return head;
        }
        while(ptr){
            if(count == n){
                prev->next = ptr->next;
            }            
            count--;
            prev = ptr;
            ptr = ptr->next;
            
        }

        return head;  
    }
    int len(ListNode* ptr){
        int count = 0;
        while(ptr){
            ptr = ptr->next;
            count++;
        }
        return count;
    }
};

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;



}
