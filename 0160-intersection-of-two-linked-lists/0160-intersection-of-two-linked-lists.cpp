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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

        unordered_set<ListNode*> st;

        ListNode* temp = headA;
        while (temp != NULL) {
            st.insert(temp);      // store node address
            temp = temp->next;
        }

        temp = headB;
        while (temp != NULL) {
            if (st.count(temp))  // check address
                return temp;
            temp = temp->next;
        }

        return NULL;
    }
};