class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    {
        ListNode *temp1, *temp2, *temp;
        temp1=l1;
        temp2=l2;
        ListNode *new_head=new ListNode(0);
        temp=new_head;
        int q=0;
        while(temp1 && temp2)
        {
            int num=temp1->val+temp2->val+q;
            ListNode *nxt=new ListNode(0);
            nxt->val=num%10;
            temp->next=nxt;
            temp=temp->next;
            q=num/10;
            temp1=temp1->next;
            temp2=temp2->next;
        }
        while(temp1)
        {
            int num=temp1->val+q;
            ListNode *nxt=new ListNode(0);
            nxt->val=num%10;
            temp->next=nxt;
            temp=temp->next;
            q=num/10;
            temp1=temp1->next;

        }
        while(temp2)
        {
            int num=temp2->val+q;
            ListNode *nxt=new ListNode(0);
            nxt->val=num%10;
            temp->next=nxt;
            temp=temp->next;
            q=num/10;
            temp2=temp2->next;
        }
        if(q==1)
        {
             ListNode *nxt=new ListNode(1);
            temp->next=nxt;
            temp=temp->next;
        }
        return new_head->next;
    }
};
