/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 struct ListNode* removeElements(struct ListNode* head, int val) {
    while(head!=NULL&&head->val==val) {
       struct ListNode *temp=head;
        head=temp->next;
        free(temp);
    }
   struct ListNode*cur=head;
    while(cur!=NULL&&cur->next!=NULL) {
        if(cur->next->val==val)  {
            struct ListNode*temp=cur->next;
            cur->next=temp->next;
            free(temp);
        }
        else
        cur=cur->next;
    }
return head;
}
