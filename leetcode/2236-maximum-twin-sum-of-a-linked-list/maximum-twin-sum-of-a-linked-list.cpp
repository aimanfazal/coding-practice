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
    int pairSum(ListNode* head) {
        stack<int> st;
        ListNode* temp = head;
        int ans = INT_MIN;

        while (temp != 0) {
            st.push(temp->val);
            temp = temp->next;
        }


        while(head != 0) {
            int sum = head->val + st.top();
            ans = max(ans, sum);
            head = head->next;
            st.pop();
        }   

        return ans;
    }
};