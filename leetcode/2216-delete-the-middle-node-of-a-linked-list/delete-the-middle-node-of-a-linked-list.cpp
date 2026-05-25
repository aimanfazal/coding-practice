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

int lengthFinder(ListNode* head) {
    int i = 0;
    while (head != NULL) {
        head = head->next;
        i++;
    }
    return i;
}

class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        int len = lengthFinder(head);

        if (head == NULL || len == 1)
            return NULL;
        
        ListNode *fast = head, *slow = head, *prev;

        while (fast != NULL && fast->next != NULL) {
            prev = slow;
            fast = fast->next->next;
            slow = slow->next;
        }

        prev->next = slow->next;

        return head;
    }   
    
};