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
    bool isPalindrome(ListNode* head) {
        ListNode* temp = head;
        stack<int> rev;

        while(temp != nullptr){
            rev.push(temp -> val);
            temp = temp -> next;
        }

        temp = head;

        while(temp != nullptr){
            if(temp -> val != rev.top())
                return false;
            temp = temp -> next;
            rev.pop();
        }

        return true;
    }
};