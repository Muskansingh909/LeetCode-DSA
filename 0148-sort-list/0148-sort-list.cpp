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
    ListNode* sortList(ListNode* head) {
        if(head==NULL) return head;
        vector<int> vt;
        ListNode* temp=head;
        

        
        while(temp!=NULL){
            vt.push_back(temp->val);
            temp=temp->next;

        }
        sort(vt.begin(),vt.end());
        temp=head;
        for(int i=0;i<vt.size();i++){
            temp->val=vt[i];
            temp=temp->next;
        }
        return head;


        
    }
};