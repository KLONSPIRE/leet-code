/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head = nullptr;
        ListNode* temp;
        int x;
        while(list1 != nullptr && list2 != nullptr){
            if(list1->val <= list2->val){
                x = list1 -> val;
                list1 = list1 -> next;
            }else {
                x = list2 -> val;
                list2 = list2 -> next;
            }
            if(head == nullptr){
                head = new ListNode(x);
                temp = head;
            }else{
            temp -> next = new ListNode(x);
            temp = temp -> next;
            }
        }

        
        ListNode* t = list1 == nullptr ? list2 : list1;

        while(t != nullptr){
                x = t -> val;
                t = t -> next;
            if(head == nullptr){
                head = new ListNode(x);
                temp = head;
            }else{
            temp -> next = new ListNode(x);
            temp = temp -> next;
            }
        }

        return head;
    }
};