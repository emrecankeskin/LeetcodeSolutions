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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* ptr = list1;
        ListNode* ptr2 = list2;
        ListNode* temp;
        a--;
        b = b-a;
        while(a--){
            ptr = ptr->next;
        }
        temp = ptr->next;
        ptr->next = list2;
        while(true){
            if(ptr2->next == nullptr){
                break;
            }
            ptr2 = ptr2->next;
        }
        while(b--){
            temp = temp->next;
        }
        ptr2->next = temp;

        return list1; 
    }
};

int main(){
    
}