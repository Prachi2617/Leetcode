-------- -------------------------------------------------------
/*--Takes O(n) time complexity
--Takes O(1) space complexity
1. Find the middle element of list using slow fast pointer_safety
2. reverse the 2nd half of list from slow pointer to last
eg. 1->2->3->4->5
3. now you have two lists 1->2->3<-4<-5
4. to end the traversal make slow->next=null
5. not we have two heads , keep merging two list  until head2->next is NULL*/

class Solution {
public:
    void reorderList(ListNode* head)
    {
        ListNode *slow, *fast;
        slow=head;
        fast=head;
        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode *prev, *nxt,*curr;
        prev=NULL;
        curr=slow;
        while(curr)
        {
            nxt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nxt;
        }
        slow->next=NULL;
        ListNode *n1=head;
        ListNode *nxxt;
        while(prev->next)
        {
            nxxt=n1->next;
            n1->next=prev;
            prev=prev->next;
            n1=n1->next;
            n1->next=nxxt;
            n1=n1->next;
        }
    }
};


--------------------------------------------------------------------------------------------------------

/*This is Using Stack Approach
1. Insert all node in stackk first
2. count the size of stackk
3. traverse the half of size
4. start merging top of stack in the list and then pop the stack
5. and make the curr->next=NULL to end the list
--This approach takes O(N) Time Complexity
--Takes O(N) Space so this is not optimised approach */

void reorderList(ListNode *head)
{
        stack<ListNode *>st;
        ListNode* temp=head;
        int size=0;
        while(temp)
        {
            st.push(temp);
            size++;
            temp=temp->next;
        }
        ListNode * curr, *nxt;
        curr=head;
        int i=0;
        while(i<size/2)
        {
            nxt = curr->next;
            curr->next=st.top();
            st.pop();
            curr=curr->next;
            curr->next=nxt;
            curr=curr->next;
            i++;
        }
        curr->next=NULL;
}
