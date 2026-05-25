/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */


bool loopDetection(ListNode *head) {

  ListNode *fast, *slow;
  fast = slow = head;

  while (fast != NULL && fast->next != NULL) {
    fast = fast->next->next;
    slow = slow->next;
    if (fast == slow)
      return true;
  }

  return false;
}

ListNode* loopStart(ListNode* head) {
    if (!loopDetection(head))
        return NULL;

    ListNode *fast, *slow;
    fast = slow = head;

    while (fast != NULL && fast->next != NULL) {
        fast = fast->next->next;
        slow = slow->next;

        if (fast == slow)
            break;
    }

    if (fast == NULL || fast->next == NULL)
        return NULL;

    slow = head;

    while (fast != slow) {
        fast = fast->next;
        slow = slow->next;
    }

    return fast;
}

class Solution {
public:
    ListNode* detectCycle(ListNode* head) {
        head = loopStart(head);
        return head;
    }
};