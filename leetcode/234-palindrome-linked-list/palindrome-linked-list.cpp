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
    ListNode* findMid(ListNode* head) {
        ListNode* fast = head->next;
        ListNode* slow = head;

        while (fast != NULL && fast->next != NULL) {
            fast = fast->next->next;
            slow = slow->next;
        }

        return slow;
    }

    void reverse(ListNode*& head) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* forw = NULL;

        while (curr != NULL) {
            forw = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forw;
        }

        head = prev;
    }

    bool isPalindrome(ListNode* head) {
        if (head == NULL)
            return false;
        else if (head->next == NULL)
            return true;

        ListNode* temp = findMid(head);
        temp = temp->next;
        reverse(temp);

        while (temp != NULL ) {
            if (temp->val != head->val)
                return false;
            temp = temp->next;
            head = head->next;
        }

        return true;
    }
};