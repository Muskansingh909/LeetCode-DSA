/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 class Solution{
    public:
ListNode *detectCycle(ListNode *head) {
    // 1. Create a "Notebook" (Set) to remember where we've been
    unordered_set<ListNode*> notebook;
    
    // 2. Start at the beginning of the list
    ListNode* current = head;

    // 3. Keep walking until we hit a dead end (nullptr)
    while (current != NULL) {
        
        // 4. CHECK: Is this room already in our notebook?
        if (notebook.count(current)) {
            return current; // Yes! We found the start of the loop.
        }
        
        // 5. If not, write this room in our notebook
        notebook.insert(current);
        
        // 6. Move to the next room
        current = current->next;
    }

    // 7. If the loop ends, there was no cycle at all
    return NULL;
}
};