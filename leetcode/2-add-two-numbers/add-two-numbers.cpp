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

    int lengthFinder(ListNode* head) {
        int length = 0;

        while (head != 0) {
            length++;
            head = head->next;
        }

        return length;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l, *s;

        if (lengthFinder(l1) >= lengthFinder(l2)) {
            l = l1;
            s = l2; 
        }
        else {
            l = l2;
            s = l1;
        }

        ListNode* start = l, *prev = l;
        int carry = 0;

        while (s != 0) {
            l->val += carry + s->val;
            carry = l->val / 10;
            l->val %= 10;

            prev = l;
            l = l->next;
            s = s->next;
        }

        while (l != 0) {
            l->val += carry;
            carry = l->val / 10;
            l->val %= 10;
            prev = l;
            l = l->next;
        }

        if(carry) {
            ListNode* temp = new ListNode(carry);
            prev->next = temp;
        }

        return start;
    }
};