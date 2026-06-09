/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* currNode, *nextNode;
        currNode = node;
        nextNode = currNode->next;
        
        while (nextNode != NULL) {
            currNode->val = nextNode->val;
            if (nextNode->next == NULL)
                break;
            currNode = currNode->next;
            nextNode = nextNode->next;
        }

        currNode->next = NULL;
        delete nextNode;
        return;        
    }
};