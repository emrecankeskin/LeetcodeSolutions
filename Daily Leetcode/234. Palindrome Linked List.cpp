struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    int getLen(ListNode* ptr){
        int count = 0;
        while(ptr){
            ptr = ptr->next;
            count++;
        }

        return count;
    }
    ListNode* reverseList(ListNode* head) {
        if(!head) return head;
        ListNode* prev = nullptr;
        ListNode* ptr = head;
        ListNode* next = nullptr;
        while(ptr){
            ptr->next = prev;
            prev = ptr;
            ptr = next;
        }        
        return ptr;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* temp = head;
        ListNode* ptr1;
        ListNode* ptr2;
        int count = getLen(temp);
        if(count <= 1){
            return true;
        }
        if(count % 2 == 0){
            ListNode* t = head;
            int a = count / 2;
            while(a--){
                t = t->next;
            }
            ptr1 = reverseList(t);
            ptr2 = head;
            t->next = nullptr;
            while(ptr2 && ptr1){
                if(ptr2->val != ptr1->val){
                    return false;
                }
                ptr2 = ptr2->next;
                ptr1 = ptr1->next;
                
            }
            return true;

        }else{
            ListNode* t = head;
            int a = count / 2;
            while(a--){
                t = t->next;
            }
            ptr1 = reverseList(t->next);
            ptr2 = head;
            t->next = nullptr;
            while(ptr2 && ptr1){
                if(ptr2->val != ptr1->val){
                    return false;
                }
                ptr2 = ptr2->next;
                ptr1 = ptr1->next;
                
            }
            return true;

        }
    }
};