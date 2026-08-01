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
    ListNode* addTwoNumbers(ListNode* t1, ListNode* t2) {
        ListNode* sum = new ListNode(0);
        ListNode* t3 = sum;
        int r = 0;
        while (t1 || t2) {
            t3->val += r;
            if(t1)
                t3->val += t1->val;
            if(t2) 
                t3->val += t2->val;
            if (t3->val > 9) {
                r = t3->val / 10;
                t3->val %= 10;
            } else
                r = 0;
            if(t1)
                t1 = t1->next;
            if(t2)
                t2 = t2->next;
            if(t1 || t2 || r!=0){
                t3->next = new ListNode(0);
                t3 = t3->next;
            }
        }
        if(r != 0)
            t3->val = r;
        return sum;
    }
};