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
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL || head->next == NULL)
            return head;

        ListNode* odd = head;              // 1st node
        ListNode* even = head->next;      // 2nd node
        ListNode* evenHead = even;        // save start of even list

        while(even != NULL && even->next != NULL){
            odd->next = odd->next->next;     // link odd to next odd
            even->next = even->next->next;   // link even to next even

            odd = odd->next;                // move odd pointer
            even = even->next;              // move even pointer
        }

        odd->next = evenHead;  // attach even list after odd
        return head;
    }
};