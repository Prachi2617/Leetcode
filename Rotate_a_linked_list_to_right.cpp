// connect the last node with the first node and then find new head after rotating list by k( k=n-k%n ) 
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k)
    {
        if(!head)
            return head;
        int n=1;
        ListNode *temp=head;
        while(temp->next)
        {
            temp=temp->next;
            n++;
        }
        temp->next=head;
        k=n-k%n;
        temp=head;
        while(k>1)
        {
            temp=temp->next;
            k--;
        }
        ListNode *new_head=temp->next;
        temp->next=NULL;
        return new_head;
    }
};
