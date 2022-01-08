class Solution {
public:
    ListNode* deleteMiddle(ListNode* head)
    {
        ListNode *slow, *fast, *curr, *prev;
        slow=head;
        fast=head;
        if(head==NULL)
            return NULL;
        if(head->next==NULL)
        {
            delete(head);
            return NULL;
        }
        while(fast && fast->next)
        {
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }

        /*if(slow->next==NULL)
        {
            ListNode *temp=NULL;
            slow=temp;
        }

        else
        {
            curr = slow->next;
             slow->val=curr->val;
           slow->next=curr->next;
           delete(curr);
        }*/
        prev->next=slow->next;
        delete(slow);


        return head;

    }
};
