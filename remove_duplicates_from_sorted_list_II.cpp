class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head)
    {
        if(head==NULL)
            return head;

        ListNode *temp,*tt,*nxt, *tt1, *new_head;

        int dup;
        ListNode *dummy=new ListNode(0);
        dummy->next=head;
        temp=dummy;
        while(temp->next && temp->next->next)
        {
            if(temp->next->val== temp->next->next->val)
            {
                dup=temp->next->val;
                while(temp->next && temp->next->val==dup)
                {
                    tt=temp->next;
                    temp->next=temp->next->next;
                    delete(tt);
                }
            }
            else
            {
               temp=temp->next;
            }

        }
        return dummy->next;
    }
};
