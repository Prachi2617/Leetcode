class Solution {
public:
    ListNode* removeElements(ListNode* head, int val)
    {
       // ListNode *temp=head;
        ListNode *dummy=new ListNode(0);
        ListNode *del;
        dummy->next=head;
        ListNode *temp=dummy;
        while(temp->next)
        {
            if(temp->next->val==val)
            {
                del=temp->next;
                temp->next=temp->next->next;
                delete del;
            }
            else
                temp=temp->next;
        }
        return dummy->next;
    }
};
